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

// System.String
struct String_t;
// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t1358843767;
// UnityEngine.Advertisements.MetaData
struct MetaData_t457710789;
// System.Object
struct Il2CppObject;
// UnityEngine.Advertisements.StartEventArgs
struct StartEventArgs_t1030944433;
// UnityEngine.Advertisements.FinishEventArgs
struct FinishEventArgs_t694166726;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme1591511100.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen280717056.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme1358843767.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen457710789.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme1030944433.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen694166726.h"

// System.Void UnityEngine.Advertisements.Advertisement::LoadRuntime()
extern "C"  void Advertisement_LoadRuntime_m3443607128 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::LoadEditor(System.String,System.Boolean)
extern "C"  void Advertisement_LoadEditor_m194636370 (Il2CppObject * __this /* static, unused */, String_t* ___extensionPath0, bool ___supportedPlatform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Load()
extern "C"  void Advertisement_Load_m2226383838 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_initializeOnStartup()
extern "C"  bool Advertisement_get_initializeOnStartup_m2175852553 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsEnabled()
extern "C"  bool Advertisement_IsEnabled_m1631237063 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Advertisements.Advertisement/DebugLevel UnityEngine.Advertisements.Advertisement::get_debugLevel()
extern "C"  int32_t Advertisement_get_debugLevel_m1094088667 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::set_debugLevel(UnityEngine.Advertisements.Advertisement/DebugLevel)
extern "C"  void Advertisement_set_debugLevel_m2904975526 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
extern "C"  bool Advertisement_get_isInitialized_m167127575 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::set_isInitialized(System.Boolean)
extern "C"  void Advertisement_set_isInitialized_m3343800700 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isSupported()
extern "C"  bool Advertisement_get_isSupported_m1183881609 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_debugMode()
extern "C"  bool Advertisement_get_debugMode_m3908142879 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::set_debugMode(System.Boolean)
extern "C"  void Advertisement_set_debugMode_m3031019614 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_testMode()
extern "C"  bool Advertisement_get_testMode_m1240196736 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.Advertisement::get_gameId()
extern "C"  String_t* Advertisement_get_gameId_m3262742795 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.Advertisement::get_version()
extern "C"  String_t* Advertisement_get_version_m1448785640 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isShowing()
extern "C"  bool Advertisement_get_isShowing_m2678672924 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::set_isShowing(System.Boolean)
extern "C"  void Advertisement_set_isShowing_m1570435959 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String)
extern "C"  void Advertisement_Initialize_m1497874238 (Il2CppObject * __this /* static, unused */, String_t* ___gameId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
extern "C"  void Advertisement_Initialize_m2995186509 (Il2CppObject * __this /* static, unused */, String_t* ___gameId0, bool ___testMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady()
extern "C"  bool Advertisement_IsReady_m876308337 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
extern "C"  bool Advertisement_IsReady_m1389121855 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Advertisement::GetPlacementState()
extern "C"  int32_t Advertisement_GetPlacementState_m2664722278 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Advertisement::GetPlacementState(System.String)
extern "C"  int32_t Advertisement_GetPlacementState_m3686002020 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show()
extern "C"  void Advertisement_Show_m2036493855 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show(UnityEngine.Advertisements.ShowOptions)
extern "C"  void Advertisement_Show_m3071871703 (Il2CppObject * __this /* static, unused */, ShowOptions_t1358843767 * ___showOptions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String)
extern "C"  void Advertisement_Show_m994665589 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions)
extern "C"  void Advertisement_Show_m3789622005 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, ShowOptions_t1358843767 * ___showOptions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void Advertisement_SetMetaData_m868224261 (Il2CppObject * __this /* static, unused */, MetaData_t457710789 * ___metaData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::.cctor()
extern "C"  void Advertisement__cctor_m1138733083 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::<Initialize>m__0(System.Object,UnityEngine.Advertisements.StartEventArgs)
extern "C"  void Advertisement_U3CInitializeU3Em__0_m1561562029 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, StartEventArgs_t1030944433 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::<Initialize>m__1(System.Object,UnityEngine.Advertisements.FinishEventArgs)
extern "C"  void Advertisement_U3CInitializeU3Em__1_m1690081691 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, FinishEventArgs_t694166726 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
