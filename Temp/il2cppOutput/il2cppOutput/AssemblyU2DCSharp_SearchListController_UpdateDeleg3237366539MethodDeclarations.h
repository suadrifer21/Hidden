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

// SearchListController/UpdateDelegate
struct UpdateDelegate_t3237366539;
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

// System.Void SearchListController/UpdateDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void UpdateDelegate__ctor_m3595514922 (UpdateDelegate_t3237366539 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SearchListController/UpdateDelegate::Invoke()
extern "C"  void UpdateDelegate_Invoke_m379634896 (UpdateDelegate_t3237366539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult SearchListController/UpdateDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UpdateDelegate_BeginInvoke_m3701437677 (UpdateDelegate_t3237366539 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SearchListController/UpdateDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void UpdateDelegate_EndInvoke_m44366068 (UpdateDelegate_t3237366539 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
