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

// System.ComponentModel.ByteConverter
struct ByteConverter_t1265255600;
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

// System.Boolean System.ComponentModel.ByteConverter::get_SupportHex()
extern "C"  bool ByteConverter_get_SupportHex_m2120074386 (ByteConverter_t1265255600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.ByteConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* ByteConverter_ConvertToString_m3630797329 (ByteConverter_t1265255600 * __this, Il2CppObject * ___value0, NumberFormatInfo_t104580544 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ByteConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * ByteConverter_ConvertFromString_m4172575482 (ByteConverter_t1265255600 * __this, String_t* ___value0, NumberFormatInfo_t104580544 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ByteConverter::ConvertFromString(System.String,System.Int32)
extern "C"  Il2CppObject * ByteConverter_ConvertFromString_m2486441915 (ByteConverter_t1265255600 * __this, String_t* ___value0, int32_t ___fromBase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
