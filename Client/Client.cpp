#include <iostream>
#include "../SampleRPC/SampleRPC_h.h"

int main()
{
	RPC_ASYNC_STATE asyncState;
	RPC_STATUS status;
	unsigned char* szStringBinding = NULL;

	status = RpcStringBindingCompose(
		NULL,
		reinterpret_cast<unsigned char*>("ncacn_np"),
		reinterpret_cast<unsigned char*>("localhost"),
		reinterpret_cast<unsigned char*>("\\pipe\\SampleRPCPipe"),
		NULL,
		&szStringBinding);

	if (status)
		exit(status);

	status = RpcBindingFromStringBinding(
		szStringBinding,
		&SampleRPCBinding);

	if (status)
		exit(status);

	RpcTryExcept
	{
		unsigned char welcomeMsg[] = "Hello RPC!";
		unsigned long sendingVal = 100;
		SendDataSynchronouslyToPipe(&sendingVal);
		unsigned long receivingVal;
		ReceiveDataSynchronouslyFromPipe(&receivingVal);
		std::cout << "Received value from Pipe:" << receivingVal << std::endl;

		std::cout << "Calling Output:" << receivingVal << std::endl;
		Output(welcomeMsg);
	}
	RpcExcept(1)
	{
		std::cerr << "Runtime reported exception " << RpcExceptionCode() << std::endl;
		exit(0);
	}
	RpcEndExcept

	status = RpcAsyncInitializeHandle(&asyncState, sizeof(RPC_ASYNC_STATE));

	if (status)
		exit(status);

	asyncState.UserInfo = NULL;
	asyncState.NotificationType = RpcNotificationTypeEvent;

	asyncState.u.hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);

	if (asyncState.u.hEvent == 0)
	{
		std::cerr << "Async Event Error" << std::endl;
		exit(0);
	}

	RpcTryExcept
	{
		std::cout << "\nCalling the remote procedure 'SendDataAsynchronouslyToPipe'\n";
		USER aUser;
		aUser.age = 30;
		memcpy(aUser.name, "Dien Nguyen", sizeof(aUser.name));
		SendDataAsynchronouslyToPipe(&asyncState, aUser);
	}
	RpcExcept(1)
	{
		std::cerr << "Runtime reported exception " << RpcExceptionCode() << std::endl;
		exit(0);
	}
	RpcEndExcept

	if (WaitForSingleObject(asyncState.u.hEvent, INFINITE) == WAIT_FAILED)
	{
		RpcRaiseException(-1);
	}
	
	status = RpcStringFree(
		&szStringBinding);

	if (status)
		exit(status);

	status = RpcBindingFree(
		&SampleRPCBinding);

	if (status)
		exit(status);
};

void* __RPC_USER midl_user_allocate(size_t size)
{
	return malloc(size);
}


void __RPC_USER midl_user_free(void* p)
{
	free(p);
}