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
// System.String
struct String_t;
// System.Version
struct Version_t1755874712;
// System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t4214504621;
struct SNIP_t4214504621_marshaled_pinvoke;
struct SNIP_t4214504621_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_StrongNameIde4214504621.h"
#include "mscorlib_System_Security_Permissions_StrongNamePub2860422703.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Version1755874712.h"

// System.Void System.Security.Permissions.StrongNameIdentityPermission/SNIP::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void SNIP__ctor_m1818038516 (SNIP_t4214504621 * __this, StrongNamePublicKeyBlob_t2860422703 * ___pk0, String_t* ___name1, Version_t1755874712 * ___version2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission/SNIP System.Security.Permissions.StrongNameIdentityPermission/SNIP::CreateDefault()
extern "C"  SNIP_t4214504621  SNIP_CreateDefault_m2910580750 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission/SNIP::IsNameSubsetOf(System.String)
extern "C"  bool SNIP_IsNameSubsetOf_m2680140283 (SNIP_t4214504621 * __this, String_t* ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission/SNIP::IsSubsetOf(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  bool SNIP_IsSubsetOf_m1312559857 (SNIP_t4214504621 * __this, SNIP_t4214504621  ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SNIP_t4214504621;
struct SNIP_t4214504621_marshaled_pinvoke;

extern "C" void SNIP_t4214504621_marshal_pinvoke(const SNIP_t4214504621& unmarshaled, SNIP_t4214504621_marshaled_pinvoke& marshaled);
extern "C" void SNIP_t4214504621_marshal_pinvoke_back(const SNIP_t4214504621_marshaled_pinvoke& marshaled, SNIP_t4214504621& unmarshaled);
extern "C" void SNIP_t4214504621_marshal_pinvoke_cleanup(SNIP_t4214504621_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SNIP_t4214504621;
struct SNIP_t4214504621_marshaled_com;

extern "C" void SNIP_t4214504621_marshal_com(const SNIP_t4214504621& unmarshaled, SNIP_t4214504621_marshaled_com& marshaled);
extern "C" void SNIP_t4214504621_marshal_com_back(const SNIP_t4214504621_marshaled_com& marshaled, SNIP_t4214504621& unmarshaled);
extern "C" void SNIP_t4214504621_marshal_com_cleanup(SNIP_t4214504621_marshaled_com& marshaled);
