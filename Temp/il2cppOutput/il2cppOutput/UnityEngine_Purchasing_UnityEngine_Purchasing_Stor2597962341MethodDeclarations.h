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

// UnityEngine.Purchasing.StoreListenerProxy
struct StoreListenerProxy_t2597962341;
// UnityEngine.Purchasing.IStoreListener
struct IStoreListener_t1538020378;
// UnityEngine.Purchasing.AnalyticsReporter
struct AnalyticsReporter_t3513180421;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t2460996543;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t92554892;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t547992434;
// UnityEngine.Purchasing.Product
struct Product_t1203687971;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Anal3513180421.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init2954032642.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc2407199463.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purch547992434.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1203687971.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc1322959839.h"

// System.Void UnityEngine.Purchasing.StoreListenerProxy::.ctor(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.AnalyticsReporter,UnityEngine.Purchasing.IExtensionProvider)
extern "C"  void StoreListenerProxy__ctor_m509858997 (StoreListenerProxy_t2597962341 * __this, Il2CppObject * ___forwardTo0, AnalyticsReporter_t3513180421 * ___analytics1, Il2CppObject * ___extensions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StoreListenerProxy::OnInitialized(UnityEngine.Purchasing.IStoreController)
extern "C"  void StoreListenerProxy_OnInitialized_m2118688538 (StoreListenerProxy_t2597962341 * __this, Il2CppObject * ___controller0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StoreListenerProxy::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void StoreListenerProxy_OnInitializeFailed_m4259630865 (StoreListenerProxy_t2597962341 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.StoreListenerProxy::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t StoreListenerProxy_ProcessPurchase_m49078580 (StoreListenerProxy_t2597962341 * __this, PurchaseEventArgs_t547992434 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StoreListenerProxy::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void StoreListenerProxy_OnPurchaseFailed_m2582898389 (StoreListenerProxy_t2597962341 * __this, Product_t1203687971 * ___i0, int32_t ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
