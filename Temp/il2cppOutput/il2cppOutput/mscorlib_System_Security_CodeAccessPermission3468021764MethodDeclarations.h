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

// System.Security.CodeAccessPermission
struct CodeAccessPermission_t3468021764;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3557289502.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Security.CodeAccessPermission::.ctor()
extern "C"  void CodeAccessPermission__ctor_m2285259037 (CodeAccessPermission_t3468021764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.CodeAccessPermission::Demand()
extern "C"  void CodeAccessPermission_Demand_m3612194874 (CodeAccessPermission_t3468021764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.CodeAccessPermission::Equals(System.Object)
extern "C"  bool CodeAccessPermission_Equals_m1762790716 (CodeAccessPermission_t3468021764 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.CodeAccessPermission::GetHashCode()
extern "C"  int32_t CodeAccessPermission_GetHashCode_m3295132136 (CodeAccessPermission_t3468021764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.CodeAccessPermission::ToString()
extern "C"  String_t* CodeAccessPermission_ToString_m3345031296 (CodeAccessPermission_t3468021764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.CodeAccessPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * CodeAccessPermission_Union_m3488322941 (CodeAccessPermission_t3468021764 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.CodeAccessPermission::Element(System.Int32)
extern "C"  SecurityElement_t2325568386 * CodeAccessPermission_Element_m806857876 (CodeAccessPermission_t3468021764 * __this, int32_t ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.PermissionState System.Security.CodeAccessPermission::CheckPermissionState(System.Security.Permissions.PermissionState,System.Boolean)
extern "C"  int32_t CodeAccessPermission_CheckPermissionState_m3468607831 (Il2CppObject * __this /* static, unused */, int32_t ___state0, bool ___allowUnrestricted1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.CodeAccessPermission::CheckSecurityElement(System.Security.SecurityElement,System.String,System.Int32,System.Int32)
extern "C"  int32_t CodeAccessPermission_CheckSecurityElement_m3583708780 (Il2CppObject * __this /* static, unused */, SecurityElement_t2325568386 * ___se0, String_t* ___parameterName1, int32_t ___minimumVersion2, int32_t ___maximumVersion3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.CodeAccessPermission::IsUnrestricted(System.Security.SecurityElement)
extern "C"  bool CodeAccessPermission_IsUnrestricted_m728586186 (Il2CppObject * __this /* static, unused */, SecurityElement_t2325568386 * ___se0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.CodeAccessPermission::ThrowInvalidPermission(System.Security.IPermission,System.Type)
extern "C"  void CodeAccessPermission_ThrowInvalidPermission_m76542563 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___target0, Type_t * ___expected1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
