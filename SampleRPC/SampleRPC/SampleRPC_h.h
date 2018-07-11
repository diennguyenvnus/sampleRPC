

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 10:14:07 2038
 */
/* Compiler settings for SampleRPC.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, app_config, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __SampleRPC_h_h__
#define __SampleRPC_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __SamepleRPCInterface_INTERFACE_DEFINED__
#define __SamepleRPCInterface_INTERFACE_DEFINED__

/* interface SamepleRPCInterface */
/* [implicit_handle][version][uuid] */ 

typedef struct s_User
    {
    unsigned char name[ 100 ];
    int age;
    } 	USER;

void SendDataSynchronouslyToPipe( 
    /* [in] */ unsigned long *ulData);

void ReceiveDataSynchronouslyFromPipe( 
    /* [out] */ unsigned long *ulData);

/* [async] */ void  SendDataAsynchronouslyToPipe( 
    /* [in] */ PRPC_ASYNC_STATE SendDataAsynchronouslyToPipe_AsyncHandle,
    /* [in] */ USER userData);

void Output( 
    /* [string][in] */ const unsigned char *szOutput);


extern handle_t SampleRPCBinding;


extern RPC_IF_HANDLE SamepleRPCInterface_v1_0_c_ifspec;
extern RPC_IF_HANDLE SamepleRPCInterface_v1_0_s_ifspec;
#endif /* __SamepleRPCInterface_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


