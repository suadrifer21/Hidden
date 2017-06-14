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

// System.ByteMatcher
struct ByteMatcher_t2890532040;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TermInfoStrings1425267120.h"

// System.Void System.ByteMatcher::.ctor()
extern "C"  void ByteMatcher__ctor_m1208114077 (ByteMatcher_t2890532040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ByteMatcher::AddMapping(System.TermInfoStrings,System.Byte[])
extern "C"  void ByteMatcher_AddMapping_m2613404530 (ByteMatcher_t2890532040 * __this, int32_t ___key0, ByteU5BU5D_t3397334013* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ByteMatcher::Sort()
extern "C"  void ByteMatcher_Sort_m685432571 (ByteMatcher_t2890532040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ByteMatcher::StartsWith(System.Int32)
extern "C"  bool ByteMatcher_StartsWith_m2926882109 (ByteMatcher_t2890532040 * __this, int32_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TermInfoStrings System.ByteMatcher::Match(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C"  int32_t ByteMatcher_Match_m3065210142 (ByteMatcher_t2890532040 * __this, CharU5BU5D_t1328083999* ___buffer0, int32_t ___offset1, int32_t ___length2, int32_t* ___used3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
