/*** Autogenerated by WIDL 1.5.25 from include/objectarray.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __objectarray_h__
#define __objectarray_h__

/* Forward declarations */

#ifndef __IObjectArray_FWD_DEFINED__
#define __IObjectArray_FWD_DEFINED__
typedef interface IObjectArray IObjectArray;
#endif

#ifndef __IObjectCollection_FWD_DEFINED__
#define __IObjectCollection_FWD_DEFINED__
typedef interface IObjectCollection IObjectCollection;
#endif

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IObjectArray interface
 */
#ifndef __IObjectArray_INTERFACE_DEFINED__
#define __IObjectArray_INTERFACE_DEFINED__

DEFINE_GUID(IID_IObjectArray, 0x92ca9dcd, 0x5622, 0x4bba, 0xa8,0x05, 0x5e,0x9f,0x54,0x1b,0xd8,0xc9);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("92ca9dcd-5622-4bba-a805-5e9f541bd8c9")
IObjectArray : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetCount(
        UINT *pcObjects) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetAt(
        UINT uiIndex,
        REFIID riid,
        void **ppv) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IObjectArray, 0x92ca9dcd, 0x5622, 0x4bba, 0xa8,0x05, 0x5e,0x9f,0x54,0x1b,0xd8,0xc9)
#endif
#else
typedef struct IObjectArrayVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IObjectArray* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IObjectArray* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IObjectArray* This);

    /*** IObjectArray methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IObjectArray* This,
        UINT *pcObjects);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IObjectArray* This,
        UINT uiIndex,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IObjectArrayVtbl;
interface IObjectArray {
    CONST_VTBL IObjectArrayVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IObjectArray_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IObjectArray_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IObjectArray_Release(This) (This)->lpVtbl->Release(This)
/*** IObjectArray methods ***/
#define IObjectArray_GetCount(This,pcObjects) (This)->lpVtbl->GetCount(This,pcObjects)
#define IObjectArray_GetAt(This,uiIndex,riid,ppv) (This)->lpVtbl->GetAt(This,uiIndex,riid,ppv)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IObjectArray_QueryInterface(IObjectArray* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IObjectArray_AddRef(IObjectArray* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IObjectArray_Release(IObjectArray* This) {
    return This->lpVtbl->Release(This);
}
/*** IObjectArray methods ***/
static FORCEINLINE HRESULT IObjectArray_GetCount(IObjectArray* This,UINT *pcObjects) {
    return This->lpVtbl->GetCount(This,pcObjects);
}
static FORCEINLINE HRESULT IObjectArray_GetAt(IObjectArray* This,UINT uiIndex,REFIID riid,void **ppv) {
    return This->lpVtbl->GetAt(This,uiIndex,riid,ppv);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IObjectArray_GetCount_Proxy(
    IObjectArray* This,
    UINT *pcObjects);
void __RPC_STUB IObjectArray_GetCount_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IObjectArray_GetAt_Proxy(
    IObjectArray* This,
    UINT uiIndex,
    REFIID riid,
    void **ppv);
void __RPC_STUB IObjectArray_GetAt_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IObjectArray_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IObjectCollection interface
 */
#ifndef __IObjectCollection_INTERFACE_DEFINED__
#define __IObjectCollection_INTERFACE_DEFINED__

DEFINE_GUID(IID_IObjectCollection, 0x5632b1a4, 0xe38a, 0x400a, 0x92,0x8a, 0xd4,0xcd,0x63,0x23,0x02,0x95);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("5632b1a4-e38a-400a-928a-d4cd63230295")
IObjectCollection : public IObjectArray
{
    virtual HRESULT STDMETHODCALLTYPE AddObject(
        IUnknown *punk) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddFromArray(
        IObjectArray *poaSource) = 0;

    virtual HRESULT STDMETHODCALLTYPE RemoveObjectAt(
        UINT uiIndex) = 0;

    virtual HRESULT STDMETHODCALLTYPE Clear(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IObjectCollection, 0x5632b1a4, 0xe38a, 0x400a, 0x92,0x8a, 0xd4,0xcd,0x63,0x23,0x02,0x95)
#endif
#else
typedef struct IObjectCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IObjectCollection* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IObjectCollection* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IObjectCollection* This);

    /*** IObjectArray methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IObjectCollection* This,
        UINT *pcObjects);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IObjectCollection* This,
        UINT uiIndex,
        REFIID riid,
        void **ppv);

    /*** IObjectCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *AddObject)(
        IObjectCollection* This,
        IUnknown *punk);

    HRESULT (STDMETHODCALLTYPE *AddFromArray)(
        IObjectCollection* This,
        IObjectArray *poaSource);

    HRESULT (STDMETHODCALLTYPE *RemoveObjectAt)(
        IObjectCollection* This,
        UINT uiIndex);

    HRESULT (STDMETHODCALLTYPE *Clear)(
        IObjectCollection* This);

    END_INTERFACE
} IObjectCollectionVtbl;
interface IObjectCollection {
    CONST_VTBL IObjectCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IObjectCollection_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IObjectCollection_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IObjectCollection_Release(This) (This)->lpVtbl->Release(This)
/*** IObjectArray methods ***/
#define IObjectCollection_GetCount(This,pcObjects) (This)->lpVtbl->GetCount(This,pcObjects)
#define IObjectCollection_GetAt(This,uiIndex,riid,ppv) (This)->lpVtbl->GetAt(This,uiIndex,riid,ppv)
/*** IObjectCollection methods ***/
#define IObjectCollection_AddObject(This,punk) (This)->lpVtbl->AddObject(This,punk)
#define IObjectCollection_AddFromArray(This,poaSource) (This)->lpVtbl->AddFromArray(This,poaSource)
#define IObjectCollection_RemoveObjectAt(This,uiIndex) (This)->lpVtbl->RemoveObjectAt(This,uiIndex)
#define IObjectCollection_Clear(This) (This)->lpVtbl->Clear(This)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IObjectCollection_QueryInterface(IObjectCollection* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IObjectCollection_AddRef(IObjectCollection* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IObjectCollection_Release(IObjectCollection* This) {
    return This->lpVtbl->Release(This);
}
/*** IObjectArray methods ***/
static FORCEINLINE HRESULT IObjectCollection_GetCount(IObjectCollection* This,UINT *pcObjects) {
    return This->lpVtbl->GetCount(This,pcObjects);
}
static FORCEINLINE HRESULT IObjectCollection_GetAt(IObjectCollection* This,UINT uiIndex,REFIID riid,void **ppv) {
    return This->lpVtbl->GetAt(This,uiIndex,riid,ppv);
}
/*** IObjectCollection methods ***/
static FORCEINLINE HRESULT IObjectCollection_AddObject(IObjectCollection* This,IUnknown *punk) {
    return This->lpVtbl->AddObject(This,punk);
}
static FORCEINLINE HRESULT IObjectCollection_AddFromArray(IObjectCollection* This,IObjectArray *poaSource) {
    return This->lpVtbl->AddFromArray(This,poaSource);
}
static FORCEINLINE HRESULT IObjectCollection_RemoveObjectAt(IObjectCollection* This,UINT uiIndex) {
    return This->lpVtbl->RemoveObjectAt(This,uiIndex);
}
static FORCEINLINE HRESULT IObjectCollection_Clear(IObjectCollection* This) {
    return This->lpVtbl->Clear(This);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IObjectCollection_AddObject_Proxy(
    IObjectCollection* This,
    IUnknown *punk);
void __RPC_STUB IObjectCollection_AddObject_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IObjectCollection_AddFromArray_Proxy(
    IObjectCollection* This,
    IObjectArray *poaSource);
void __RPC_STUB IObjectCollection_AddFromArray_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IObjectCollection_RemoveObjectAt_Proxy(
    IObjectCollection* This,
    UINT uiIndex);
void __RPC_STUB IObjectCollection_RemoveObjectAt_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IObjectCollection_Clear_Proxy(
    IObjectCollection* This);
void __RPC_STUB IObjectCollection_Clear_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IObjectCollection_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __objectarray_h__ */
