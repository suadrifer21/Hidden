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

// UnityEngine.Purchasing.TizenStoreBindings
struct TizenStoreBindings_t1951392817;
// System.String
struct String_t;
// UnityEngine.Purchasing.UnityNativePurchasingCallback
struct UnityNativePurchasingCallback_t3230812225;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Tizen_UnityEngine_Purchasing_UnityNativePurchasing3230812225.h"

// System.Void UnityEngine.Purchasing.TizenStoreBindings::.ctor()
extern "C"  void TizenStoreBindings__ctor_m4223940561 (TizenStoreBindings_t1951392817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreBindings::SetGroupId(System.String)
extern "C"  void TizenStoreBindings_SetGroupId_m4132403395 (TizenStoreBindings_t1951392817 * __this, String_t* ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityNativePurchasingCallback)
extern "C"  void TizenStoreBindings_SetUnityPurchasingCallback_m1633856053 (TizenStoreBindings_t1951392817 * __this, UnityNativePurchasingCallback_t3230812225 * ___AsyncCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreBindings::RetrieveProducts(System.String)
extern "C"  void TizenStoreBindings_RetrieveProducts_m300476541 (TizenStoreBindings_t1951392817 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreBindings::Purchase(System.String,System.String)
extern "C"  void TizenStoreBindings_Purchase_m944087614 (TizenStoreBindings_t1951392817 * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreBindings::FinishTransaction(System.String,System.String)
extern "C"  void TizenStoreBindings_FinishTransaction_m3369331152 (TizenStoreBindings_t1951392817 * __this, String_t* ___productJSON0, String_t* ___transactionId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
