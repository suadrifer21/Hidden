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

// System.Security.Policy.PolicyStatement
struct PolicyStatement_t1594053347;
// System.Security.PermissionSet
struct PermissionSet_t1941658161;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t43919632;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_PermissionSet1941658161.h"
#include "mscorlib_System_Security_Policy_PolicyStatementAtt2506836895.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"
#include "mscorlib_System_Security_Policy_PolicyLevel43919632.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Security.Policy.PolicyStatement::.ctor(System.Security.PermissionSet)
extern "C"  void PolicyStatement__ctor_m2989666634 (PolicyStatement_t1594053347 * __this, PermissionSet_t1941658161 * ___permSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::.ctor(System.Security.PermissionSet,System.Security.Policy.PolicyStatementAttribute)
extern "C"  void PolicyStatement__ctor_m693127962 (PolicyStatement_t1594053347 * __this, PermissionSet_t1941658161 * ___permSet0, int32_t ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.PolicyStatement::get_PermissionSet()
extern "C"  PermissionSet_t1941658161 * PolicyStatement_get_PermissionSet_m1071771261 (PolicyStatement_t1594053347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::set_PermissionSet(System.Security.PermissionSet)
extern "C"  void PolicyStatement_set_PermissionSet_m2564884192 (PolicyStatement_t1594053347 * __this, PermissionSet_t1941658161 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::get_Attributes()
extern "C"  int32_t PolicyStatement_get_Attributes_m2111435437 (PolicyStatement_t1594053347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyStatement::Copy()
extern "C"  PolicyStatement_t1594053347 * PolicyStatement_Copy_m1520612318 (PolicyStatement_t1594053347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::FromXml(System.Security.SecurityElement)
extern "C"  void PolicyStatement_FromXml_m2697946348 (PolicyStatement_t1594053347 * __this, SecurityElement_t2325568386 * ___et0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void PolicyStatement_FromXml_m1781382447 (PolicyStatement_t1594053347 * __this, SecurityElement_t2325568386 * ___et0, PolicyLevel_t43919632 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyStatement::ToXml()
extern "C"  SecurityElement_t2325568386 * PolicyStatement_ToXml_m3005196626 (PolicyStatement_t1594053347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyStatement::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t2325568386 * PolicyStatement_ToXml_m3890171721 (PolicyStatement_t1594053347 * __this, PolicyLevel_t43919632 * ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.PolicyStatement::Equals(System.Object)
extern "C"  bool PolicyStatement_Equals_m318008089 (PolicyStatement_t1594053347 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.PolicyStatement::GetHashCode()
extern "C"  int32_t PolicyStatement_GetHashCode_m2861152979 (PolicyStatement_t1594053347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyStatement::Empty()
extern "C"  PolicyStatement_t1594053347 * PolicyStatement_Empty_m2596594982 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
