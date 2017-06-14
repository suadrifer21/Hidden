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

// UnityEngine.Advertisements.UnsupportedPlatform
struct UnsupportedPlatform_t1381805072;
// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>
struct EventHandler_1_t2737845578;
// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct EventHandler_1_t3917218901;
// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct EventHandler_1_t3580441194;
// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>
struct EventHandler_1_t4277752891;
// System.String
struct String_t;
// UnityEngine.Advertisements.MetaData
struct MetaData_t457710789;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen280717056.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen457710789.h"

// System.Void UnityEngine.Advertisements.UnsupportedPlatform::.ctor()
extern "C"  void UnsupportedPlatform__ctor_m1195612747 (UnsupportedPlatform_t1381805072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C"  void UnsupportedPlatform_add_OnReady_m420719890 (UnsupportedPlatform_t1381805072 * __this, EventHandler_1_t2737845578 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C"  void UnsupportedPlatform_remove_OnReady_m3001955647 (UnsupportedPlatform_t1381805072 * __this, EventHandler_1_t2737845578 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void UnsupportedPlatform_add_OnStart_m2997228448 (UnsupportedPlatform_t1381805072 * __this, EventHandler_1_t3917218901 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void UnsupportedPlatform_remove_OnStart_m1872825323 (UnsupportedPlatform_t1381805072 * __this, EventHandler_1_t3917218901 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void UnsupportedPlatform_add_OnFinish_m3829983950 (UnsupportedPlatform_t1381805072 * __this, EventHandler_1_t3580441194 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void UnsupportedPlatform_remove_OnFinish_m3984912695 (UnsupportedPlatform_t1381805072 * __this, EventHandler_1_t3580441194 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C"  void UnsupportedPlatform_add_OnError_m2608116736 (UnsupportedPlatform_t1381805072 * __this, EventHandler_1_t4277752891 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C"  void UnsupportedPlatform_remove_OnError_m943634123 (UnsupportedPlatform_t1381805072 * __this, EventHandler_1_t4277752891 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::get_isInitialized()
extern "C"  bool UnsupportedPlatform_get_isInitialized_m13076322 (UnsupportedPlatform_t1381805072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::get_isSupported()
extern "C"  bool UnsupportedPlatform_get_isSupported_m1737220594 (UnsupportedPlatform_t1381805072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.UnsupportedPlatform::get_version()
extern "C"  String_t* UnsupportedPlatform_get_version_m1689900065 (UnsupportedPlatform_t1381805072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::get_debugMode()
extern "C"  bool UnsupportedPlatform_get_debugMode_m3316994848 (UnsupportedPlatform_t1381805072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::set_debugMode(System.Boolean)
extern "C"  void UnsupportedPlatform_set_debugMode_m2837757987 (UnsupportedPlatform_t1381805072 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::Initialize(System.String,System.Boolean)
extern "C"  void UnsupportedPlatform_Initialize_m759634376 (UnsupportedPlatform_t1381805072 * __this, String_t* ___gameId0, bool ___testMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::IsReady(System.String)
extern "C"  bool UnsupportedPlatform_IsReady_m511207222 (UnsupportedPlatform_t1381805072 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.UnsupportedPlatform::GetPlacementState(System.String)
extern "C"  int32_t UnsupportedPlatform_GetPlacementState_m511708047 (UnsupportedPlatform_t1381805072 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::Show(System.String)
extern "C"  void UnsupportedPlatform_Show_m3166753216 (UnsupportedPlatform_t1381805072 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void UnsupportedPlatform_SetMetaData_m2053591960 (UnsupportedPlatform_t1381805072 * __this, MetaData_t457710789 * ___metaData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
