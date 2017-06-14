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

// System.Object
struct Il2CppObject;
// System.ConsoleKeyInfo
struct ConsoleKeyInfo_t3124575640;
struct ConsoleKeyInfo_t3124575640_marshaled_pinvoke;
struct ConsoleKeyInfo_t3124575640_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ConsoleKeyInfo3124575640.h"
#include "mscorlib_System_ConsoleKey1768883954.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.ConsoleKeyInfo::.ctor(System.Char,System.ConsoleKey,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void ConsoleKeyInfo__ctor_m825734482 (ConsoleKeyInfo_t3124575640 * __this, Il2CppChar ___keyChar0, int32_t ___key1, bool ___shift2, bool ___alt3, bool ___control4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleKeyInfo::.cctor()
extern "C"  void ConsoleKeyInfo__cctor_m927639508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleKeyInfo::SetModifiers(System.Boolean,System.Boolean,System.Boolean)
extern "C"  void ConsoleKeyInfo_SetModifiers_m1445566604 (ConsoleKeyInfo_t3124575640 * __this, bool ___shift0, bool ___alt1, bool ___control2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKey System.ConsoleKeyInfo::get_Key()
extern "C"  int32_t ConsoleKeyInfo_get_Key_m1301325935 (ConsoleKeyInfo_t3124575640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.ConsoleKeyInfo::get_KeyChar()
extern "C"  Il2CppChar ConsoleKeyInfo_get_KeyChar_m1771277047 (ConsoleKeyInfo_t3124575640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleKeyInfo::Equals(System.Object)
extern "C"  bool ConsoleKeyInfo_Equals_m462812356 (ConsoleKeyInfo_t3124575640 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleKeyInfo::Equals(System.ConsoleKeyInfo)
extern "C"  bool ConsoleKeyInfo_Equals_m167905607 (ConsoleKeyInfo_t3124575640 * __this, ConsoleKeyInfo_t3124575640  ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ConsoleKeyInfo::GetHashCode()
extern "C"  int32_t ConsoleKeyInfo_GetHashCode_m1224354212 (ConsoleKeyInfo_t3124575640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ConsoleKeyInfo_t3124575640;
struct ConsoleKeyInfo_t3124575640_marshaled_pinvoke;

extern "C" void ConsoleKeyInfo_t3124575640_marshal_pinvoke(const ConsoleKeyInfo_t3124575640& unmarshaled, ConsoleKeyInfo_t3124575640_marshaled_pinvoke& marshaled);
extern "C" void ConsoleKeyInfo_t3124575640_marshal_pinvoke_back(const ConsoleKeyInfo_t3124575640_marshaled_pinvoke& marshaled, ConsoleKeyInfo_t3124575640& unmarshaled);
extern "C" void ConsoleKeyInfo_t3124575640_marshal_pinvoke_cleanup(ConsoleKeyInfo_t3124575640_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ConsoleKeyInfo_t3124575640;
struct ConsoleKeyInfo_t3124575640_marshaled_com;

extern "C" void ConsoleKeyInfo_t3124575640_marshal_com(const ConsoleKeyInfo_t3124575640& unmarshaled, ConsoleKeyInfo_t3124575640_marshaled_com& marshaled);
extern "C" void ConsoleKeyInfo_t3124575640_marshal_com_back(const ConsoleKeyInfo_t3124575640_marshaled_com& marshaled, ConsoleKeyInfo_t3124575640& unmarshaled);
extern "C" void ConsoleKeyInfo_t3124575640_marshal_com_cleanup(ConsoleKeyInfo_t3124575640_marshaled_com& marshaled);
