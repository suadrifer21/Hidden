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

// UnityEngine.Purchasing.TizenStoreImpl
struct TizenStoreImpl_t274247241;
// Uniject.IUtil
struct IUtil_t2188430191;
// UnityEngine.Purchasing.INativeTizenStore
struct INativeTizenStore_t513596045;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Purchasing.TizenStoreImpl::.ctor(Uniject.IUtil)
extern "C"  void TizenStoreImpl__ctor_m1462561694 (TizenStoreImpl_t274247241 * __this, Il2CppObject * ___util0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreImpl::SetNativeStore(UnityEngine.Purchasing.INativeTizenStore)
extern "C"  void TizenStoreImpl_SetNativeStore_m2574918183 (TizenStoreImpl_t274247241 * __this, Il2CppObject * ___tizen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreImpl::SetGroupId(System.String)
extern "C"  void TizenStoreImpl_SetGroupId_m2564280605 (TizenStoreImpl_t274247241 * __this, String_t* ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreImpl::MessageCallback(System.String,System.String,System.String,System.String)
extern "C"  void TizenStoreImpl_MessageCallback_m2338259177 (Il2CppObject * __this /* static, unused */, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TizenStoreImpl_MessageCallback_m2338259177(char* ___subject0, char* ___payload1, char* ___receipt2, char* ___transactionId3);
// System.Void UnityEngine.Purchasing.TizenStoreImpl::ProcessMessage(System.String,System.String,System.String,System.String)
extern "C"  void TizenStoreImpl_ProcessMessage_m3321258175 (TizenStoreImpl_t274247241 * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
