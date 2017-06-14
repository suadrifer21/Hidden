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

// UnityEngine.Events.UnityAction`2<System.Object,UnityEngine.Purchasing.PurchaseFailureReason>
struct UnityAction_2_t2418415826;
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

// System.Void UnityEngine.Events.UnityAction`2<System.Object,UnityEngine.Purchasing.PurchaseFailureReason>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_2__ctor_m2317147215_gshared (UnityAction_2_t2418415826 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAction_2__ctor_m2317147215(__this, ___object0, ___method1, method) ((  void (*) (UnityAction_2_t2418415826 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_2__ctor_m2317147215_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,UnityEngine.Purchasing.PurchaseFailureReason>::Invoke(T0,T1)
extern "C"  void UnityAction_2_Invoke_m2546417248_gshared (UnityAction_2_t2418415826 * __this, Il2CppObject * ___arg00, int32_t ___arg11, const MethodInfo* method);
#define UnityAction_2_Invoke_m2546417248(__this, ___arg00, ___arg11, method) ((  void (*) (UnityAction_2_t2418415826 *, Il2CppObject *, int32_t, const MethodInfo*))UnityAction_2_Invoke_m2546417248_gshared)(__this, ___arg00, ___arg11, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,UnityEngine.Purchasing.PurchaseFailureReason>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_2_BeginInvoke_m2546947845_gshared (UnityAction_2_t2418415826 * __this, Il2CppObject * ___arg00, int32_t ___arg11, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define UnityAction_2_BeginInvoke_m2546947845(__this, ___arg00, ___arg11, ___callback2, ___object3, method) ((  Il2CppObject * (*) (UnityAction_2_t2418415826 *, Il2CppObject *, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))UnityAction_2_BeginInvoke_m2546947845_gshared)(__this, ___arg00, ___arg11, ___callback2, ___object3, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,UnityEngine.Purchasing.PurchaseFailureReason>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_2_EndInvoke_m1483932021_gshared (UnityAction_2_t2418415826 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAction_2_EndInvoke_m1483932021(__this, ___result0, method) ((  void (*) (UnityAction_2_t2418415826 *, Il2CppObject *, const MethodInfo*))UnityAction_2_EndInvoke_m1483932021_gshared)(__this, ___result0, method)
