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

// UnityEngine.Advertisements.iOS.Platform
struct Platform_t1646290531;
// System.String
struct String_t;
// UnityEngine.Advertisements.iOS.Platform/unityAdsReady
struct unityAdsReady_t2056116968;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError
struct unityAdsDidError_t3399460664;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart
struct unityAdsDidStart_t88170910;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish
struct unityAdsDidFinish_t649819413;
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
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme2056116968.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme3399460664.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisement88170910.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen649819413.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen280717056.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen457710789.h"

// System.Void UnityEngine.Advertisements.iOS.Platform::.ctor()
extern "C"  void Platform__ctor_m2815870789 (Platform_t1646290531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineInitialize(System.String,System.Boolean)
extern "C"  void Platform_UnityAdsEngineInitialize_m2452381479 (Il2CppObject * __this /* static, unused */, String_t* ___gameId0, bool ___testMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineShow(System.String)
extern "C"  void Platform_UnityAdsEngineShow_m3023857535 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetDebugMode()
extern "C"  bool Platform_UnityAdsEngineGetDebugMode_m2528993602 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDebugMode(System.Boolean)
extern "C"  void Platform_UnityAdsEngineSetDebugMode_m2894194785 (Il2CppObject * __this /* static, unused */, bool ___debugMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsSupported()
extern "C"  bool Platform_UnityAdsEngineIsSupported_m4142230146 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsReady(System.String)
extern "C"  bool Platform_UnityAdsEngineIsReady_m3696603805 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetPlacementState(System.String)
extern "C"  int64_t Platform_UnityAdsEngineGetPlacementState_m1567629221 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetVersion()
extern "C"  String_t* Platform_UnityAdsEngineGetVersion_m2821817487 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsInitialized()
extern "C"  bool Platform_UnityAdsEngineIsInitialized_m1969563434 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetMetaData(System.String,System.String)
extern "C"  void Platform_UnityAdsEngineSetMetaData_m870909269 (Il2CppObject * __this /* static, unused */, String_t* ___category0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetReadyCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsReady)
extern "C"  void Platform_UnityAdsEngineSetReadyCallback_m1582591888 (Il2CppObject * __this /* static, unused */, unityAdsReady_t2056116968 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidErrorCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidError)
extern "C"  void Platform_UnityAdsEngineSetDidErrorCallback_m3697589822 (Il2CppObject * __this /* static, unused */, unityAdsDidError_t3399460664 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidStartCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart)
extern "C"  void Platform_UnityAdsEngineSetDidStartCallback_m3734106350 (Il2CppObject * __this /* static, unused */, unityAdsDidStart_t88170910 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidFinishCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish)
extern "C"  void Platform_UnityAdsEngineSetDidFinishCallback_m3525357552 (Il2CppObject * __this /* static, unused */, unityAdsDidFinish_t649819413 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsReady(System.String)
extern "C"  void Platform_UnityAdsReady_m2054500237 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsReady_m2054500237(char* ___placementId0);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidError(System.Int64,System.String)
extern "C"  void Platform_UnityAdsDidError_m381643941 (Il2CppObject * __this /* static, unused */, int64_t ___rawError0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidError_m381643941(int64_t ___rawError0, char* ___message1);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidStart(System.String)
extern "C"  void Platform_UnityAdsDidStart_m1707136755 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidStart_m1707136755(char* ___placementId0);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidFinish(System.String,System.Int64)
extern "C"  void Platform_UnityAdsDidFinish_m2733770440 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, int64_t ___rawShowResult1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidFinish_m2733770440(char* ___placementId0, int64_t ___rawShowResult1);
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C"  void Platform_add_OnReady_m1992228724 (Platform_t1646290531 * __this, EventHandler_1_t2737845578 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C"  void Platform_remove_OnReady_m989814073 (Platform_t1646290531 * __this, EventHandler_1_t2737845578 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void Platform_add_OnStart_m2014900630 (Platform_t1646290531 * __this, EventHandler_1_t3917218901 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void Platform_remove_OnStart_m812300665 (Platform_t1646290531 * __this, EventHandler_1_t3917218901 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Platform_add_OnFinish_m629236780 (Platform_t1646290531 * __this, EventHandler_1_t3580441194 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Platform_remove_OnFinish_m1572319173 (Platform_t1646290531 * __this, EventHandler_1_t3580441194 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C"  void Platform_add_OnError_m981927398 (Platform_t1646290531 * __this, EventHandler_1_t4277752891 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C"  void Platform_remove_OnError_m2802874345 (Platform_t1646290531 * __this, EventHandler_1_t4277752891 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.iOS.Platform::get_isInitialized()
extern "C"  bool Platform_get_isInitialized_m2862267060 (Platform_t1646290531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.iOS.Platform::get_isSupported()
extern "C"  bool Platform_get_isSupported_m50602696 (Platform_t1646290531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.iOS.Platform::get_version()
extern "C"  String_t* Platform_get_version_m1747084647 (Platform_t1646290531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.iOS.Platform::get_debugMode()
extern "C"  bool Platform_get_debugMode_m1010671402 (Platform_t1646290531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::set_debugMode(System.Boolean)
extern "C"  void Platform_set_debugMode_m1560691477 (Platform_t1646290531 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::Initialize(System.String,System.Boolean)
extern "C"  void Platform_Initialize_m3313841162 (Platform_t1646290531 * __this, String_t* ___gameId0, bool ___testMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.iOS.Platform::IsReady(System.String)
extern "C"  bool Platform_IsReady_m1304656268 (Platform_t1646290531 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.iOS.Platform::GetPlacementState(System.String)
extern "C"  int32_t Platform_GetPlacementState_m1275283313 (Platform_t1646290531 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::Show(System.String)
extern "C"  void Platform_Show_m3601746738 (Platform_t1646290531 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void Platform_SetMetaData_m2106851042 (Platform_t1646290531 * __this, MetaData_t457710789 * ___metaData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
