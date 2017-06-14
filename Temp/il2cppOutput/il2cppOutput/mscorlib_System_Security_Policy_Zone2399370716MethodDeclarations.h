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

// System.Security.Policy.Zone
struct Zone_t2399370716;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityZone140334334.h"
#include "mscorlib_System_Security_Policy_Evidence1407710183.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Security.Policy.Zone::.ctor(System.Security.SecurityZone)
extern "C"  void Zone__ctor_m836147714 (Zone_t2399370716 * __this, int32_t ___zone0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityZone System.Security.Policy.Zone::get_SecurityZone()
extern "C"  int32_t Zone_get_SecurityZone_m1193238538 (Zone_t2399370716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Zone::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Il2CppObject * Zone_CreateIdentityPermission_m1568079366 (Zone_t2399370716 * __this, Evidence_t1407710183 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Zone System.Security.Policy.Zone::CreateFromUrl(System.String)
extern "C"  Zone_t2399370716 * Zone_CreateFromUrl_m1488377684 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Zone::Equals(System.Object)
extern "C"  bool Zone_Equals_m1087500270 (Zone_t2399370716 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Zone::GetHashCode()
extern "C"  int32_t Zone_GetHashCode_m839510550 (Zone_t2399370716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Zone::ToString()
extern "C"  String_t* Zone_ToString_m4007492560 (Zone_t2399370716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
