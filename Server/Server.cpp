#include <iostream>
#include "../SampleRPC/SampleRPC_h.h"

void SendDataSynchronouslyToPipe(unsigned long* ulData)
{
	std::cout << "SendDataSynchronouslyToPipe:" << *ulData << std::endl;
}

void ReceiveDataSynchronouslyFromPipe(unsigned long* ulData)
{
	*ulData = 1000;
	std::cout << "ReceiveDataSynchronouslyFromPipe:" << *ulData << std::endl;
}

void SendDataAsynchronouslyToPipe(PRPC_ASYNC_STATE asyncState, USER userData)
{
	int nReply = 1;
	std::cout << "Name: " << userData.name << std::endl;
 	std::cout << "Age: " << userData.age << std::endl;
	RpcAsyncCompleteCall(asyncState, &nReply);
}

void Output(const unsigned char *szOutput)
{
	std::cout << szOutput << std::endl;
}

int main()
{
	RPC_STATUS status = RPC_S_OK;

	status = RpcServerUseProtseqEp(
		reinterpret_cast<unsigned char*>("ncacn_np"),
		RPC_C_PROTSEQ_MAX_REQS_DEFAULT,
		reinterpret_cast<unsigned char*>("\\pipe\\SampleRPCPipe"),
		NULL);

	if (status != RPC_S_OK)
		exit(status);

	status = RpcServerRegisterIf2(
		SamepleRPCInterface_v1_0_s_ifspec,
		NULL,
		NULL,
		RPC_IF_ALLOW_CALLBACKS_WITH_NO_AUTH,
		RPC_C_LISTEN_MAX_CALLS_DEFAULT,
		(unsigned)-1,
		NULL);

	if (status != RPC_S_OK)
		exit(status);


	status = RpcServerListen(
		1,
		RPC_C_LISTEN_MAX_CALLS_DEFAULT,
		FALSE);

	if (status)
		exit(status);
}


void* __RPC_USER midl_user_allocate(size_t size)
{
	return malloc(size);
}

void __RPC_USER midl_user_free(void* p)
{
	free(p);
}
