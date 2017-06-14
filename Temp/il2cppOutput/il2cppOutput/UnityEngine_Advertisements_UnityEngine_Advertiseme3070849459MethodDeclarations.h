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

// UnityEngine.Advertisements.Android.Platform
struct Platform_t3070849459;
// System.String
struct String_t;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4251328308;
// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>
struct EventHandler_1_t2737845578;
// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct EventHandler_1_t3917218901;
// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct EventHandler_1_t3580441194;
// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>
struct EventHandler_1_t4277752891;
// UnityEngine.Advertisements.MetaData
struct MetaData_t457710789;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AndroidJavaObject4251328308.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen280717056.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen457710789.h"

// System.Void UnityEngine.Advertisements.Android.Platform::.ctor()
extern "C"  void Platform__ctor_m463733639 (Platform_t3070849459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::onUnityAdsReady(System.String)
extern "C"  void Platform_onUnityAdsReady_m2018929970 (Platform_t3070849459 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::onUnityAdsStart(System.String)
extern "C"  void Platform_onUnityAdsStart_m2648663905 (Platform_t3070849459 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::onUnityAdsFinish(System.String,UnityEngine.AndroidJavaObject)
extern "C"  void Platform_onUnityAdsFinish_m1022154019 (Platform_t3070849459 * __this, String_t* ___placementId0, AndroidJavaObject_t4251328308 * ___rawShowResult1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::onUnityAdsError(UnityEngine.AndroidJavaObject,System.String)
extern "C"  void Platform_onUnityAdsError_m958003370 (Platform_t3070849459 * __this, AndroidJavaObject_t4251328308 * ___rawError0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::add_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C"  void Platform_add_OnReady_m2573360814 (Platform_t3070849459 * __this, EventHandler_1_t2737845578 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::remove_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C"  void Platform_remove_OnReady_m1211678691 (Platform_t3070849459 * __this, EventHandler_1_t2737845578 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void Platform_add_OnStart_m1147592596 (Platform_t3070849459 * __this, EventHandler_1_t3917218901 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void Platform_remove_OnStart_m2866744071 (Platform_t3070849459 * __this, EventHandler_1_t3917218901 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Platform_add_OnFinish_m3147283442 (Platform_t3070849459 * __this, EventHandler_1_t3580441194 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Platform_remove_OnFinish_m2330659227 (Platform_t3070849459 * __this, EventHandler_1_t3580441194 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::add_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C"  void Platform_add_OnError_m2744886644 (Platform_t3070849459 * __this, EventHandler_1_t4277752891 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::remove_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C"  void Platform_remove_OnError_m1332939239 (Platform_t3070849459 * __this, EventHandler_1_t4277752891 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Android.Platform::get_isInitialized()
extern "C"  bool Platform_get_isInitialized_m151457006 (Platform_t3070849459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Android.Platform::get_isSupported()
extern "C"  bool Platform_get_isSupported_m458583322 (Platform_t3070849459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.Android.Platform::get_version()
extern "C"  String_t* Platform_get_version_m2941585037 (Platform_t3070849459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Android.Platform::get_debugMode()
extern "C"  bool Platform_get_debugMode_m781076116 (Platform_t3070849459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::set_debugMode(System.Boolean)
extern "C"  void Platform_set_debugMode_m2831747903 (Platform_t3070849459 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::Initialize(System.String,System.Boolean)
extern "C"  void Platform_Initialize_m3961910592 (Platform_t3070849459 * __this, String_t* ___gameId0, bool ___testMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Android.Platform::IsReady(System.String)
extern "C"  bool Platform_IsReady_m533757786 (Platform_t3070849459 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Android.Platform::GetPlacementState(System.String)
extern "C"  int32_t Platform_GetPlacementState_m3055075243 (Platform_t3070849459 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::Show(System.String)
extern "C"  void Platform_Show_m2811633304 (Platform_t3070849459 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void Platform_SetMetaData_m3193066496 (Platform_t3070849459 * __this, MetaData_t457710789 * ___metaData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
