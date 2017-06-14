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

// UnityEngine.Advertisements.Editor.Platform
struct Platform_t568704329;
// System.String
struct String_t;
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
// System.Object
struct Il2CppObject;
// UnityEngine.Advertisements.FinishEventArgs
struct FinishEventArgs_t694166726;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen280717056.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen457710789.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen694166726.h"

// System.Void UnityEngine.Advertisements.Editor.Platform::.ctor(System.String)
extern "C"  void Platform__ctor_m1440476167 (Platform_t568704329 * __this, String_t* ___extensionPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Platform::add_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C"  void Platform_add_OnReady_m1528066280 (Platform_t568704329 * __this, EventHandler_1_t2737845578 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Platform::remove_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C"  void Platform_remove_OnReady_m897607777 (Platform_t568704329 * __this, EventHandler_1_t2737845578 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Platform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void Platform_add_OnStart_m2413443258 (Platform_t568704329 * __this, EventHandler_1_t3917218901 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Platform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void Platform_remove_OnStart_m2562809417 (Platform_t568704329 * __this, EventHandler_1_t3917218901 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Platform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Platform_add_OnFinish_m4079163736 (Platform_t568704329 * __this, EventHandler_1_t3580441194 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Platform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Platform_remove_OnFinish_m2024582773 (Platform_t568704329 * __this, EventHandler_1_t3580441194 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Platform::add_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C"  void Platform_add_OnError_m27788106 (Platform_t568704329 * __this, EventHandler_1_t4277752891 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Platform::remove_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C"  void Platform_remove_OnError_m2498010937 (Platform_t568704329 * __this, EventHandler_1_t4277752891 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Editor.Platform::get_isInitialized()
extern "C"  bool Platform_get_isInitialized_m4126560224 (Platform_t568704329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Editor.Platform::get_isSupported()
extern "C"  bool Platform_get_isSupported_m3681713924 (Platform_t568704329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.Editor.Platform::get_version()
extern "C"  String_t* Platform_get_version_m1977913027 (Platform_t568704329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Editor.Platform::get_debugMode()
extern "C"  bool Platform_get_debugMode_m432819622 (Platform_t568704329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Platform::set_debugMode(System.Boolean)
extern "C"  void Platform_set_debugMode_m3147184933 (Platform_t568704329 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Platform::Initialize(System.String,System.Boolean)
extern "C"  void Platform_Initialize_m1040874382 (Platform_t568704329 * __this, String_t* ___gameId0, bool ___testMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Editor.Platform::IsReady(System.String)
extern "C"  bool Platform_IsReady_m2278450152 (Platform_t568704329 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Editor.Platform::GetPlacementState(System.String)
extern "C"  int32_t Platform_GetPlacementState_m2578767565 (Platform_t568704329 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Platform::Show(System.String)
extern "C"  void Platform_Show_m2590188230 (Platform_t568704329 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void Platform_SetMetaData_m4250445806 (Platform_t568704329 * __this, MetaData_t457710789 * ___metaData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Platform::.cctor()
extern "C"  void Platform__cctor_m1466876688 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Platform::<Platform>m__0(System.Object,UnityEngine.Advertisements.FinishEventArgs)
extern "C"  void Platform_U3CPlatformU3Em__0_m2540424150 (Platform_t568704329 * __this, Il2CppObject * ___sender0, FinishEventArgs_t694166726 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
