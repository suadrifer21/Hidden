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

// UnityEngine.Purchasing.IDs
struct IDs_t3808979560;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerator_1_t3471835840;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Purchasing.IDs::.ctor()
extern "C"  void IDs__ctor_m2525416339 (IDs_t3808979560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.IDs::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * IDs_System_Collections_IEnumerable_GetEnumerator_m1714235786 (IDs_t3808979560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IDs::Add(System.String,System.String[])
extern "C"  void IDs_Add_m217445704 (IDs_t3808979560 * __this, String_t* ___id0, StringU5BU5D_t1642385972* ___stores1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.IDs::SpecificIDForStore(System.String,System.String)
extern "C"  String_t* IDs_SpecificIDForStore_m2064923539 (IDs_t3808979560 * __this, String_t* ___store0, String_t* ___defaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> UnityEngine.Purchasing.IDs::GetEnumerator()
extern "C"  Il2CppObject* IDs_GetEnumerator_m1052902378 (IDs_t3808979560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
