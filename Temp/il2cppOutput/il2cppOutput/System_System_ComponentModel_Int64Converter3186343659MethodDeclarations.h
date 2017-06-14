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

// System.ComponentModel.Int64Converter
struct Int64Converter_t3186343659;
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

// System.Boolean System.ComponentModel.Int64Converter::get_SupportHex()
extern "C"  bool Int64Converter_get_SupportHex_m3022859769 (Int64Converter_t3186343659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Int64Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* Int64Converter_ConvertToString_m2249793844 (Int64Converter_t3186343659 * __this, Il2CppObject * ___value0, NumberFormatInfo_t104580544 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int64Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * Int64Converter_ConvertFromString_m3804656079 (Int64Converter_t3186343659 * __this, String_t* ___value0, NumberFormatInfo_t104580544 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int64Converter::ConvertFromString(System.String,System.Int32)
extern "C"  Il2CppObject * Int64Converter_ConvertFromString_m2574605840 (Int64Converter_t3186343659 * __this, String_t* ___value0, int32_t ___fromBase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
