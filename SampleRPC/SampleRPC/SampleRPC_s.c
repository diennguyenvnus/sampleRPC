

/* this ALWAYS GENERATED file contains the RPC server stubs */


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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>
#include "SampleRPC_h.h"

#define TYPE_FORMAT_STRING_SIZE   31                                
#define PROC_FORMAT_STRING_SIZE   121                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _SampleRPC_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } SampleRPC_MIDL_TYPE_FORMAT_STRING;

typedef struct _SampleRPC_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } SampleRPC_MIDL_PROC_FORMAT_STRING;

typedef struct _SampleRPC_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } SampleRPC_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

extern const SampleRPC_MIDL_TYPE_FORMAT_STRING SampleRPC__MIDL_TypeFormatString;
extern const SampleRPC_MIDL_PROC_FORMAT_STRING SampleRPC__MIDL_ProcFormatString;
extern const SampleRPC_MIDL_EXPR_FORMAT_STRING SampleRPC__MIDL_ExprFormatString;

/* Standard interface: SamepleRPCInterface, ver. 1.0,
   GUID={0x4508636b,0x0ffb,0x4d86,{0xbb,0xa6,0x0d,0xf1,0xa9,0xd9,0xfc,0x4c}} */


extern const MIDL_SERVER_INFO SamepleRPCInterface_ServerInfo;

extern const RPC_DISPATCH_TABLE SamepleRPCInterface_v1_0_DispatchTable;

static const RPC_SERVER_INTERFACE SamepleRPCInterface___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x4508636b,0x0ffb,0x4d86,{0xbb,0xa6,0x0d,0xf1,0xa9,0xd9,0xfc,0x4c}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&SamepleRPCInterface_v1_0_DispatchTable,
    0,
    0,
    0,
    &SamepleRPCInterface_ServerInfo,
    0x04000000
    };
RPC_IF_HANDLE SamepleRPCInterface_v1_0_s_ifspec = (RPC_IF_HANDLE)& SamepleRPCInterface___RpcServerInterface;

extern const MIDL_STUB_DESC SamepleRPCInterface_StubDesc;


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const SampleRPC_MIDL_PROC_FORMAT_STRING SampleRPC__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure SendDataSynchronouslyToPipe */

			0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10 */	NdrFcShort( 0x1c ),	/* 28 */
/* 12 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14 */	0x40,		/* Oi2 Flags:  has ext, */
			0x1,		/* 1 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ulData */

/* 24 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 26 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReceiveDataSynchronouslyFromPipe */

/* 30 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 32 */	NdrFcLong( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x1 ),	/* 1 */
/* 38 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x1c ),	/* 28 */
/* 44 */	0x40,		/* Oi2 Flags:  has ext, */
			0x1,		/* 1 */
/* 46 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ulData */

/* 54 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 56 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendDataAsynchronouslyToPipe */

/* 60 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 62 */	NdrFcLong( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x2 ),	/* 2 */
/* 68 */	NdrFcShort( 0x6c ),	/* x86 Stack size/offset = 108 */
/* 70 */	NdrFcShort( 0x88 ),	/* 136 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	0xc0,		/* Oi2 Flags:  has ext, has async handle */
			0x1,		/* 1 */
/* 76 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter userData */

/* 84 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 86 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 88 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */

	/* Procedure Output */

/* 90 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 92 */	NdrFcLong( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x3 ),	/* 3 */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x1,		/* 1 */
/* 106 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szOutput */

/* 114 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 116 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 118 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

			0x0
        }
    };

static const SampleRPC_MIDL_TYPE_FORMAT_STRING SampleRPC__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  8 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x64 ),	/* 100 */
/* 14 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 16 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 18 */	NdrFcShort( 0x68 ),	/* 104 */
/* 20 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 22 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (10) */
/* 24 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 26 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 28 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short SamepleRPCInterface_FormatStringOffsetTable[] =
    {
    0,
    30,
    60,
    90
    };


static const MIDL_STUB_DESC SamepleRPCInterface_StubDesc = 
    {
    (void *)& SamepleRPCInterface___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
    0,
    0,
    SampleRPC__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

static const RPC_DISPATCH_FUNCTION SamepleRPCInterface_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrAsyncServerCall,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE SamepleRPCInterface_v1_0_DispatchTable = 
    {
    4,
    (RPC_DISPATCH_FUNCTION*)SamepleRPCInterface_table
    };

static const SERVER_ROUTINE SamepleRPCInterface_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)SendDataSynchronouslyToPipe,
    (SERVER_ROUTINE)ReceiveDataSynchronouslyFromPipe,
    (SERVER_ROUTINE)SendDataAsynchronouslyToPipe,
    (SERVER_ROUTINE)Output
    };

static const MIDL_SERVER_INFO SamepleRPCInterface_ServerInfo = 
    {
    &SamepleRPCInterface_StubDesc,
    SamepleRPCInterface_ServerRoutineTable,
    SampleRPC__MIDL_ProcFormatString.Format,
    SamepleRPCInterface_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

