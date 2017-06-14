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

// Mono.Security.Authenticode.AuthenticodeDeformatter
struct AuthenticodeDeformatter_t978432004;
// System.String
struct String_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051957;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Mono.Security.PKCS7/SignedData
struct SignedData_t1944945924;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2624936259;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t1683925522;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_Mono_Security_X509_X509Certificate324051957.h"
#include "mscorlib_Mono_Security_PKCS7_SignedData1944945924.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorith2624936259.h"
#include "mscorlib_Mono_Security_PKCS7_SignerInfo1683925522.h"

// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor()
extern "C"  void AuthenticodeDeformatter__ctor_m3488478874 (AuthenticodeDeformatter_t978432004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor(System.String)
extern "C"  void AuthenticodeDeformatter__ctor_m2003177880 (AuthenticodeDeformatter_t978432004 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::set_FileName(System.String)
extern "C"  void AuthenticodeDeformatter_set_FileName_m3928259686 (AuthenticodeDeformatter_t978432004 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::get_SigningCertificate()
extern "C"  X509Certificate_t324051957 * AuthenticodeDeformatter_get_SigningCertificate_m1585154734 (AuthenticodeDeformatter_t978432004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CheckSignature(System.String)
extern "C"  bool AuthenticodeDeformatter_CheckSignature_m3044613536 (AuthenticodeDeformatter_t978432004 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CompareIssuerSerial(System.String,System.Byte[],Mono.Security.X509.X509Certificate)
extern "C"  bool AuthenticodeDeformatter_CompareIssuerSerial_m3532686177 (AuthenticodeDeformatter_t978432004 * __this, String_t* ___issuer0, ByteU5BU5D_t3397334013* ___serial1, X509Certificate_t324051957 * ___x5092, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifySignature(Mono.Security.PKCS7/SignedData,System.Byte[],System.Security.Cryptography.HashAlgorithm)
extern "C"  bool AuthenticodeDeformatter_VerifySignature_m2341869550 (AuthenticodeDeformatter_t978432004 * __this, SignedData_t1944945924 * ___sd0, ByteU5BU5D_t3397334013* ___calculatedMessageDigest1, HashAlgorithm_t2624936259 * ___ha2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifyCounterSignature(Mono.Security.PKCS7/SignerInfo,System.Byte[])
extern "C"  bool AuthenticodeDeformatter_VerifyCounterSignature_m1893533540 (AuthenticodeDeformatter_t978432004 * __this, SignerInfo_t1683925522 * ___cs0, ByteU5BU5D_t3397334013* ___signature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::Reset()
extern "C"  void AuthenticodeDeformatter_Reset_m4180233591 (AuthenticodeDeformatter_t978432004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
