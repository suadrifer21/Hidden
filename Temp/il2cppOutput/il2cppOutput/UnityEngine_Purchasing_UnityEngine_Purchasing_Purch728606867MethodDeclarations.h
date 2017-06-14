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

// UnityEngine.Purchasing.PurchasingManager
struct PurchasingManager_t728606867;
// UnityEngine.Purchasing.TransactionLog
struct TransactionLog_t45391254;
// UnityEngine.ILogger
struct ILogger_t1425954571;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_t3609486926;
// System.String
struct String_t;
// UnityEngine.Purchasing.Product
struct Product_t1203687971;
// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t3600019299;
// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_t1607114611;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct List_1_t2687388655;
// UnityEngine.Purchasing.IInternalStoreListener
struct IInternalStoreListener_t571122801;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t275936122;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t1942475268;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Transa45391254.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1203687971.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod3600019299.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init2954032642.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Exte1607114611.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1942475268.h"

// System.Void UnityEngine.Purchasing.PurchasingManager::.ctor(UnityEngine.Purchasing.TransactionLog,UnityEngine.ILogger,UnityEngine.Purchasing.Extension.IStore,System.String)
extern "C"  void PurchasingManager__ctor_m56372569 (PurchasingManager_t728606867 * __this, TransactionLog_t45391254 * ___tDb0, Il2CppObject * ___logger1, Il2CppObject * ___store2, String_t* ___storeName3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.PurchasingManager::get_useTransactionLog()
extern "C"  bool PurchasingManager_get_useTransactionLog_m3343270672 (PurchasingManager_t728606867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::set_useTransactionLog(System.Boolean)
extern "C"  void PurchasingManager_set_useTransactionLog_m2029389773 (PurchasingManager_t728606867 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(System.String)
extern "C"  void PurchasingManager_InitiatePurchase_m1753990246 (PurchasingManager_t728606867 * __this, String_t* ___productId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(UnityEngine.Purchasing.Product,System.String)
extern "C"  void PurchasingManager_InitiatePurchase_m2421894286 (PurchasingManager_t728606867 * __this, Product_t1203687971 * ___product0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(System.String,System.String)
extern "C"  void PurchasingManager_InitiatePurchase_m3311933810 (PurchasingManager_t728606867 * __this, String_t* ___purchasableId0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::ConfirmPendingPurchase(UnityEngine.Purchasing.Product)
extern "C"  void PurchasingManager_ConfirmPendingPurchase_m4037946210 (PurchasingManager_t728606867 * __this, Product_t1203687971 * ___product0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.PurchasingManager::get_products()
extern "C"  ProductCollection_t3600019299 * PurchasingManager_get_products_m3482680778 (PurchasingManager_t728606867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::set_products(UnityEngine.Purchasing.ProductCollection)
extern "C"  void PurchasingManager_set_products_m4261599667 (PurchasingManager_t728606867 * __this, ProductCollection_t3600019299 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::OnPurchaseSucceeded(System.String,System.String,System.String)
extern "C"  void PurchasingManager_OnPurchaseSucceeded_m4258674695 (PurchasingManager_t728606867 * __this, String_t* ___id0, String_t* ___receipt1, String_t* ___transactionId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void PurchasingManager_OnSetupFailed_m2772466828 (PurchasingManager_t728606867 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription)
extern "C"  void PurchasingManager_OnPurchaseFailed_m2528773664 (PurchasingManager_t728606867 * __this, PurchaseFailureDescription_t1607114611 * ___description0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::OnProductsRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>)
extern "C"  void PurchasingManager_OnProductsRetrieved_m2806024404 (PurchasingManager_t728606867 * __this, List_1_t2687388655 * ___products0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::ProcessPurchaseIfNew(UnityEngine.Purchasing.Product)
extern "C"  void PurchasingManager_ProcessPurchaseIfNew_m1455821899 (PurchasingManager_t728606867 * __this, Product_t1203687971 * ___product0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::CheckForInitialization()
extern "C"  void PurchasingManager_CheckForInitialization_m1822643089 (PurchasingManager_t728606867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::Initialize(UnityEngine.Purchasing.IInternalStoreListener,System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void PurchasingManager_Initialize_m2590380541 (PurchasingManager_t728606867 * __this, Il2CppObject * ___listener0, HashSet_1_t275936122 * ___products1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.PurchasingManager::FormatUnifiedReceipt(System.String,System.String)
extern "C"  String_t* PurchasingManager_FormatUnifiedReceipt_m1416339734 (PurchasingManager_t728606867 * __this, String_t* ___platformReceipt0, String_t* ___transactionId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchasingManager::<Initialize>m__1(UnityEngine.Purchasing.ProductDefinition)
extern "C"  Product_t1203687971 * PurchasingManager_U3CInitializeU3Em__1_m713400070 (Il2CppObject * __this /* static, unused */, ProductDefinition_t1942475268 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
