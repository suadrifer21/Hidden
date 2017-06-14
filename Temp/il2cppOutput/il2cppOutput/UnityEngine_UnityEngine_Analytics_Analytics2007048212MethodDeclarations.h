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

// UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t3238795095;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Analytics_AnalyticsResult3037633135.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Decimal724701077.h"

// UnityEngine.Analytics.UnityAnalyticsHandler UnityEngine.Analytics.Analytics::GetUnityAnalyticsHandler()
extern "C"  UnityAnalyticsHandler_t3238795095 * Analytics_GetUnityAnalyticsHandler_m832551809 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::Transaction(System.String,System.Decimal,System.String,System.String,System.String,System.Boolean)
extern "C"  int32_t Analytics_Transaction_m3097910023 (Il2CppObject * __this /* static, unused */, String_t* ___productId0, Decimal_t724701077  ___amount1, String_t* ___currency2, String_t* ___receiptPurchaseData3, String_t* ___signature4, bool ___usingIAPService5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::CustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t Analytics_CustomEvent_m2343610239 (Il2CppObject * __this /* static, unused */, String_t* ___customEventName0, Il2CppObject* ___eventData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
