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

// UnityEngine.Purchasing.FacebookStoreImpl
struct FacebookStoreImpl_t1362794587;
// Uniject.IUtil
struct IUtil_t2188430191;
// UnityEngine.Purchasing.INativeFacebookStore
struct INativeFacebookStore_t3367400535;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Purchasing.FacebookStoreImpl::.ctor(Uniject.IUtil)
extern "C"  void FacebookStoreImpl__ctor_m2000729248 (FacebookStoreImpl_t1362794587 * __this, Il2CppObject * ___util0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FacebookStoreImpl::SetNativeStore(UnityEngine.Purchasing.INativeFacebookStore)
extern "C"  void FacebookStoreImpl_SetNativeStore_m2660900583 (FacebookStoreImpl_t1362794587 * __this, Il2CppObject * ___facebook0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FacebookStoreImpl::MessageCallback(System.String,System.String,System.String,System.String)
extern "C"  void FacebookStoreImpl_MessageCallback_m4247126525 (Il2CppObject * __this /* static, unused */, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FacebookStoreImpl_MessageCallback_m4247126525(char* ___subject0, char* ___payload1, char* ___receipt2, char* ___transactionId3);
// System.Void UnityEngine.Purchasing.FacebookStoreImpl::ProcessMessage(System.String,System.String,System.String,System.String)
extern "C"  void FacebookStoreImpl_ProcessMessage_m3210982075 (FacebookStoreImpl_t1362794587 * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
