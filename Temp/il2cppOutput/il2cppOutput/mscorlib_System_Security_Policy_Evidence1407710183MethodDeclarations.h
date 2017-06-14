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

// System.Security.Policy.Evidence
struct Evidence_t1407710183;
// System.Object
struct Il2CppObject;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Reflection.Assembly
struct Assembly_t4268412390;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Policy_Evidence1407710183.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"

// System.Void System.Security.Policy.Evidence::.ctor()
extern "C"  void Evidence__ctor_m1638117806 (Evidence_t1407710183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::.ctor(System.Security.Policy.Evidence)
extern "C"  void Evidence__ctor_m198213644 (Evidence_t1407710183 * __this, Evidence_t1407710183 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::get_Count()
extern "C"  int32_t Evidence_get_Count_m2805157382 (Evidence_t1407710183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::get_IsSynchronized()
extern "C"  bool Evidence_get_IsSynchronized_m1427392003 (Evidence_t1407710183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence::get_SyncRoot()
extern "C"  Il2CppObject * Evidence_get_SyncRoot_m3118651235 (Evidence_t1407710183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_HostEvidenceList()
extern "C"  ArrayList_t4252133567 * Evidence_get_HostEvidenceList_m2095478124 (Evidence_t1407710183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_AssemblyEvidenceList()
extern "C"  ArrayList_t4252133567 * Evidence_get_AssemblyEvidenceList_m354414178 (Evidence_t1407710183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::AddAssembly(System.Object)
extern "C"  void Evidence_AddAssembly_m3288519619 (Evidence_t1407710183 * __this, Il2CppObject * ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::AddHost(System.Object)
extern "C"  void Evidence_AddHost_m366224665 (Evidence_t1407710183 * __this, Il2CppObject * ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::CopyTo(System.Array,System.Int32)
extern "C"  void Evidence_CopyTo_m3322038291 (Evidence_t1407710183 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::Equals(System.Object)
extern "C"  bool Evidence_Equals_m2325859915 (Evidence_t1407710183 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Policy.Evidence::GetEnumerator()
extern "C"  Il2CppObject * Evidence_GetEnumerator_m3911591722 (Evidence_t1407710183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::GetHashCode()
extern "C"  int32_t Evidence_GetHashCode_m1260371757 (Evidence_t1407710183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Policy.Evidence::GetHostEnumerator()
extern "C"  Il2CppObject * Evidence_GetHostEnumerator_m516058312 (Evidence_t1407710183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::Merge(System.Security.Policy.Evidence)
extern "C"  void Evidence_Merge_m4029804804 (Evidence_t1407710183 * __this, Evidence_t1407710183 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::IsAuthenticodePresent(System.Reflection.Assembly)
extern "C"  bool Evidence_IsAuthenticodePresent_m2877584926 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Security.Policy.Evidence::GetDefaultHostEvidence(System.Reflection.Assembly)
extern "C"  Evidence_t1407710183 * Evidence_GetDefaultHostEvidence_m3779859661 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
