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

// UnityEngine.Purchasing.AnalyticsReporter
struct AnalyticsReporter_t3513180421;
// UnityEngine.Purchasing.IUnityAnalytics
struct IUnityAnalytics_t2407131490;
// UnityEngine.Purchasing.Product
struct Product_t1203687971;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1203687971.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc1322959839.h"

// System.Void UnityEngine.Purchasing.AnalyticsReporter::.ctor(UnityEngine.Purchasing.IUnityAnalytics)
extern "C"  void AnalyticsReporter__ctor_m828729625 (AnalyticsReporter_t3513180421 * __this, Il2CppObject * ___analytics0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AnalyticsReporter::OnPurchaseSucceeded(UnityEngine.Purchasing.Product)
extern "C"  void AnalyticsReporter_OnPurchaseSucceeded_m1813002603 (AnalyticsReporter_t3513180421 * __this, Product_t1203687971 * ___product0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AnalyticsReporter::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void AnalyticsReporter_OnPurchaseFailed_m4288389959 (AnalyticsReporter_t3513180421 * __this, Product_t1203687971 * ___product0, int32_t ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
