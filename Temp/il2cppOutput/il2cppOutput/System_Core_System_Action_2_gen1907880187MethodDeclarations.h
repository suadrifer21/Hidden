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

// System.Action`2<System.Boolean,System.Int32>
struct Action_2_t1907880187;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Action`2<System.Boolean,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m1053279240_gshared (Action_2_t1907880187 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_2__ctor_m1053279240(__this, ___object0, ___method1, method) ((  void (*) (Action_2_t1907880187 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m1053279240_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`2<System.Boolean,System.Int32>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m2365036873_gshared (Action_2_t1907880187 * __this, bool ___arg10, int32_t ___arg21, const MethodInfo* method);
#define Action_2_Invoke_m2365036873(__this, ___arg10, ___arg21, method) ((  void (*) (Action_2_t1907880187 *, bool, int32_t, const MethodInfo*))Action_2_Invoke_m2365036873_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Action`2<System.Boolean,System.Int32>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m1925898598_gshared (Action_2_t1907880187 * __this, bool ___arg10, int32_t ___arg21, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Action_2_BeginInvoke_m1925898598(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Action_2_t1907880187 *, bool, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m1925898598_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// System.Void System.Action`2<System.Boolean,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m343868110_gshared (Action_2_t1907880187 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_2_EndInvoke_m343868110(__this, ___result0, method) ((  void (*) (Action_2_t1907880187 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m343868110_gshared)(__this, ___result0, method)
