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

// System.Security.Policy.CodeGroup
struct CodeGroup_t1856851900;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t373187562;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t1594053347;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t43919632;
// System.String
struct String_t;
// System.Collections.IList
struct IList_t3321498491;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Policy_PolicyStatement1594053347.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"
#include "mscorlib_System_Security_Policy_PolicyLevel43919632.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_Policy_CodeGroup1856851900.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Security.Policy.CodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C"  void CodeGroup__ctor_m948048116 (CodeGroup_t1856851900 * __this, Il2CppObject * ___membershipCondition0, PolicyStatement_t1594053347 * ___policy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void CodeGroup__ctor_m3875936259 (CodeGroup_t1856851900 * __this, SecurityElement_t2325568386 * ___e0, PolicyLevel_t43919632 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::get_PolicyStatement()
extern "C"  PolicyStatement_t1594053347 * CodeGroup_get_PolicyStatement_m641914790 (CodeGroup_t1856851900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_PolicyStatement(System.Security.Policy.PolicyStatement)
extern "C"  void CodeGroup_set_PolicyStatement_m579863247 (CodeGroup_t1856851900 * __this, PolicyStatement_t1594053347 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Description()
extern "C"  String_t* CodeGroup_get_Description_m3858027485 (CodeGroup_t1856851900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_Description(System.String)
extern "C"  void CodeGroup_set_Description_m3480950046 (CodeGroup_t1856851900 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::get_MembershipCondition()
extern "C"  Il2CppObject * CodeGroup_get_MembershipCondition_m381298989 (CodeGroup_t1856851900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Name()
extern "C"  String_t* CodeGroup_get_Name_m762940702 (CodeGroup_t1856851900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_Name(System.String)
extern "C"  void CodeGroup_set_Name_m4201618007 (CodeGroup_t1856851900 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Security.Policy.CodeGroup::get_Children()
extern "C"  Il2CppObject * CodeGroup_get_Children_m4076602301 (CodeGroup_t1856851900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::AddChild(System.Security.Policy.CodeGroup)
extern "C"  void CodeGroup_AddChild_m187306483 (CodeGroup_t1856851900 * __this, CodeGroup_t1856851900 * ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Object)
extern "C"  bool CodeGroup_Equals_m2029023592 (CodeGroup_t1856851900 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Security.Policy.CodeGroup,System.Boolean)
extern "C"  bool CodeGroup_Equals_m2258580796 (CodeGroup_t1856851900 * __this, CodeGroup_t1856851900 * ___cg0, bool ___compareChildren1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.CodeGroup::GetHashCode()
extern "C"  int32_t CodeGroup_GetHashCode_m1843501624 (CodeGroup_t1856851900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void CodeGroup_FromXml_m2194903050 (CodeGroup_t1856851900 * __this, SecurityElement_t2325568386 * ___e0, PolicyLevel_t43919632 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void CodeGroup_ParseXml_m1706267343 (CodeGroup_t1856851900 * __this, SecurityElement_t2325568386 * ___e0, PolicyLevel_t43919632 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.CodeGroup::ToXml()
extern "C"  SecurityElement_t2325568386 * CodeGroup_ToXml_m4247539845 (CodeGroup_t1856851900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.CodeGroup::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t2325568386 * CodeGroup_ToXml_m2183978134 (CodeGroup_t1856851900 * __this, PolicyLevel_t43919632 * ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void CodeGroup_CreateXml_m425182810 (CodeGroup_t1856851900 * __this, SecurityElement_t2325568386 * ___element0, PolicyLevel_t43919632 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.CodeGroup::CreateFromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  CodeGroup_t1856851900 * CodeGroup_CreateFromXml_m308031542 (Il2CppObject * __this /* static, unused */, SecurityElement_t2325568386 * ___se0, PolicyLevel_t43919632 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
