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

// System.Security.Policy.FileCodeGroup
struct FileCodeGroup_t227438634;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t373187562;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t43919632;
// System.Security.Policy.CodeGroup
struct CodeGroup_t1856851900;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t1594053347;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_FileIOPermiss1079931101.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"
#include "mscorlib_System_Security_Policy_PolicyLevel43919632.h"
#include "mscorlib_System_Security_Policy_Evidence1407710183.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Security.Policy.FileCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Permissions.FileIOPermissionAccess)
extern "C"  void FileCodeGroup__ctor_m1755317344 (FileCodeGroup_t227438634 * __this, Il2CppObject * ___membershipCondition0, int32_t ___access1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FileCodeGroup__ctor_m1981837369 (FileCodeGroup_t227438634 * __this, SecurityElement_t2325568386 * ___e0, PolicyLevel_t43919632 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.FileCodeGroup::Copy()
extern "C"  CodeGroup_t1856851900 * FileCodeGroup_Copy_m2713630122 (FileCodeGroup_t227438634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.FileCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t1594053347 * FileCodeGroup_Resolve_m3271851422 (FileCodeGroup_t227438634 * __this, Evidence_t1407710183 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.FileCodeGroup::Equals(System.Object)
extern "C"  bool FileCodeGroup_Equals_m3005398378 (FileCodeGroup_t227438634 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.FileCodeGroup::GetHashCode()
extern "C"  int32_t FileCodeGroup_GetHashCode_m53205002 (FileCodeGroup_t227438634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FileCodeGroup_ParseXml_m1874382825 (FileCodeGroup_t227438634 * __this, SecurityElement_t2325568386 * ___e0, PolicyLevel_t43919632 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FileCodeGroup_CreateXml_m575148212 (FileCodeGroup_t227438634 * __this, SecurityElement_t2325568386 * ___element0, PolicyLevel_t43919632 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
