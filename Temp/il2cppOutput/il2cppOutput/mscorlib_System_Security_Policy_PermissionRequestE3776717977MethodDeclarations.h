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

// System.Security.Policy.PermissionRequestEvidence
struct PermissionRequestEvidence_t3776717977;
// System.Security.PermissionSet
struct PermissionSet_t1941658161;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_PermissionSet1941658161.h"

// System.Void System.Security.Policy.PermissionRequestEvidence::.ctor(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet)
extern "C"  void PermissionRequestEvidence__ctor_m2013597692 (PermissionRequestEvidence_t3776717977 * __this, PermissionSet_t1941658161 * ___request0, PermissionSet_t1941658161 * ___optional1, PermissionSet_t1941658161 * ___denied2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.PermissionRequestEvidence::ToString()
extern "C"  String_t* PermissionRequestEvidence_ToString_m1686053575 (PermissionRequestEvidence_t3776717977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
