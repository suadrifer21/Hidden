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

// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t877898325;
// System.Object
struct Il2CppObject;
// System.Text.RegularExpressions.RxInterpreter
struct RxInterpreter_t2459337652;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Text_RegularExpressions_RxInterprete2459337652.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Text.RegularExpressions.EvalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void EvalDelegate__ctor_m3422733786 (EvalDelegate_t877898325 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.EvalDelegate::Invoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&)
extern "C"  bool EvalDelegate_Invoke_m3288130003 (EvalDelegate_t877898325 * __this, RxInterpreter_t2459337652 * ___interp0, int32_t ___strpos1, int32_t* ___strpos_result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Text.RegularExpressions.EvalDelegate::BeginInvoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EvalDelegate_BeginInvoke_m78339244 (EvalDelegate_t877898325 * __this, RxInterpreter_t2459337652 * ___interp0, int32_t ___strpos1, int32_t* ___strpos_result2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.EvalDelegate::EndInvoke(System.Int32&,System.IAsyncResult)
extern "C"  bool EvalDelegate_EndInvoke_m1449671387 (EvalDelegate_t877898325 * __this, int32_t* ___strpos_result0, Il2CppObject * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
