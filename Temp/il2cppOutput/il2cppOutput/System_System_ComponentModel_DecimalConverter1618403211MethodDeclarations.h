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

// System.ComponentModel.DecimalConverter
struct DecimalConverter_t1618403211;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t3633625151;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t104580544;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Globalization_NumberFormatInfo104580544.h"
#include "mscorlib_System_String2029220233.h"

// System.Boolean System.ComponentModel.DecimalConverter::get_SupportHex()
extern "C"  bool DecimalConverter_get_SupportHex_m1822865007 (DecimalConverter_t1618403211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DecimalConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool DecimalConverter_CanConvertTo_m4217282023 (DecimalConverter_t1618403211 * __this, Il2CppObject * ___context0, Type_t * ___destinationType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DecimalConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * DecimalConverter_ConvertTo_m2911370646 (DecimalConverter_t1618403211 * __this, Il2CppObject * ___context0, CultureInfo_t3500843524 * ___culture1, Il2CppObject * ___value2, Type_t * ___destinationType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.DecimalConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* DecimalConverter_ConvertToString_m1441905408 (DecimalConverter_t1618403211 * __this, Il2CppObject * ___value0, NumberFormatInfo_t104580544 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DecimalConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * DecimalConverter_ConvertFromString_m4282716341 (DecimalConverter_t1618403211 * __this, String_t* ___value0, NumberFormatInfo_t104580544 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
