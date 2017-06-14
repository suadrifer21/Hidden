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

// System.Security.Policy.ZoneMembershipCondition
struct ZoneMembershipCondition_t3435127283;
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
#include "mscorlib_System_Security_SecurityZone140334334.h"
#include "mscorlib_System_Security_Policy_Evidence1407710183.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"
#include "mscorlib_System_Security_Policy_PolicyLevel43919632.h"

// System.Void System.Security.Policy.ZoneMembershipCondition::.ctor()
extern "C"  void ZoneMembershipCondition__ctor_m1983993040 (ZoneMembershipCondition_t3435127283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::.ctor(System.Security.SecurityZone)
extern "C"  void ZoneMembershipCondition__ctor_m2719178193 (ZoneMembershipCondition_t3435127283 * __this, int32_t ___zone0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityZone System.Security.Policy.ZoneMembershipCondition::get_SecurityZone()
extern "C"  int32_t ZoneMembershipCondition_get_SecurityZone_m1912045139 (ZoneMembershipCondition_t3435127283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::set_SecurityZone(System.Security.SecurityZone)
extern "C"  void ZoneMembershipCondition_set_SecurityZone_m863145258 (ZoneMembershipCondition_t3435127283 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.ZoneMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C"  bool ZoneMembershipCondition_Check_m3543093094 (ZoneMembershipCondition_t3435127283 * __this, Evidence_t1407710183 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.ZoneMembershipCondition::Copy()
extern "C"  Il2CppObject * ZoneMembershipCondition_Copy_m3585658717 (ZoneMembershipCondition_t3435127283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.ZoneMembershipCondition::Equals(System.Object)
extern "C"  bool ZoneMembershipCondition_Equals_m2154303903 (ZoneMembershipCondition_t3435127283 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C"  void ZoneMembershipCondition_FromXml_m3214376864 (ZoneMembershipCondition_t3435127283 * __this, SecurityElement_t2325568386 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void ZoneMembershipCondition_FromXml_m3967372977 (ZoneMembershipCondition_t3435127283 * __this, SecurityElement_t2325568386 * ___e0, PolicyLevel_t43919632 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.ZoneMembershipCondition::GetHashCode()
extern "C"  int32_t ZoneMembershipCondition_GetHashCode_m293339533 (ZoneMembershipCondition_t3435127283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.ZoneMembershipCondition::ToString()
extern "C"  String_t* ZoneMembershipCondition_ToString_m336783421 (ZoneMembershipCondition_t3435127283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ZoneMembershipCondition::ToXml()
extern "C"  SecurityElement_t2325568386 * ZoneMembershipCondition_ToXml_m1429511462 (ZoneMembershipCondition_t3435127283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ZoneMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t2325568386 * ZoneMembershipCondition_ToXml_m192162131 (ZoneMembershipCondition_t3435127283 * __this, PolicyLevel_t43919632 * ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
