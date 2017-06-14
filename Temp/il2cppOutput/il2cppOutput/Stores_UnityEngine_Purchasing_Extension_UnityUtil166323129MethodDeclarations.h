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

// UnityEngine.Purchasing.Extension.UnityUtil
struct UnityUtil_t166323129;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Action
struct Action_t3226471752;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"
#include "UnityEngine_UnityEngine_RuntimePlatform1869584967.h"
#include "UnityEngine_UnityEngine_DeviceType2044541946.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Purchasing.Extension.UnityUtil::.ctor()
extern "C"  void UnityUtil__ctor_m4064255016 (UnityUtil_t166323129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.Purchasing.Extension.UnityUtil::get_currentTime()
extern "C"  DateTime_t693205669  UnityUtil_get_currentTime_m1270862516 (UnityUtil_t166323129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_persistentDataPath()
extern "C"  String_t* UnityUtil_get_persistentDataPath_m3216924224 (UnityUtil_t166323129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Purchasing.Extension.UnityUtil::get_platform()
extern "C"  int32_t UnityUtil_get_platform_m596824773 (UnityUtil_t166323129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.Extension.UnityUtil::get_isEditor()
extern "C"  bool UnityUtil_get_isEditor_m1751270940 (UnityUtil_t166323129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_deviceModel()
extern "C"  String_t* UnityUtil_get_deviceModel_m1083680435 (UnityUtil_t166323129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_deviceName()
extern "C"  String_t* UnityUtil_get_deviceName_m2747348751 (UnityUtil_t166323129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.DeviceType UnityEngine.Purchasing.Extension.UnityUtil::get_deviceType()
extern "C"  int32_t UnityUtil_get_deviceType_m4094986889 (UnityUtil_t166323129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_operatingSystem()
extern "C"  String_t* UnityUtil_get_operatingSystem_m3655500614 (UnityUtil_t166323129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Purchasing.Extension.UnityUtil::Uniject.IUtil.InitiateCoroutine(System.Collections.IEnumerator)
extern "C"  Il2CppObject * UnityUtil_Uniject_IUtil_InitiateCoroutine_m465974326 (UnityUtil_t166323129 * __this, Il2CppObject * ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::Uniject.IUtil.InitiateCoroutine(System.Collections.IEnumerator,System.Int32)
extern "C"  void UnityUtil_Uniject_IUtil_InitiateCoroutine_m1647651442 (UnityUtil_t166323129 * __this, Il2CppObject * ___start0, int32_t ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::RunOnMainThread(System.Action)
extern "C"  void UnityUtil_RunOnMainThread_m3553993608 (UnityUtil_t166323129 * __this, Action_t3226471752 * ___runnable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Purchasing.Extension.UnityUtil::GetWaitForSeconds(System.Int32)
extern "C"  Il2CppObject * UnityUtil_GetWaitForSeconds_m2083576077 (UnityUtil_t166323129 * __this, int32_t ___seconds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::Start()
extern "C"  void UnityUtil_Start_m3416665072 (UnityUtil_t166323129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.Extension.UnityUtil::PcPlatform()
extern "C"  bool UnityUtil_PcPlatform_m239348050 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::DebugLog(System.String,System.Object[])
extern "C"  void UnityUtil_DebugLog_m1910253219 (Il2CppObject * __this /* static, unused */, String_t* ___message0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.Extension.UnityUtil::DelayedCoroutine(System.Collections.IEnumerator,System.Int32)
extern "C"  Il2CppObject * UnityUtil_DelayedCoroutine_m1046729072 (UnityUtil_t166323129 * __this, Il2CppObject * ___coroutine0, int32_t ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::Update()
extern "C"  void UnityUtil_Update_m281010421 (UnityUtil_t166323129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::AddPauseListener(System.Action`1<System.Boolean>)
extern "C"  void UnityUtil_AddPauseListener_m633258776 (UnityUtil_t166323129 * __this, Action_1_t3627374100 * ___runnable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::OnApplicationPause(System.Boolean)
extern "C"  void UnityUtil_OnApplicationPause_m1143148034 (UnityUtil_t166323129 * __this, bool ___paused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::.cctor()
extern "C"  void UnityUtil__cctor_m502770183 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
