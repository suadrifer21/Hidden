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

// System.Security.Permissions.EnvironmentPermission
struct EnvironmentPermission_t935902940;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// System.Collections.ArrayList
struct ArrayList_t4252133567;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3557289502.h"
#include "mscorlib_System_Security_Permissions_EnvironmentPe3182667772.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"

// System.Void System.Security.Permissions.EnvironmentPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void EnvironmentPermission__ctor_m3449728632 (EnvironmentPermission_t935902940 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::.ctor(System.Security.Permissions.EnvironmentPermissionAccess,System.String)
extern "C"  void EnvironmentPermission__ctor_m2377255748 (EnvironmentPermission_t935902940 * __this, int32_t ___flag0, String_t* ___pathList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::AddPathList(System.Security.Permissions.EnvironmentPermissionAccess,System.String)
extern "C"  void EnvironmentPermission_AddPathList_m3309335072 (EnvironmentPermission_t935902940 * __this, int32_t ___flag0, String_t* ___pathList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.EnvironmentPermission::Copy()
extern "C"  Il2CppObject * EnvironmentPermission_Copy_m4235234754 (EnvironmentPermission_t935902940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::FromXml(System.Security.SecurityElement)
extern "C"  void EnvironmentPermission_FromXml_m2175442955 (EnvironmentPermission_t935902940 * __this, SecurityElement_t2325568386 * ___esd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.EnvironmentPermission::GetPathList(System.Security.Permissions.EnvironmentPermissionAccess)
extern "C"  String_t* EnvironmentPermission_GetPathList_m2029053622 (EnvironmentPermission_t935902940 * __this, int32_t ___flag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.EnvironmentPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * EnvironmentPermission_Intersect_m2848042589 (EnvironmentPermission_t935902940 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.EnvironmentPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool EnvironmentPermission_IsSubsetOf_m1252378883 (EnvironmentPermission_t935902940 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.EnvironmentPermission::IsUnrestricted()
extern "C"  bool EnvironmentPermission_IsUnrestricted_m2227445447 (EnvironmentPermission_t935902940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::SetPathList(System.Security.Permissions.EnvironmentPermissionAccess,System.String)
extern "C"  void EnvironmentPermission_SetPathList_m1046065923 (EnvironmentPermission_t935902940 * __this, int32_t ___flag0, String_t* ___pathList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.EnvironmentPermission::ToXml()
extern "C"  SecurityElement_t2325568386 * EnvironmentPermission_ToXml_m1910121157 (EnvironmentPermission_t935902940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.EnvironmentPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * EnvironmentPermission_Union_m2669023007 (EnvironmentPermission_t935902940 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.EnvironmentPermission::IsEmpty()
extern "C"  bool EnvironmentPermission_IsEmpty_m770865100 (EnvironmentPermission_t935902940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.EnvironmentPermission System.Security.Permissions.EnvironmentPermission::Cast(System.Security.IPermission)
extern "C"  EnvironmentPermission_t935902940 * EnvironmentPermission_Cast_m2466807887 (EnvironmentPermission_t935902940 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::ThrowInvalidFlag(System.Security.Permissions.EnvironmentPermissionAccess,System.Boolean)
extern "C"  void EnvironmentPermission_ThrowInvalidFlag_m3490991618 (EnvironmentPermission_t935902940 * __this, int32_t ___flag0, bool ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.EnvironmentPermission::GetPathList(System.Collections.ArrayList)
extern "C"  String_t* EnvironmentPermission_GetPathList_m127917712 (EnvironmentPermission_t935902940 * __this, ArrayList_t4252133567 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
