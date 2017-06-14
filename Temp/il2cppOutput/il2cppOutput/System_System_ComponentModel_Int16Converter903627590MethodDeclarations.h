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

// System.ComponentModel.Int16Converter
struct Int16Converter_t903627590;
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

// System.Boolean System.ComponentModel.Int16Converter::get_SupportHex()
extern "C"  bool Int16Converter_get_SupportHex_m887206334 (Int16Converter_t903627590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Int16Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* Int16Converter_ConvertToString_m2010647039 (Int16Converter_t903627590 * __this, Il2CppObject * ___value0, NumberFormatInfo_t104580544 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int16Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * Int16Converter_ConvertFromString_m3709443060 (Int16Converter_t903627590 * __this, String_t* ___value0, NumberFormatInfo_t104580544 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int16Converter::ConvertFromString(System.String,System.Int32)
extern "C"  Il2CppObject * Int16Converter_ConvertFromString_m639787401 (Int16Converter_t903627590 * __this, String_t* ___value0, int32_t ___fromBase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
