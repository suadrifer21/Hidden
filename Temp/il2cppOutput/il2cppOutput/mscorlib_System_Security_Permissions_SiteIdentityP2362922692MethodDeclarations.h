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

// System.Security.Permissions.SiteIdentityPermission
struct SiteIdentityPermission_t2362922692;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3557289502.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"

// System.Void System.Security.Permissions.SiteIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void SiteIdentityPermission__ctor_m101449000 (SiteIdentityPermission_t2362922692 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SiteIdentityPermission::.ctor(System.String)
extern "C"  void SiteIdentityPermission__ctor_m116906645 (SiteIdentityPermission_t2362922692 * __this, String_t* ___site0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SiteIdentityPermission::.cctor()
extern "C"  void SiteIdentityPermission__cctor_m4100054256 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SiteIdentityPermission::set_Site(System.String)
extern "C"  void SiteIdentityPermission_set_Site_m1598123623 (SiteIdentityPermission_t2362922692 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SiteIdentityPermission::Copy()
extern "C"  Il2CppObject * SiteIdentityPermission_Copy_m3937547686 (SiteIdentityPermission_t2362922692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SiteIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void SiteIdentityPermission_FromXml_m2213300815 (SiteIdentityPermission_t2362922692 * __this, SecurityElement_t2325568386 * ___esd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SiteIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * SiteIdentityPermission_Intersect_m1786553301 (SiteIdentityPermission_t2362922692 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SiteIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool SiteIdentityPermission_IsSubsetOf_m511269447 (SiteIdentityPermission_t2362922692 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SiteIdentityPermission::ToXml()
extern "C"  SecurityElement_t2325568386 * SiteIdentityPermission_ToXml_m1091657897 (SiteIdentityPermission_t2362922692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SiteIdentityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * SiteIdentityPermission_Union_m1157334635 (SiteIdentityPermission_t2362922692 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SiteIdentityPermission::IsEmpty()
extern "C"  bool SiteIdentityPermission_IsEmpty_m2288180948 (SiteIdentityPermission_t2362922692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SiteIdentityPermission System.Security.Permissions.SiteIdentityPermission::Cast(System.Security.IPermission)
extern "C"  SiteIdentityPermission_t2362922692 * SiteIdentityPermission_Cast_m2619163787 (SiteIdentityPermission_t2362922692 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SiteIdentityPermission::IsValid(System.String)
extern "C"  bool SiteIdentityPermission_IsValid_m337880737 (SiteIdentityPermission_t2362922692 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SiteIdentityPermission::Match(System.String)
extern "C"  bool SiteIdentityPermission_Match_m555820674 (SiteIdentityPermission_t2362922692 * __this, String_t* ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
