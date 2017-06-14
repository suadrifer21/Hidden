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

// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t502442079;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3557289502.h"
#include "mscorlib_System_Security_Permissions_SecurityPermi1642245049.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"

// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void SecurityPermission__ctor_m2647758977 (SecurityPermission_t502442079 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.SecurityPermissionFlag)
extern "C"  void SecurityPermission__ctor_m4280201110 (SecurityPermission_t502442079 * __this, int32_t ___flag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::set_Flags(System.Security.Permissions.SecurityPermissionFlag)
extern "C"  void SecurityPermission_set_Flags_m3897501266 (SecurityPermission_t502442079 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsUnrestricted()
extern "C"  bool SecurityPermission_IsUnrestricted_m114549980 (SecurityPermission_t502442079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SecurityPermission::Copy()
extern "C"  Il2CppObject * SecurityPermission_Copy_m3895182871 (SecurityPermission_t502442079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SecurityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * SecurityPermission_Intersect_m3571261540 (SecurityPermission_t502442079 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SecurityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * SecurityPermission_Union_m1741107198 (SecurityPermission_t502442079 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool SecurityPermission_IsSubsetOf_m1087302418 (SecurityPermission_t502442079 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void SecurityPermission_FromXml_m2552149020 (SecurityPermission_t502442079 * __this, SecurityElement_t2325568386 * ___esd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SecurityPermission::ToXml()
extern "C"  SecurityElement_t2325568386 * SecurityPermission_ToXml_m2307599106 (SecurityPermission_t502442079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsEmpty()
extern "C"  bool SecurityPermission_IsEmpty_m1869313067 (SecurityPermission_t502442079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SecurityPermission System.Security.Permissions.SecurityPermission::Cast(System.Security.IPermission)
extern "C"  SecurityPermission_t502442079 * SecurityPermission_Cast_m807141983 (SecurityPermission_t502442079 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
