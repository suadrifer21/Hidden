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

// System.Security.Policy.AllMembershipCondition
struct AllMembershipCondition_t717795426;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t373187562;
// System.Object
struct Il2CppObject;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t43919632;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Policy_Evidence1407710183.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"
#include "mscorlib_System_Security_Policy_PolicyLevel43919632.h"

// System.Void System.Security.Policy.AllMembershipCondition::.ctor()
extern "C"  void AllMembershipCondition__ctor_m3030940917 (AllMembershipCondition_t717795426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.AllMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C"  bool AllMembershipCondition_Check_m2220623045 (AllMembershipCondition_t717795426 * __this, Evidence_t1407710183 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.AllMembershipCondition::Copy()
extern "C"  Il2CppObject * AllMembershipCondition_Copy_m700552086 (AllMembershipCondition_t717795426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.AllMembershipCondition::Equals(System.Object)
extern "C"  bool AllMembershipCondition_Equals_m1746200512 (AllMembershipCondition_t717795426 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.AllMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C"  void AllMembershipCondition_FromXml_m529416165 (AllMembershipCondition_t717795426 * __this, SecurityElement_t2325568386 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.AllMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void AllMembershipCondition_FromXml_m1021488674 (AllMembershipCondition_t717795426 * __this, SecurityElement_t2325568386 * ___e0, PolicyLevel_t43919632 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.AllMembershipCondition::GetHashCode()
extern "C"  int32_t AllMembershipCondition_GetHashCode_m1752988244 (AllMembershipCondition_t717795426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.AllMembershipCondition::ToString()
extern "C"  String_t* AllMembershipCondition_ToString_m3894000262 (AllMembershipCondition_t717795426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.AllMembershipCondition::ToXml()
extern "C"  SecurityElement_t2325568386 * AllMembershipCondition_ToXml_m2771543339 (AllMembershipCondition_t717795426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.AllMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t2325568386 * AllMembershipCondition_ToXml_m662214302 (AllMembershipCondition_t717795426 * __this, PolicyLevel_t43919632 * ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
