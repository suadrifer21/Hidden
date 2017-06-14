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

// System.Security.Permissions.IsolatedStorageFilePermission
struct IsolatedStorageFilePermission_t3424948193;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3557289502.h"

// System.Void System.Security.Permissions.IsolatedStorageFilePermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void IsolatedStorageFilePermission__ctor_m1547623261 (IsolatedStorageFilePermission_t3424948193 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.IsolatedStorageFilePermission::Copy()
extern "C"  Il2CppObject * IsolatedStorageFilePermission_Copy_m2938131807 (IsolatedStorageFilePermission_t3424948193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.IsolatedStorageFilePermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * IsolatedStorageFilePermission_Intersect_m2048367672 (IsolatedStorageFilePermission_t3424948193 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.IsolatedStorageFilePermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool IsolatedStorageFilePermission_IsSubsetOf_m828170906 (IsolatedStorageFilePermission_t3424948193 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.IsolatedStorageFilePermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * IsolatedStorageFilePermission_Union_m3501959874 (IsolatedStorageFilePermission_t3424948193 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.IsolatedStorageFilePermission::ToXml()
extern "C"  SecurityElement_t2325568386 * IsolatedStorageFilePermission_ToXml_m1043681582 (IsolatedStorageFilePermission_t3424948193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.IsolatedStorageFilePermission System.Security.Permissions.IsolatedStorageFilePermission::Cast(System.Security.IPermission)
extern "C"  IsolatedStorageFilePermission_t3424948193 * IsolatedStorageFilePermission_Cast_m3785328367 (IsolatedStorageFilePermission_t3424948193 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
