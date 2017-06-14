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

// UnityEngine.Purchasing.AsyncUtil
struct AsyncUtil_t423752048;
// System.String
struct String_t;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action
struct Action_t3226471752;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.WWW
struct WWW_t2919945039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_WWW2919945039.h"

// System.Void UnityEngine.Purchasing.AsyncUtil::.ctor()
extern "C"  void AsyncUtil__ctor_m3590526003 (AsyncUtil_t423752048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AsyncUtil::Get(System.String,System.Action`1<System.String>,System.Action`1<System.String>)
extern "C"  void AsyncUtil_Get_m628837451 (AsyncUtil_t423752048 * __this, String_t* ___url0, Action_1_t1831019615 * ___responseHandler1, Action_1_t1831019615 * ___errorHandler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AsyncUtil::Schedule(System.Action,System.Int32)
extern "C"  void AsyncUtil_Schedule_m2424283872 (AsyncUtil_t423752048 * __this, Action_t3226471752 * ___a0, int32_t ___delayInSeconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.AsyncUtil::DoInvoke(System.Action,System.Int32)
extern "C"  Il2CppObject * AsyncUtil_DoInvoke_m1346439582 (AsyncUtil_t423752048 * __this, Action_t3226471752 * ___a0, int32_t ___delayInSeconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.AsyncUtil::Process(UnityEngine.WWW,System.Action`1<System.String>,System.Action`1<System.String>)
extern "C"  Il2CppObject * AsyncUtil_Process_m1397534228 (AsyncUtil_t423752048 * __this, WWW_t2919945039 * ___request0, Action_1_t1831019615 * ___responseHandler1, Action_1_t1831019615 * ___errorHandler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
