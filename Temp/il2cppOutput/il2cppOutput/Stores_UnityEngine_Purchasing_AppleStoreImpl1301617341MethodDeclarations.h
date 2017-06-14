#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Purchasing.AppleStoreImpl
struct AppleStoreImpl_t1301617341;
// Uniject.IUtil
struct IUtil_t2188430191;
// UnityEngine.Purchasing.INativeAppleStore
struct INativeAppleStore_t2240226449;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.Action`1<UnityEngine.Purchasing.Product>
struct Action_1_t1005487353;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Purchasing.AppleStoreImpl::.ctor(Uniject.IUtil)
extern "C"  void AppleStoreImpl__ctor_m1783914938 (AppleStoreImpl_t1301617341 * __this, Il2CppObject * ___util0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::SetNativeStore(UnityEngine.Purchasing.INativeAppleStore)
extern "C"  void AppleStoreImpl_SetNativeStore_m4003342543 (AppleStoreImpl_t1301617341 * __this, Il2CppObject * ___apple0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::OnProductsRetrieved(System.String)
extern "C"  void AppleStoreImpl_OnProductsRetrieved_m3960249760 (AppleStoreImpl_t1301617341 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::RestoreTransactions(System.Action`1<System.Boolean>)
extern "C"  void AppleStoreImpl_RestoreTransactions_m3660952369 (AppleStoreImpl_t1301617341 * __this, Action_1_t3627374100 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::RegisterPurchaseDeferredListener(System.Action`1<UnityEngine.Purchasing.Product>)
extern "C"  void AppleStoreImpl_RegisterPurchaseDeferredListener_m1897237874 (AppleStoreImpl_t1301617341 * __this, Action_1_t1005487353 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::OnPurchaseDeferred(System.String)
extern "C"  void AppleStoreImpl_OnPurchaseDeferred_m2745090322 (AppleStoreImpl_t1301617341 * __this, String_t* ___productId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::OnTransactionsRestoredSuccess()
extern "C"  void AppleStoreImpl_OnTransactionsRestoredSuccess_m3905359892 (AppleStoreImpl_t1301617341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::OnTransactionsRestoredFail(System.String)
extern "C"  void AppleStoreImpl_OnTransactionsRestoredFail_m1718101857 (AppleStoreImpl_t1301617341 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::OnAppReceiptRetrieved(System.String)
extern "C"  void AppleStoreImpl_OnAppReceiptRetrieved_m1421778187 (AppleStoreImpl_t1301617341 * __this, String_t* ___receipt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::OnAppReceiptRefreshedFailed()
extern "C"  void AppleStoreImpl_OnAppReceiptRefreshedFailed_m45452970 (AppleStoreImpl_t1301617341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AppleStoreImpl::MessageCallback(System.String,System.String,System.String,System.String)
extern "C"  void AppleStoreImpl_MessageCallback_m2420291589 (Il2CppObject * __this /* static, unused */, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AppleStoreImpl_MessageCallback_m2420291589(char* ___subject0, char* ___payload1, char* ___receipt2, char* ___transactionId3);
// System.Void UnityEngine.Purchasing.AppleStoreImpl::ProcessMessage(System.String,System.String,System.String,System.String)
extern "C"  void AppleStoreImpl_ProcessMessage_m1576304923 (AppleStoreImpl_t1301617341 * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
