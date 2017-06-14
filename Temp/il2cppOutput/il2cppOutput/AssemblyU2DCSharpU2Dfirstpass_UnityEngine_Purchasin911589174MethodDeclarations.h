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

// UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager
struct IAPButtonStoreManager_t911589174;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t92554892;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t2460996543;
// System.String
struct String_t;
// UnityEngine.Purchasing.Product
struct Product_t1203687971;
// UnityEngine.Purchasing.IAPButton
struct IAPButton_t3077837360;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t547992434;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_Purchasi3077837360.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init2954032642.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc2407199463.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purch547992434.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1203687971.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc1322959839.h"

// System.Void UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::.ctor()
extern "C"  void IAPButtonStoreManager__ctor_m3083407869 (IAPButtonStoreManager_t911589174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::get_Instance()
extern "C"  IAPButtonStoreManager_t911589174 * IAPButtonStoreManager_get_Instance_m3910054168 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.IStoreController UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::get_StoreController()
extern "C"  Il2CppObject * IAPButtonStoreManager_get_StoreController_m527834269 (IAPButtonStoreManager_t911589174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.IExtensionProvider UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::get_ExtensionProvider()
extern "C"  Il2CppObject * IAPButtonStoreManager_get_ExtensionProvider_m473841661 (IAPButtonStoreManager_t911589174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::HasProductInCatalog(System.String)
extern "C"  bool IAPButtonStoreManager_HasProductInCatalog_m3023623296 (IAPButtonStoreManager_t911589174 * __this, String_t* ___productID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::GetProduct(System.String)
extern "C"  Product_t1203687971 * IAPButtonStoreManager_GetProduct_m1505647265 (IAPButtonStoreManager_t911589174 * __this, String_t* ___productID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::AddButton(UnityEngine.Purchasing.IAPButton)
extern "C"  void IAPButtonStoreManager_AddButton_m3524258615 (IAPButtonStoreManager_t911589174 * __this, IAPButton_t3077837360 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::RemoveButton(UnityEngine.Purchasing.IAPButton)
extern "C"  void IAPButtonStoreManager_RemoveButton_m2931652138 (IAPButtonStoreManager_t911589174 * __this, IAPButton_t3077837360 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::InitiatePurchase(System.String)
extern "C"  void IAPButtonStoreManager_InitiatePurchase_m374565683 (IAPButtonStoreManager_t911589174 * __this, String_t* ___productID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider)
extern "C"  void IAPButtonStoreManager_OnInitialized_m3699105403 (IAPButtonStoreManager_t911589174 * __this, Il2CppObject * ___controller0, Il2CppObject * ___extensions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void IAPButtonStoreManager_OnInitializeFailed_m2396353392 (IAPButtonStoreManager_t911589174 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t IAPButtonStoreManager_ProcessPurchase_m2373817739 (IAPButtonStoreManager_t911589174 * __this, PurchaseEventArgs_t547992434 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void IAPButtonStoreManager_OnPurchaseFailed_m2419505534 (IAPButtonStoreManager_t911589174 * __this, Product_t1203687971 * ___product0, int32_t ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::.cctor()
extern "C"  void IAPButtonStoreManager__cctor_m2118049118 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
