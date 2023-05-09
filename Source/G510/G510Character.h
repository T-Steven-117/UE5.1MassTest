// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "G510Character.generated.h"

class UInputConfig;
class UVMCharacterHealth;

UENUM(BlueprintType)
enum class EGAS0AbilityInputID : uint8
{

	// 0 None
	None				UMETA(DisplayName = "None"),
	// 1 Jump
	JumpAction				UMETA(DisplayName = "JumpAction"),
	// 2 Sprint
	Sprint				UMETA(DisplayName = "Sprint"),
};

UCLASS(config = Game)
class AG510Character : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		UInputConfig* InputConfig;
	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* MoveAction;

	/** MouseButton Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* MouseButtonAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* LookAction;
	virtual void PossessedBy(AController* NewController) override;
public:
	AG510Character();
	// Implement IAbilitySystemInterface
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class UAbilitySystemComponent* AbilitySystemComponent;
	UPROPERTY(Transient, EditAnywhere, BlueprintReadOnly)
		class UVMCharacterHealth* VMHealth;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FSoftObjectPath soft1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FSoftObjectPath soft2;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSoftObjectPtr<AActor> MeshAssetPtr;
	UFUNCTION(BlueprintCallable)
		void TestFunc();
	UFUNCTION(BlueprintCallable, CustomThunk, meta = (CustomStructureParam = "Variable", AutoCreateRefTerm = "Variable"), Category = "MyProject")
		void FunctionName(const int32& Variable);
	DECLARE_FUNCTION(execFunctionName)
	{
	}
protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	void MousePos(const FInputActionValue& Value);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// To add mapping context
	virtual void BeginPlay();

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

