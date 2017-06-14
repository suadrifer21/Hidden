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

// System.Security.Policy.PolicyLevel
struct PolicyLevel_t43919632;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t4149260796;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t1594053347;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;
// System.Reflection.Assembly
struct Assembly_t4268412390;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_PolicyLevelType2082293816.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"
#include "mscorlib_System_Security_Policy_Evidence1407710183.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"

// System.Void System.Security.Policy.PolicyLevel::.ctor(System.String,System.Security.PolicyLevelType)
extern "C"  void PolicyLevel__ctor_m4016051886 (PolicyLevel_t43919632 * __this, String_t* ___label0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::LoadFromFile(System.String)
extern "C"  void PolicyLevel_LoadFromFile_m2609176111 (PolicyLevel_t43919632 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyLevel::FromString(System.String)
extern "C"  SecurityElement_t2325568386 * PolicyLevel_FromString_m3622354478 (PolicyLevel_t43919632 * __this, String_t* ___xml0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::FromXml(System.Security.SecurityElement)
extern "C"  void PolicyLevel_FromXml_m3103267607 (PolicyLevel_t43919632 * __this, SecurityElement_t2325568386 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.PolicyLevel::GetNamedPermissionSet(System.String)
extern "C"  NamedPermissionSet_t4149260796 * PolicyLevel_GetNamedPermissionSet_m303862399 (PolicyLevel_t43919632 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyLevel::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t1594053347 * PolicyLevel_Resolve_m3623819288 (PolicyLevel_t43919632 * __this, Evidence_t1407710183 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyLevel::ToXml()
extern "C"  SecurityElement_t2325568386 * PolicyLevel_ToXml_m982032765 (PolicyLevel_t43919632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::Save()
extern "C"  void PolicyLevel_Save_m4218523756 (PolicyLevel_t43919632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultLevel(System.Security.PolicyLevelType)
extern "C"  void PolicyLevel_CreateDefaultLevel_m3071557551 (PolicyLevel_t43919632 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultFullTrustAssemblies()
extern "C"  void PolicyLevel_CreateDefaultFullTrustAssemblies_m2429779347 (PolicyLevel_t43919632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultNamedPermissionSets()
extern "C"  void PolicyLevel_CreateDefaultNamedPermissionSets_m1342504509 (PolicyLevel_t43919632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.PolicyLevel::ResolveClassName(System.String)
extern "C"  String_t* PolicyLevel_ResolveClassName_m3893481061 (PolicyLevel_t43919632 * __this, String_t* ___className0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.PolicyLevel::IsFullTrustAssembly(System.Reflection.Assembly)
extern "C"  bool PolicyLevel_IsFullTrustAssembly_m303163802 (PolicyLevel_t43919632 * __this, Assembly_t4268412390 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
