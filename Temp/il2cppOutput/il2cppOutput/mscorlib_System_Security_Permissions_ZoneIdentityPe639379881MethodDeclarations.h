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

// System.Security.Permissions.ZoneIdentityPermission
struct ZoneIdentityPermission_t639379881;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityZone140334334.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"

// System.Void System.Security.Permissions.ZoneIdentityPermission::.ctor(System.Security.SecurityZone)
extern "C"  void ZoneIdentityPermission__ctor_m1746885113 (ZoneIdentityPermission_t639379881 * __this, int32_t ___zone0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Copy()
extern "C"  Il2CppObject * ZoneIdentityPermission_Copy_m3602705121 (ZoneIdentityPermission_t639379881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ZoneIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool ZoneIdentityPermission_IsSubsetOf_m3703492620 (ZoneIdentityPermission_t639379881 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * ZoneIdentityPermission_Union_m197714468 (ZoneIdentityPermission_t639379881 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * ZoneIdentityPermission_Intersect_m2855768978 (ZoneIdentityPermission_t639379881 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ZoneIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void ZoneIdentityPermission_FromXml_m888625870 (ZoneIdentityPermission_t639379881 * __this, SecurityElement_t2325568386 * ___esd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.ZoneIdentityPermission::ToXml()
extern "C"  SecurityElement_t2325568386 * ZoneIdentityPermission_ToXml_m803132876 (ZoneIdentityPermission_t639379881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ZoneIdentityPermission::set_SecurityZone(System.Security.SecurityZone)
extern "C"  void ZoneIdentityPermission_set_SecurityZone_m2961672384 (ZoneIdentityPermission_t639379881 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ZoneIdentityPermission System.Security.Permissions.ZoneIdentityPermission::Cast(System.Security.IPermission)
extern "C"  ZoneIdentityPermission_t639379881 * ZoneIdentityPermission_Cast_m2041351191 (ZoneIdentityPermission_t639379881 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
