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

// UnityEngine.Purchasing.FakeStore
struct FakeStore_t3882981564;
// System.String
struct String_t;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t2691517565;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_t2128260960;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t1942475268;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1942475268.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Purchasing.FakeStore::.ctor()
extern "C"  void FakeStore__ctor_m3239256688 (FakeStore_t3882981564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.FakeStore::get_unavailableProductId()
extern "C"  String_t* FakeStore_get_unavailableProductId_m4172264450 (FakeStore_t3882981564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern "C"  void FakeStore_Initialize_m2189078753 (FakeStore_t3882981564 * __this, Il2CppObject * ___biller0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void FakeStore_RetrieveProducts_m3255639604 (FakeStore_t3882981564 * __this, ReadOnlyCollection_1_t2128260960 * ___productDefinitions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void FakeStore_Purchase_m194902756 (FakeStore_t3882981564 * __this, ProductDefinition_t1942475268 * ___product0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void FakeStore_FinishTransaction_m120746640 (FakeStore_t3882981564 * __this, ProductDefinition_t1942475268 * ___product0, String_t* ___transactionId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
