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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>
struct Transform_1_t3135385623;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21008373517.h"
#include "mscorlib_System_Reflection_Emit_Label4243202660.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m219296054_gshared (Transform_1_t3135385623 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m219296054(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3135385623 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m219296054_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1008373517  Transform_1_Invoke_m387254326_gshared (Transform_1_t3135385623 * __this, int32_t ___key0, Label_t4243202660  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m387254326(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t1008373517  (*) (Transform_1_t3135385623 *, int32_t, Label_t4243202660 , const MethodInfo*))Transform_1_Invoke_m387254326_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1679317215_gshared (Transform_1_t3135385623 * __this, int32_t ___key0, Label_t4243202660  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1679317215(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3135385623 *, int32_t, Label_t4243202660 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1679317215_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1008373517  Transform_1_EndInvoke_m3592138636_gshared (Transform_1_t3135385623 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3592138636(__this, ___result0, method) ((  KeyValuePair_2_t1008373517  (*) (Transform_1_t3135385623 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3592138636_gshared)(__this, ___result0, method)
