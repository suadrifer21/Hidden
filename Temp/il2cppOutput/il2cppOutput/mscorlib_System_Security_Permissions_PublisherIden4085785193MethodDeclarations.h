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

// System.Security.Permissions.PublisherIdentityPermission
struct PublisherIdentityPermission_t4085785193;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3557289502.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"

// System.Void System.Security.Permissions.PublisherIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void PublisherIdentityPermission__ctor_m1174888927 (PublisherIdentityPermission_t4085785193 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void PublisherIdentityPermission__ctor_m435220366 (PublisherIdentityPermission_t4085785193 * __this, X509Certificate_t283079845 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::set_Certificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void PublisherIdentityPermission_set_Certificate_m100160646 (PublisherIdentityPermission_t4085785193 * __this, X509Certificate_t283079845 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Copy()
extern "C"  Il2CppObject * PublisherIdentityPermission_Copy_m3766843129 (PublisherIdentityPermission_t4085785193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void PublisherIdentityPermission_FromXml_m139421428 (PublisherIdentityPermission_t4085785193 * __this, SecurityElement_t2325568386 * ___esd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * PublisherIdentityPermission_Intersect_m3376511044 (PublisherIdentityPermission_t4085785193 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.PublisherIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool PublisherIdentityPermission_IsSubsetOf_m980694822 (PublisherIdentityPermission_t4085785193 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.PublisherIdentityPermission::ToXml()
extern "C"  SecurityElement_t2325568386 * PublisherIdentityPermission_ToXml_m2190757646 (PublisherIdentityPermission_t4085785193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * PublisherIdentityPermission_Union_m3545501270 (PublisherIdentityPermission_t4085785193 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.PublisherIdentityPermission System.Security.Permissions.PublisherIdentityPermission::Cast(System.Security.IPermission)
extern "C"  PublisherIdentityPermission_t4085785193 * PublisherIdentityPermission_Cast_m2553252527 (PublisherIdentityPermission_t4085785193 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
