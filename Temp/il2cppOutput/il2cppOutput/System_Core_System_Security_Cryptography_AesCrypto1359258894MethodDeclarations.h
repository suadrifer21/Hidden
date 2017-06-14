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

// System.Security.Cryptography.AesCryptoServiceProvider
struct AesCryptoServiceProvider_t1359258894;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t281704372;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.AesCryptoServiceProvider::.ctor()
extern "C"  void AesCryptoServiceProvider__ctor_m1193918 (AesCryptoServiceProvider_t1359258894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::GenerateIV()
extern "C"  void AesCryptoServiceProvider_GenerateIV_m2631712108 (AesCryptoServiceProvider_t1359258894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::GenerateKey()
extern "C"  void AesCryptoServiceProvider_GenerateKey_m2304940416 (AesCryptoServiceProvider_t1359258894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * AesCryptoServiceProvider_CreateDecryptor_m3670615752 (AesCryptoServiceProvider_t1359258894 * __this, ByteU5BU5D_t3397334013* ___rgbKey0, ByteU5BU5D_t3397334013* ___rgbIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * AesCryptoServiceProvider_CreateEncryptor_m975202328 (AesCryptoServiceProvider_t1359258894 * __this, ByteU5BU5D_t3397334013* ___rgbKey0, ByteU5BU5D_t3397334013* ___rgbIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesCryptoServiceProvider::get_IV()
extern "C"  ByteU5BU5D_t3397334013* AesCryptoServiceProvider_get_IV_m4255007294 (AesCryptoServiceProvider_t1359258894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::set_IV(System.Byte[])
extern "C"  void AesCryptoServiceProvider_set_IV_m55903213 (AesCryptoServiceProvider_t1359258894 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesCryptoServiceProvider::get_Key()
extern "C"  ByteU5BU5D_t3397334013* AesCryptoServiceProvider_get_Key_m1233141006 (AesCryptoServiceProvider_t1359258894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::set_Key(System.Byte[])
extern "C"  void AesCryptoServiceProvider_set_Key_m1857031513 (AesCryptoServiceProvider_t1359258894 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.AesCryptoServiceProvider::get_KeySize()
extern "C"  int32_t AesCryptoServiceProvider_get_KeySize_m651130197 (AesCryptoServiceProvider_t1359258894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::set_KeySize(System.Int32)
extern "C"  void AesCryptoServiceProvider_set_KeySize_m4129728238 (AesCryptoServiceProvider_t1359258894 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesCryptoServiceProvider::CreateDecryptor()
extern "C"  Il2CppObject * AesCryptoServiceProvider_CreateDecryptor_m921442206 (AesCryptoServiceProvider_t1359258894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesCryptoServiceProvider::CreateEncryptor()
extern "C"  Il2CppObject * AesCryptoServiceProvider_CreateEncryptor_m3502714394 (AesCryptoServiceProvider_t1359258894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesCryptoServiceProvider::Dispose(System.Boolean)
extern "C"  void AesCryptoServiceProvider_Dispose_m747694642 (AesCryptoServiceProvider_t1359258894 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
