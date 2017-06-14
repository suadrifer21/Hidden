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

// Mono.Security.X509.X509Chain
struct X509Chain_t1938971907;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3592472865;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051957;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_X509_X509CertificateCollect3592472865.h"
#include "mscorlib_Mono_Security_X509_X509Certificate324051957.h"

// System.Void Mono.Security.X509.X509Chain::.ctor()
extern "C"  void X509Chain__ctor_m3819457830 (X509Chain_t1938971907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
extern "C"  X509CertificateCollection_t3592472865 * X509Chain_get_TrustAnchors_m3673637552 (X509Chain_t1938971907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::LoadCertificates(Mono.Security.X509.X509CertificateCollection)
extern "C"  void X509Chain_LoadCertificates_m2048974896 (X509Chain_t1938971907 * __this, X509CertificateCollection_t3592472865 * ___collection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_Build_m3597492778 (X509Chain_t1938971907 * __this, X509Certificate_t324051957 * ___leaf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::Reset()
extern "C"  void X509Chain_Reset_m2833056363 (X509Chain_t1938971907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsValid_m1490186796 (X509Chain_t1938971907 * __this, X509Certificate_t324051957 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
extern "C"  X509Certificate_t324051957 * X509Chain_FindCertificateParent_m1709041205 (X509Chain_t1938971907 * __this, X509Certificate_t324051957 * ___child0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
extern "C"  X509Certificate_t324051957 * X509Chain_FindCertificateRoot_m4034911679 (X509Chain_t1938971907 * __this, X509Certificate_t324051957 * ___potentialRoot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsTrusted_m572580563 (X509Chain_t1938971907 * __this, X509Certificate_t324051957 * ___potentialTrusted0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsParent_m591885742 (X509Chain_t1938971907 * __this, X509Certificate_t324051957 * ___child0, X509Certificate_t324051957 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
