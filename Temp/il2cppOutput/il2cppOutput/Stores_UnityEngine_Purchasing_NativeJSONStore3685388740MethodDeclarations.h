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

// UnityEngine.Purchasing.NativeJSONStore
struct NativeJSONStore_t3685388740;
// UnityEngine.Purchasing.INativeStore
struct INativeStore_t3203646079;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t2691517565;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_t2128260960;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t1942475268;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1942475268.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Purchasing.NativeJSONStore::.ctor()
extern "C"  void NativeJSONStore__ctor_m812188232 (NativeJSONStore_t3685388740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::SetNativeStore(UnityEngine.Purchasing.INativeStore)
extern "C"  void NativeJSONStore_SetNativeStore_m1863195906 (NativeJSONStore_t3685388740 * __this, Il2CppObject * ___native0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern "C"  void NativeJSONStore_Initialize_m4084255593 (NativeJSONStore_t3685388740 * __this, Il2CppObject * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void NativeJSONStore_RetrieveProducts_m1489118900 (NativeJSONStore_t3685388740 * __this, ReadOnlyCollection_1_t2128260960 * ___products0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void NativeJSONStore_Purchase_m1927312516 (NativeJSONStore_t3685388740 * __this, ProductDefinition_t1942475268 * ___product0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void NativeJSONStore_FinishTransaction_m559023640 (NativeJSONStore_t3685388740 * __this, ProductDefinition_t1942475268 * ___product0, String_t* ___transactionId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::OnSetupFailed(System.String)
extern "C"  void NativeJSONStore_OnSetupFailed_m2728050561 (NativeJSONStore_t3685388740 * __this, String_t* ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::OnProductsRetrieved(System.String)
extern "C"  void NativeJSONStore_OnProductsRetrieved_m4005515159 (NativeJSONStore_t3685388740 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::OnPurchaseSucceeded(System.String,System.String,System.String)
extern "C"  void NativeJSONStore_OnPurchaseSucceeded_m363409449 (NativeJSONStore_t3685388740 * __this, String_t* ___id0, String_t* ___receipt1, String_t* ___transactionID2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::OnPurchaseFailed(System.String)
extern "C"  void NativeJSONStore_OnPurchaseFailed_m4091409929 (NativeJSONStore_t3685388740 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
