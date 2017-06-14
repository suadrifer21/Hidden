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

// System.Security.Policy.UnionCodeGroup
struct UnionCodeGroup_t2013835339;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t373187562;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t1594053347;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t43919632;
// System.Security.Policy.CodeGroup
struct CodeGroup_t1856851900;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Policy_PolicyStatement1594053347.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"
#include "mscorlib_System_Security_Policy_PolicyLevel43919632.h"
#include "mscorlib_System_Security_Policy_Evidence1407710183.h"

// System.Void System.Security.Policy.UnionCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C"  void UnionCodeGroup__ctor_m1784279237 (UnionCodeGroup_t2013835339 * __this, Il2CppObject * ___membershipCondition0, PolicyStatement_t1594053347 * ___policy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.UnionCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void UnionCodeGroup__ctor_m3249353768 (UnionCodeGroup_t2013835339 * __this, SecurityElement_t2325568386 * ___e0, PolicyLevel_t43919632 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.UnionCodeGroup::Copy()
extern "C"  CodeGroup_t1856851900 * UnionCodeGroup_Copy_m2479501449 (UnionCodeGroup_t2013835339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.UnionCodeGroup::Copy(System.Boolean)
extern "C"  CodeGroup_t1856851900 * UnionCodeGroup_Copy_m1291994320 (UnionCodeGroup_t2013835339 * __this, bool ___childs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.UnionCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t1594053347 * UnionCodeGroup_Resolve_m2561608333 (UnionCodeGroup_t2013835339 * __this, Evidence_t1407710183 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
