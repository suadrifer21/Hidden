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

// System.Security.Permissions.IsolatedStoragePermission
struct IsolatedStoragePermission_t3796409103;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3557289502.h"
#include "mscorlib_System_Security_Permissions_IsolatedStorag174977552.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"

// System.Void System.Security.Permissions.IsolatedStoragePermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void IsolatedStoragePermission__ctor_m491345231 (IsolatedStoragePermission_t3796409103 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.IsolatedStoragePermission::set_UserQuota(System.Int64)
extern "C"  void IsolatedStoragePermission_set_UserQuota_m1599883676 (IsolatedStoragePermission_t3796409103 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.IsolatedStoragePermission::set_UsageAllowed(System.Security.Permissions.IsolatedStorageContainment)
extern "C"  void IsolatedStoragePermission_set_UsageAllowed_m812050153 (IsolatedStoragePermission_t3796409103 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.IsolatedStoragePermission::IsUnrestricted()
extern "C"  bool IsolatedStoragePermission_IsUnrestricted_m10999578 (IsolatedStoragePermission_t3796409103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.IsolatedStoragePermission::ToXml()
extern "C"  SecurityElement_t2325568386 * IsolatedStoragePermission_ToXml_m590747532 (IsolatedStoragePermission_t3796409103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.IsolatedStoragePermission::FromXml(System.Security.SecurityElement)
extern "C"  void IsolatedStoragePermission_FromXml_m2193441554 (IsolatedStoragePermission_t3796409103 * __this, SecurityElement_t2325568386 * ___esd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.IsolatedStoragePermission::IsEmpty()
extern "C"  bool IsolatedStoragePermission_IsEmpty_m1648581657 (IsolatedStoragePermission_t3796409103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
