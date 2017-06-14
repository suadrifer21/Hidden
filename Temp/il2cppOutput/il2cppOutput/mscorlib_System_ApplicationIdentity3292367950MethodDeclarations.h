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

// System.ApplicationIdentity
struct ApplicationIdentity_t3292367950;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.ApplicationIdentity::.ctor(System.String)
extern "C"  void ApplicationIdentity__ctor_m3651073673 (ApplicationIdentity_t3292367950 * __this, String_t* ___applicationIdentityFullName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationIdentity::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ApplicationIdentity_System_Runtime_Serialization_ISerializable_GetObjectData_m77567264 (ApplicationIdentity_t3292367950 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ApplicationIdentity::get_FullName()
extern "C"  String_t* ApplicationIdentity_get_FullName_m3750448843 (ApplicationIdentity_t3292367950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ApplicationIdentity::ToString()
extern "C"  String_t* ApplicationIdentity_ToString_m800036884 (ApplicationIdentity_t3292367950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
