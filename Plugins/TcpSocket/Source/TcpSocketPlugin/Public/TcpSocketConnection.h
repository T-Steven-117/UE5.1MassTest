// SpartanTools 2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HAL/Runnable.h"
#include "HAL/ThreadSafeBool.h"
#include "Containers/Queue.h"
#include "UObject/WeakObjectPtrTemplates.h"
#include "TcpSocketConnection.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FTcpSocketDisconnectDelegate, int32, ConnectionId);
DECLARE_DYNAMIC_DELEGATE_OneParam(FTcpSocketConnectDelegate, int32, ConnectionId);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FTcpSocketReceivedMessageDelegate, int32, ConnectionId, UPARAM(ref) TArray<uint8>&, Message);

UCLASS(Blueprintable, BlueprintType)
class TCPSOCKETPLUGIN_API ATcpSocketConnection : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATcpSocketConnection();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/* 返回新连接的ID。*/
	UFUNCTION(BlueprintCallable, Category = "Socket")
		void Connect(const FString& ipAddress, int32 port,
			const FTcpSocketDisconnectDelegate& OnDisconnected, const FTcpSocketConnectDelegate& OnConnected,
			const FTcpSocketReceivedMessageDelegate& OnMessageReceived, int32& ConnectionId);

	/* 从连接ID断开连接。 */
	UFUNCTION(BlueprintCallable, Category = "Socket")
		void Disconnect(int32 ConnectionId);

	/* False表示我们没有连接到套接字，数据没有发送。“True”不能保证成功发送，只是发送过程中，仍然保持连接。 */
	UFUNCTION(BlueprintCallable, Category = "Socket") // use meta to set first default param to 0
		bool SendData(int32 ConnectionId, FString DataToSend);

	/*
	当连接建立时点击PIE中的Stop(这是一个阻塞操作，需要一段时间超时)，

	我们的ATcpSocketConnection actor将被销毁，然后线程将通过AsyncTask发送一个消息来调用ExecuteOnConnected，
	ExecuteOnDisconnected或executeonmessagerreceived。
	当我们输入他们的代码时，“this”将指向随机内存。
	为了避免这个问题，我们也发回一个弱指针。如果指针是有效的，就可以了。
	这就是为什么下面的三个方法都有一个TWeakObjectPtr。
	*/

	//UFUNCTION(Category = "Socket")	
	void ExecuteOnConnected(int32 WorkerId, TWeakObjectPtr<ATcpSocketConnection> thisObj);

	//UFUNCTION(Category = "Socket")
	void ExecuteOnDisconnected(int32 WorkerId, TWeakObjectPtr<ATcpSocketConnection> thisObj);

	//UFUNCTION(Category = "Socket")
	void ExecuteOnMessageReceived(int32 ConnectionId, TWeakObjectPtr<ATcpSocketConnection> thisObj);

	/*UFUNCTION(BlueprintPure, meta = (DisplayName = "Append Bytes", CommutativeAssociativeBinaryOperator = "true"), Category = "Socket")
	static TArray<uint8> Concat_BytesBytes(const TArray<uint8>& A, const TArray<uint8>& B);*/

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Append Bytes", CommutativeAssociativeBinaryOperator = "true"), Category = "Socket")
		static TArray<uint8> Concat_BytesBytes(TArray<uint8> A, TArray<uint8> B);
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Int To Bytes", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Socket")
		static TArray<uint8> Conv_IntToBytes(int32 InInt);
	UFUNCTION(BlueprintPure, meta = (DisplayName = "String To Bytes", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Socket")
		static TArray<uint8> Conv_StringToBytes(const FString& InStr);
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Float To Bytes", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Socket")
		static TArray<uint8> Conv_FloatToBytes(float InFloat);
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Byte To Bytes", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Socket")
		static TArray<uint8> Conv_ByteToBytes(uint8 InByte);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read Int", Keywords = "read int"), Category = "Socket")
		static int32 Message_ReadInt(UPARAM(ref) TArray<uint8>& Message);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read Byte", Keywords = "read byte int8 uint8"), Category = "Socket")
		static uint8 Message_ReadByte(UPARAM(ref) TArray<uint8>& Message);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read Bytes", Keywords = "read bytes"), Category = "Socket")
		static bool Message_ReadBytes(int32 NumBytes, UPARAM(ref) TArray<uint8>& Message, TArray<uint8>& ReturnArray);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read Float", Keywords = "read float"), Category = "Socket")
		static float Message_ReadFloat(UPARAM(ref) TArray<uint8>& Message);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read String", Keywords = "read string"), Category = "Socket")
		static FString Message_ReadString(UPARAM(ref) TArray<uint8>& Message, int32 StringLength);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Socket")
		bool isConnected(int32 ConnectionId);

	/* 由单独的线程用于打印到主线程上的控制台。 */
	static void PrintToConsole(FString Str, bool Error);

	/*缓冲区大小(以字节为单位)。目前未使用 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket")
		int32 SendBufferSize = 16384;

	/* 缓冲区大小(以字节为单位)。它只在创建套接字时设置，不会在创建套接字后设置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket")
		int32 ReceiveBufferSize = 16384;

	/* 滴答声之间的时间。请考虑到在现代PC上需要1毫秒才能唤醒的事实，所以0.01f实际上是0.011f */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket")
		float TimeBetweenTicks = 0.008f;

