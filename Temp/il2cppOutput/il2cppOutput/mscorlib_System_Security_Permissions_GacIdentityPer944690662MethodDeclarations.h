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

// System.Security.Permissions.GacIdentityPermission
struct GacIdentityPermission_t944690662;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"

// System.Void System.Security.Permissions.GacIdentityPermission::.ctor()
extern "C"  void GacIdentityPermission__ctor_m1516787253 (GacIdentityPermission_t944690662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Copy()
extern "C"  Il2CppObject * GacIdentityPermission_Copy_m667045568 (GacIdentityPermission_t944690662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * GacIdentityPermission_Intersect_m92111063 (GacIdentityPermission_t944690662 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.GacIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool GacIdentityPermission_IsSubsetOf_m4188849765 (GacIdentityPermission_t944690662 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * GacIdentityPermission_Union_m2280895137 (GacIdentityPermission_t944690662 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.GacIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void GacIdentityPermission_FromXml_m487064581 (GacIdentityPermission_t944690662 * __this, SecurityElement_t2325568386 * ___securityElement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.GacIdentityPermission::ToXml()
extern "C"  SecurityElement_t2325568386 * GacIdentityPermission_ToXml_m373428287 (GacIdentityPermission_t944690662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.GacIdentityPermission System.Security.Permissions.GacIdentityPermission::Cast(System.Security.IPermission)
extern "C"  GacIdentityPermission_t944690662 * GacIdentityPermission_Cast_m3167284687 (GacIdentityPermission_t944690662 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
