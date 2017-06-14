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

// System.Security.Policy.StrongNameMembershipCondition
struct StrongNameMembershipCondition_t552614029;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2860422703;
// System.String
struct String_t;
// System.Version
struct Version_t1755874712;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t373187562;
// System.Object
struct Il2CppObject;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t43919632;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_StrongNamePub2860422703.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Version1755874712.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"
#include "mscorlib_System_Security_Policy_Evidence1407710183.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Security_Policy_PolicyLevel43919632.h"

// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void StrongNameMembershipCondition__ctor_m3405387459 (StrongNameMembershipCondition_t552614029 * __this, StrongNamePublicKeyBlob_t2860422703 * ___blob0, String_t* ___name1, Version_t1755874712 * ___version2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.SecurityElement)
extern "C"  void StrongNameMembershipCondition__ctor_m1991913659 (StrongNameMembershipCondition_t552614029 * __this, SecurityElement_t2325568386 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor()
extern "C"  void StrongNameMembershipCondition__ctor_m387170946 (StrongNameMembershipCondition_t552614029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::get_Name()
extern "C"  String_t* StrongNameMembershipCondition_get_Name_m4134365911 (StrongNameMembershipCondition_t552614029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongNameMembershipCondition::get_Version()
extern "C"  Version_t1755874712 * StrongNameMembershipCondition_get_Version_m3729648137 (StrongNameMembershipCondition_t552614029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::get_PublicKey()
extern "C"  StrongNamePublicKeyBlob_t2860422703 * StrongNameMembershipCondition_get_PublicKey_m4104186190 (StrongNameMembershipCondition_t552614029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C"  bool StrongNameMembershipCondition_Check_m1326098828 (StrongNameMembershipCondition_t552614029 * __this, Evidence_t1407710183 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.StrongNameMembershipCondition::Copy()
extern "C"  Il2CppObject * StrongNameMembershipCondition_Copy_m3043253263 (StrongNameMembershipCondition_t552614029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Equals(System.Object)
extern "C"  bool StrongNameMembershipCondition_Equals_m815748533 (StrongNameMembershipCondition_t552614029 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongNameMembershipCondition::GetHashCode()
extern "C"  int32_t StrongNameMembershipCondition_GetHashCode_m107097991 (StrongNameMembershipCondition_t552614029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C"  void StrongNameMembershipCondition_FromXml_m2708993138 (StrongNameMembershipCondition_t552614029 * __this, SecurityElement_t2325568386 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void StrongNameMembershipCondition_FromXml_m1805798131 (StrongNameMembershipCondition_t552614029 * __this, SecurityElement_t2325568386 * ___e0, PolicyLevel_t43919632 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::ToString()
extern "C"  String_t* StrongNameMembershipCondition_ToString_m561679659 (StrongNameMembershipCondition_t552614029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml()
extern "C"  SecurityElement_t2325568386 * StrongNameMembershipCondition_ToXml_m852611928 (StrongNameMembershipCondition_t552614029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t2325568386 * StrongNameMembershipCondition_ToXml_m286344309 (StrongNameMembershipCondition_t552614029 * __this, PolicyLevel_t43919632 * ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
