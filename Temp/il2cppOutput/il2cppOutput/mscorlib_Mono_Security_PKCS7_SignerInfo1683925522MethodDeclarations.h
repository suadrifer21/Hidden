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

// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t1683925522;
// Mono.Security.ASN1
struct ASN1_t924533535;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.ArrayList
struct ArrayList_t4252133567;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_ASN1924533535.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Security.PKCS7/SignerInfo::.ctor()
extern "C"  void SignerInfo__ctor_m627109334 (SignerInfo_t1683925522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignerInfo::.ctor(Mono.Security.ASN1)
extern "C"  void SignerInfo__ctor_m3034049026 (SignerInfo_t1683925522 * __this, ASN1_t924533535 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignerInfo::get_IssuerName()
extern "C"  String_t* SignerInfo_get_IssuerName_m3955006356 (SignerInfo_t1683925522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/SignerInfo::get_SerialNumber()
extern "C"  ByteU5BU5D_t3397334013* SignerInfo_get_SerialNumber_m2569536592 (SignerInfo_t1683925522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::get_AuthenticatedAttributes()
extern "C"  ArrayList_t4252133567 * SignerInfo_get_AuthenticatedAttributes_m3885025547 (SignerInfo_t1683925522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignerInfo::get_HashName()
extern "C"  String_t* SignerInfo_get_HashName_m45897789 (SignerInfo_t1683925522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignerInfo::set_HashName(System.String)
extern "C"  void SignerInfo_set_HashName_m2112791236 (SignerInfo_t1683925522 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/SignerInfo::get_Signature()
extern "C"  ByteU5BU5D_t3397334013* SignerInfo_get_Signature_m1821851445 (SignerInfo_t1683925522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::get_UnauthenticatedAttributes()
extern "C"  ArrayList_t4252133567 * SignerInfo_get_UnauthenticatedAttributes_m3089523236 (SignerInfo_t1683925522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.PKCS7/SignerInfo::get_Version()
extern "C"  uint8_t SignerInfo_get_Version_m975782973 (SignerInfo_t1683925522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
