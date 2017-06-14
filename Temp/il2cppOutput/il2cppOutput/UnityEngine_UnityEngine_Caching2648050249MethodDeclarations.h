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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Hash1282836532937.h"

// System.Boolean UnityEngine.Caching::IsVersionCached(System.String,System.Int32)
extern "C"  bool Caching_IsVersionCached_m1457575391 (Il2CppObject * __this /* static, unused */, String_t* ___url0, int32_t ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Caching::IsVersionCached(System.String,UnityEngine.Hash128)
extern "C"  bool Caching_IsVersionCached_m4046904142 (Il2CppObject * __this /* static, unused */, String_t* ___url0, Hash128_t2836532937  ___hash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Caching::INTERNAL_CALL_IsVersionCached(System.String,UnityEngine.Hash128&)
extern "C"  bool Caching_INTERNAL_CALL_IsVersionCached_m1580528031 (Il2CppObject * __this /* static, unused */, String_t* ___url0, Hash128_t2836532937 * ___hash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Caching::get_ready()
extern "C"  bool Caching_get_ready_m2221162014 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
