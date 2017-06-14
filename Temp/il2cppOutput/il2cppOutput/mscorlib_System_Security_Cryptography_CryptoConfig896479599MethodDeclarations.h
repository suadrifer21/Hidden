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

// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"

// System.Void System.Security.Cryptography.CryptoConfig::.cctor()
extern "C"  void CryptoConfig__cctor_m875093201 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig::Initialize()
extern "C"  void CryptoConfig_Initialize_m1553095052 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig::LoadConfig(System.String,System.Collections.Hashtable,System.Collections.Hashtable)
extern "C"  void CryptoConfig_LoadConfig_m3391125918 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, Hashtable_t909839986 * ___algorithms1, Hashtable_t909839986 * ___oid2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.CryptoConfig::CreateFromName(System.String)
extern "C"  Il2CppObject * CryptoConfig_CreateFromName_m391442950 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.CryptoConfig::CreateFromName(System.String,System.Object[])
extern "C"  Il2CppObject * CryptoConfig_CreateFromName_m2169102076 (Il2CppObject * __this /* static, unused */, String_t* ___name0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.CryptoConfig::MapNameToOID(System.String)
extern "C"  String_t* CryptoConfig_MapNameToOID_m2433158723 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeOID(System.String)
extern "C"  ByteU5BU5D_t3397334013* CryptoConfig_EncodeOID_m276236568 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeLongNumber(System.Int64)
extern "C"  ByteU5BU5D_t3397334013* CryptoConfig_EncodeLongNumber_m2352037787 (Il2CppObject * __this /* static, unused */, int64_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
