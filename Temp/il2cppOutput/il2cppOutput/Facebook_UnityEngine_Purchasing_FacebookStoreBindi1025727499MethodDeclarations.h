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

// UnityEngine.Purchasing.FacebookStoreBindings
struct FacebookStoreBindings_t1025727499;
// UnityEngine.Purchasing.UnityPurchasingCallback
struct UnityPurchasingCallback_t2635187846;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Purchasing_Common_UnityEngine_Purchasing_UnityPurc2635187846.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Purchasing.FacebookStoreBindings::.ctor()
extern "C"  void FacebookStoreBindings__ctor_m994006509 (FacebookStoreBindings_t1025727499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.FacebookStoreBindings::Check()
extern "C"  bool FacebookStoreBindings_Check_m1265367267 (FacebookStoreBindings_t1025727499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FacebookStoreBindings::Init()
extern "C"  void FacebookStoreBindings_Init_m971734911 (FacebookStoreBindings_t1025727499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FacebookStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void FacebookStoreBindings_SetUnityPurchasingCallback_m198506470 (FacebookStoreBindings_t1025727499 * __this, UnityPurchasingCallback_t2635187846 * ___AsyncCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FacebookStoreBindings::RetrieveProducts(System.String)
extern "C"  void FacebookStoreBindings_RetrieveProducts_m371321801 (FacebookStoreBindings_t1025727499 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FacebookStoreBindings::Purchase(System.String,System.String)
extern "C"  void FacebookStoreBindings_Purchase_m2422688228 (FacebookStoreBindings_t1025727499 * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FacebookStoreBindings::FinishTransaction(System.String,System.String)
extern "C"  void FacebookStoreBindings_FinishTransaction_m3301338074 (FacebookStoreBindings_t1025727499 * __this, String_t* ___productJSON0, String_t* ___transactionID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
