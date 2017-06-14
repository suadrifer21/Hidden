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

// System.Action`2<System.Boolean,UnityEngine.Purchasing.PurchaseFailureReason>
struct Action_2_t1158962578;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc1322959839.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Action`2<System.Boolean,UnityEngine.Purchasing.PurchaseFailureReason>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m1121744629_gshared (Action_2_t1158962578 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_2__ctor_m1121744629(__this, ___object0, ___method1, method) ((  void (*) (Action_2_t1158962578 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m1121744629_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`2<System.Boolean,UnityEngine.Purchasing.PurchaseFailureReason>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m1462475090_gshared (Action_2_t1158962578 * __this, bool ___arg10, int32_t ___arg21, const MethodInfo* method);
#define Action_2_Invoke_m1462475090(__this, ___arg10, ___arg21, method) ((  void (*) (Action_2_t1158962578 *, bool, int32_t, const MethodInfo*))Action_2_Invoke_m1462475090_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Action`2<System.Boolean,UnityEngine.Purchasing.PurchaseFailureReason>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m772046713_gshared (Action_2_t1158962578 * __this, bool ___arg10, int32_t ___arg21, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Action_2_BeginInvoke_m772046713(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Action_2_t1158962578 *, bool, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m772046713_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// System.Void System.Action`2<System.Boolean,UnityEngine.Purchasing.PurchaseFailureReason>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m430603547_gshared (Action_2_t1158962578 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_2_EndInvoke_m430603547(__this, ___result0, method) ((  void (*) (Action_2_t1158962578 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m430603547_gshared)(__this, ___result0, method)
