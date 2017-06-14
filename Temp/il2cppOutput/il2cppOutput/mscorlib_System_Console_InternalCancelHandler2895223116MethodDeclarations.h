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

// System.Console/InternalCancelHandler
struct InternalCancelHandler_t2895223116;
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

// System.Void System.Console/InternalCancelHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void InternalCancelHandler__ctor_m2428589604 (InternalCancelHandler_t2895223116 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console/InternalCancelHandler::Invoke()
extern "C"  void InternalCancelHandler_Invoke_m1935092686 (InternalCancelHandler_t2895223116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Console/InternalCancelHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * InternalCancelHandler_BeginInvoke_m747981169 (InternalCancelHandler_t2895223116 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console/InternalCancelHandler::EndInvoke(System.IAsyncResult)
extern "C"  void InternalCancelHandler_EndInvoke_m3247169494 (InternalCancelHandler_t2895223116 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
