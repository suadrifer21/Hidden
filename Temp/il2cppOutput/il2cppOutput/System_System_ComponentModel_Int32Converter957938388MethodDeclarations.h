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

// System.ComponentModel.Int32Converter
struct Int32Converter_t957938388;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t104580544;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Globalization_NumberFormatInfo104580544.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.ComponentModel.Int32Converter::.ctor()
extern "C"  void Int32Converter__ctor_m2848565465 (Int32Converter_t957938388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Int32Converter::get_SupportHex()
extern "C"  bool Int32Converter_get_SupportHex_m3780749816 (Int32Converter_t957938388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Int32Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* Int32Converter_ConvertToString_m1122528237 (Int32Converter_t957938388 * __this, Il2CppObject * ___value0, NumberFormatInfo_t104580544 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int32Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * Int32Converter_ConvertFromString_m1207396770 (Int32Converter_t957938388 * __this, String_t* ___value0, NumberFormatInfo_t104580544 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int32Converter::ConvertFromString(System.String,System.Int32)
extern "C"  Il2CppObject * Int32Converter_ConvertFromString_m4035806583 (Int32Converter_t957938388 * __this, String_t* ___value0, int32_t ___fromBase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
