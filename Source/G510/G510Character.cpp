// Copyright Epic Games, Inc. All Rights Reserved.

#include "G510Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "AbilitySystemComponent.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbility_CharacterJump.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/PlayerController.h"
#include "VMCharacterHealth.h"
#include "ModelViewViewModel/Public/MVVMSubsystem.h"
#include "Engine/AssetManager.h"
#include "InputMappingContext.h"
#include "EnhancedTest/MyEnhancedInputComponent.h"
#include "EnhancedTest/MyGameplayTags.h"
//#include "Logging/LogMacros.h"
//////////////////////////////////////////////////////////////////////////
// AG510Character
#define LOCTEXT_NAMESPACE "AG510Character"

AG510Character::AG510Character()
{
	
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
	UE_LOG(LogTemp, Warning ,TEXT("%S"), __FUNCTION__); //*FString(__FUNCTION__)
	//BIND_UOBJECT_DELEGATE()
	
}


class UAbilitySystemComponent* AG510Character::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AG510Character::TestFunc()
{
	int IntNum = 8;
	TArray< uint8 > ByteBuffer;
	ByteBuffer.Add(0);
	int Pos = 0;
	//序列化
	int Size = sizeof(IntNum);
	
	FMemory::Memcpy(ByteBuffer.GetData() + Pos , &IntNum, Size);
	Pos += Size;

	//反序列化
	Pos = 0;
	int NumNeed = 0;
	FMemory::Memcpy(&NumNeed, ByteBuffer.GetData() + Pos, Size);
}

void AG510Character::BeginPlay()
{

	// Call the base class  
	Super::BeginPlay();
	UObject* as= soft1.TryLoad();
	FSoftObjectPtr PP(soft2);
	UObject* ee=PP.Get();
	
	//ee.load
	VMHealth = NewObject<UVMCharacterHealth>();

	FMVVMViewModelContext context;
	context.ContextClass = UVMCharacterHealth::StaticClass();
	context.ContextName = FName("ONE");
	GEngine->GetEngineSubsystem<UMVVMSubsystem>()->GetGlobalViewModelCollection()->AddViewModelInstance(context, VMHealth);
	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
			DefaultMappingContext->GetMapping(0).Key;
		}
	}

}

//////////////////////////////////////////////////////////////////////////
// Input
#pragma optimize("",off)
void AG510Character::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	AbilitySystemComponent->GiveAbility(
		FGameplayAbilitySpec(UGameplayAbility_CharacterJump::StaticClass(), 1, static_cast<int32>(EGAS0AbilityInputID::JumpAction), this));

}

void AG510Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	UMyEnhancedInputComponent* MyEnhancedInputComponent = Cast<UMyEnhancedInputComponent>(PlayerInputComponent);

	//Make sure to set your input component class in the InputSettings->DefaultClasses
	check(MyEnhancedInputComponent);

	const FMyGameplayTags& GameplayTags = FMyGameplayTags::Get();

	//Bind Input actions by tag
	MyEnhancedInputComponent->BindActionByTag(InputConfig, GameplayTags.InputTag_Move, ETriggerEvent::Triggered, this, &AG510Character::Move);
	MyEnhancedInputComponent->BindActionByTag(InputConfig, GameplayTags.InputTag_Look_Mouse, ETriggerEvent::Triggered, this, &AG510Character::MousePos);
	MyEnhancedInputComponent->BindActionByTag(InputConfig, GameplayTags.InputTag_Look_Stick, ETriggerEvent::Triggered, this, &AG510Character::Look);
	//MyEnhancedInputComponent->BindActionByTag(InputConfig, GameplayTags.InputTag_Fire, ETriggerEvent::Triggered, this, &AG510Character::Input_Fire);
	MyEnhancedInputComponent->BindActionByTag(InputConfig, GameplayTags.InputTag_Jump, ETriggerEvent::Triggered, this, &AG510Character::Jump);
	// Set up action bindings
	//if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {
	//	

	//	//Jumping
	//	/*EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
	//	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);*/
	//	if (AbilitySystemComponent)
	//	{
	//		//TGS()
	//		FTopLevelAssetPath aaa(TEXT("/Script/G510"), TEXT("EGAS0AbilityInputID"));

	//		const FGameplayAbilityInputBinds Binds(
	//			FString(),
	//			FString(),
	//			FTopLevelAssetPath(TEXT("/Script/G510"),TEXT("EGAS0AbilityInputID")),
	//			static_cast<int32>(EGAS0AbilityInputID::JumpAction),
	//			static_cast<int32>(EGAS0AbilityInputID::JumpAction));
	//		AbilitySystemComponent->BindAbilityActivationToInputComponent(EnhancedInputComponent, Binds);
	//	}
	//	EnhancedInputComponent->BindAction(MouseButtonAction,ETriggerEvent::Started,this,&AG510Character::MousePos);
	//	//Moving
	//	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AG510Character::Move);

	//	//Looking
	//	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AG510Character::Look);

	//}

}
#pragma optimize("",on)
void AG510Character::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AG510Character::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	//if (Controller != nullptr)
	//{
	//	// add yaw and pitch input to controller
	//	AddControllerYawInput(LookAxisVector.X);
	//	AddControllerPitchInput(LookAxisVector.Y);
	//}
}

void AG510Character::MousePos(const FInputActionValue& Value)
{

}

#undef LOCTEXT_NAMESPACE