private:
	TMap<int32, TSharedRef<class FTcpSocketWorker>> TcpWorkers;

	FTcpSocketDisconnectDelegate DisconnectedDelegate;
	FTcpSocketConnectDelegate ConnectedDelegate;
	FTcpSocketReceivedMessageDelegate MessageReceivedDelegate;
};

class FTcpSocketWorker : public FRunnable, public TSharedFromThis<FTcpSocketWorker>
{

	/** Thread to run the worker FRunnable on */
	FRunnableThread* Thread = nullptr;

private:
	class FSocket* Socket = nullptr;
	FString ipAddress;
	int port;
	TWeakObjectPtr<ATcpSocketConnection> ThreadSpawnerActor;
	int32 id;
	int32 RecvBufferSize;
	int32 ActualRecvBufferSize;
	int32 SendBufferSize;
	int32 ActualSendBufferSize;
	float TimeBetweenTicks;
	FThreadSafeBool bConnected = false;

	// SPSC = single producer, single consumer.
	TQueue<TArray<uint8>, EQueueMode::Spsc> Inbox; // 从套接字读取并发送到主线程的消息。运行线程是生产者，主线线程是消费者。
	TQueue<TArray<uint8>, EQueueMode::Spsc> Outbox; //从主线程发送到套接字的消息。主线程是生产者，流线程是消费者。

public:

	//Constructor / Destructor
	FTcpSocketWorker(FString inIp, const int32 inPort, TWeakObjectPtr<ATcpSocketConnection> InOwner, int32 inId, int32 inRecvBufferSize, int32 inSendBufferSize, float inTimeBetweenTicks);
	virtual ~FTcpSocketWorker();

	void Start();

	/* 将消息添加到传出消息队列 */
	void AddToOutbox(TArray<uint8> Message);

	/*队列中读取消息*/
	TArray<uint8> ReadFromInbox();

	// Begin FRunnable interface.
	virtual bool Init() override;
	virtual uint32 Run() override;
	virtual void Stop() override;
	virtual void Exit() override;
	// End FRunnable interface	

	/** 关闭线程*/
	void SocketShutdown();

	/* Getter for bConnected */
	bool isConnected();

private:
	/* Blocking send */
	bool BlockingSend(const uint8* Data, int32 BytesToSend);

	/** thread should continue running */
	FThreadSafeBool bRun = false;

	/** Critical section preventing multiple threads from sending simultaneously */
	//FCriticalSection SendCriticalSection;
};