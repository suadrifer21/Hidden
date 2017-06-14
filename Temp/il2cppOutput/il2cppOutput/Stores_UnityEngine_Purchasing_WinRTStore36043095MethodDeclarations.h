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

// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_t36043095;
// UnityEngine.Purchasing.Default.IWindowsIAP
struct IWindowsIAP_t818184396;
// Uniject.IUtil
struct IUtil_t2188430191;
// UnityEngine.ILogger
struct ILogger_t1425954571;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t2691517565;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_t2128260960;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t1942475268;
// System.String
struct String_t;
// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_t1075111405;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1942475268.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Purchasing.WinRTStore::.ctor(UnityEngine.Purchasing.Default.IWindowsIAP,Uniject.IUtil,UnityEngine.ILogger)
extern "C"  void WinRTStore__ctor_m3142178002 (WinRTStore_t36043095 * __this, Il2CppObject * ___win80, Il2CppObject * ___util1, Il2CppObject * ___logger2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::SetWindowsIAP(UnityEngine.Purchasing.Default.IWindowsIAP)
extern "C"  void WinRTStore_SetWindowsIAP_m1317379130 (WinRTStore_t36043095 * __this, Il2CppObject * ___iap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern "C"  void WinRTStore_Initialize_m2648058662 (WinRTStore_t36043095 * __this, Il2CppObject * ___biller0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void WinRTStore_RetrieveProducts_m1073973345 (WinRTStore_t36043095 * __this, ReadOnlyCollection_1_t2128260960 * ___productDefs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void WinRTStore_FinishTransaction_m1157468965 (WinRTStore_t36043095 * __this, ProductDefinition_t1942475268 * ___product0, String_t* ___transactionId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::init(System.Int32)
extern "C"  void WinRTStore_init_m420138384 (WinRTStore_t36043095 * __this, int32_t ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void WinRTStore_Purchase_m27999093 (WinRTStore_t36043095 * __this, ProductDefinition_t1942475268 * ___product0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::restoreTransactions(System.Boolean)
extern "C"  void WinRTStore_restoreTransactions_m1421431749 (WinRTStore_t36043095 * __this, bool ___pausing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::RestoreTransactions()
extern "C"  void WinRTStore_RestoreTransactions_m1768243916 (WinRTStore_t36043095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.WinRTStore::<RetrieveProducts>m__0(UnityEngine.Purchasing.ProductDefinition)
extern "C"  bool WinRTStore_U3CRetrieveProductsU3Em__0_m419161337 (Il2CppObject * __this /* static, unused */, ProductDefinition_t1942475268 * ___def0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Default.WinProductDescription UnityEngine.Purchasing.WinRTStore::<RetrieveProducts>m__1(UnityEngine.Purchasing.ProductDefinition)
extern "C"  WinProductDescription_t1075111405 * WinRTStore_U3CRetrieveProductsU3Em__1_m790770486 (Il2CppObject * __this /* static, unused */, ProductDefinition_t1942475268 * ___def0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
