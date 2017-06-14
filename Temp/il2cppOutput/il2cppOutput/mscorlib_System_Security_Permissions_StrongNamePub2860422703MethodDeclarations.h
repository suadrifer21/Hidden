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

// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2860422703;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Security.Permissions.StrongNamePublicKeyBlob::.ctor(System.Byte[])
extern "C"  void StrongNamePublicKeyBlob__ctor_m2382885295 (StrongNamePublicKeyBlob_t2860422703 * __this, ByteU5BU5D_t3397334013* ___publicKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNamePublicKeyBlob::FromString(System.String)
extern "C"  StrongNamePublicKeyBlob_t2860422703 * StrongNamePublicKeyBlob_FromString_m3102362228 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Permissions.StrongNamePublicKeyBlob::CharToByte(System.Char)
extern "C"  uint8_t StrongNamePublicKeyBlob_CharToByte_m1402247528 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNamePublicKeyBlob::Equals(System.Object)
extern "C"  bool StrongNamePublicKeyBlob_Equals_m2407250401 (StrongNamePublicKeyBlob_t2860422703 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Permissions.StrongNamePublicKeyBlob::GetHashCode()
extern "C"  int32_t StrongNamePublicKeyBlob_GetHashCode_m2374843999 (StrongNamePublicKeyBlob_t2860422703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.StrongNamePublicKeyBlob::ToString()
extern "C"  String_t* StrongNamePublicKeyBlob_ToString_m3721281223 (StrongNamePublicKeyBlob_t2860422703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
