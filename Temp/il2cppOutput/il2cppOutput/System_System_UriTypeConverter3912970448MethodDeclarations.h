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

// System.UriTypeConverter
struct UriTypeConverter_t3912970448;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t3633625151;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.UriTypeConverter::.ctor()
extern "C"  void UriTypeConverter__ctor_m3743725527 (UriTypeConverter_t3912970448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::CanConvert(System.Type)
extern "C"  bool UriTypeConverter_CanConvert_m1602775223 (UriTypeConverter_t3912970448 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool UriTypeConverter_CanConvertFrom_m3617467917 (UriTypeConverter_t3912970448 * __this, Il2CppObject * ___context0, Type_t * ___sourceType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool UriTypeConverter_CanConvertTo_m1561226854 (UriTypeConverter_t3912970448 * __this, Il2CppObject * ___context0, Type_t * ___destinationType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UriTypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Il2CppObject * UriTypeConverter_ConvertFrom_m2743854187 (UriTypeConverter_t3912970448 * __this, Il2CppObject * ___context0, CultureInfo_t3500843524 * ___culture1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UriTypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * UriTypeConverter_ConvertTo_m507771013 (UriTypeConverter_t3912970448 * __this, Il2CppObject * ___context0, CultureInfo_t3500843524 * ___culture1, Il2CppObject * ___value2, Type_t * ___destinationType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  bool UriTypeConverter_IsValid_m2806107649 (UriTypeConverter_t3912970448 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
