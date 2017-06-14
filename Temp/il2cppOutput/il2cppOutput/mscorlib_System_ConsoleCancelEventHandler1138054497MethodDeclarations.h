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

// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t1138054497;
// System.Object
struct Il2CppObject;
// System.ConsoleCancelEventArgs
struct ConsoleCancelEventArgs_t2161883584;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_ConsoleCancelEventArgs2161883584.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.ConsoleCancelEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ConsoleCancelEventHandler__ctor_m3545072248 (ConsoleCancelEventHandler_t1138054497 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleCancelEventHandler::Invoke(System.Object,System.ConsoleCancelEventArgs)
extern "C"  void ConsoleCancelEventHandler_Invoke_m547481933 (ConsoleCancelEventHandler_t1138054497 * __this, Il2CppObject * ___sender0, ConsoleCancelEventArgs_t2161883584 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ConsoleCancelEventHandler::BeginInvoke(System.Object,System.ConsoleCancelEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ConsoleCancelEventHandler_BeginInvoke_m827901614 (ConsoleCancelEventHandler_t1138054497 * __this, Il2CppObject * ___sender0, ConsoleCancelEventArgs_t2161883584 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleCancelEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ConsoleCancelEventHandler_EndInvoke_m2308294146 (ConsoleCancelEventHandler_t1138054497 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
