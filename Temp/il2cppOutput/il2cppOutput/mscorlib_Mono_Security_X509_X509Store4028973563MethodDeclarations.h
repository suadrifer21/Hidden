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

// Mono.Security.X509.X509Store
struct X509Store_t4028973563;
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3592472865;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051957;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C"  void X509Store__ctor_m3061611197 (X509Store_t4028973563 * __this, String_t* ___path0, bool ___crl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C"  X509CertificateCollection_t3592472865 * X509Store_get_Certificates_m3326507748 (X509Store_t4028973563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C"  ByteU5BU5D_t3397334013* X509Store_Load_m1210761542 (X509Store_t4028973563 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C"  X509Certificate_t324051957 * X509Store_LoadCertificate_m4270219040 (X509Store_t4028973563 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C"  bool X509Store_CheckStore_m2104973896 (X509Store_t4028973563 * __this, String_t* ___path0, bool ___throwException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C"  X509CertificateCollection_t3592472865 * X509Store_BuildCertificatesCollection_m1115850443 (X509Store_t4028973563 * __this, String_t* ___storeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
