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

// UnityEngine.Purchasing.UnityAnalytics
struct UnityAnalytics_t4076614841;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Decimal724701077.h"

// System.Void UnityEngine.Purchasing.UnityAnalytics::.ctor()
extern "C"  void UnityAnalytics__ctor_m3574689062 (UnityAnalytics_t4076614841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityAnalytics::Transaction(System.String,System.Decimal,System.String,System.String,System.String)
extern "C"  void UnityAnalytics_Transaction_m2822841946 (UnityAnalytics_t4076614841 * __this, String_t* ___productId0, Decimal_t724701077  ___price1, String_t* ___currency2, String_t* ___receipt3, String_t* ___signature4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityAnalytics::CustomEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void UnityAnalytics_CustomEvent_m4049700832 (UnityAnalytics_t4076614841 * __this, String_t* ___name0, Dictionary_2_t309261261 * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
