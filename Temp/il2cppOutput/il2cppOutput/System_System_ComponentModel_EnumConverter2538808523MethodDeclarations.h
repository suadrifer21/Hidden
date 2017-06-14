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

// System.ComponentModel.EnumConverter
struct EnumConverter_t2538808523;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t3633625151;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t191679357;
// System.Collections.IComparer
struct IComparer_t3952557350;
// System.ArgumentException
struct ArgumentException_t3259014390;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_ComponentModel_TypeConverter_Standard191679357.h"

// System.Void System.ComponentModel.EnumConverter::.ctor(System.Type)
extern "C"  void EnumConverter__ctor_m3326043571 (EnumConverter_t2538808523 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool EnumConverter_CanConvertTo_m2854622655 (EnumConverter_t2538808523 * __this, Il2CppObject * ___context0, Type_t * ___destinationType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.EnumConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * EnumConverter_ConvertTo_m2663323854 (EnumConverter_t2538808523 * __this, Il2CppObject * ___context0, CultureInfo_t3500843524 * ___culture1, Il2CppObject * ___value2, Type_t * ___destinationType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool EnumConverter_CanConvertFrom_m1019435176 (EnumConverter_t2538808523 * __this, Il2CppObject * ___context0, Type_t * ___sourceType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.EnumConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Il2CppObject * EnumConverter_ConvertFrom_m3705677202 (EnumConverter_t2538808523 * __this, Il2CppObject * ___context0, CultureInfo_t3500843524 * ___culture1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  bool EnumConverter_IsValid_m2154182596 (EnumConverter_t2538808523 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool EnumConverter_GetStandardValuesSupported_m3866798731 (EnumConverter_t2538808523 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool EnumConverter_GetStandardValuesExclusive_m660472567 (EnumConverter_t2538808523 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C"  StandardValuesCollection_t191679357 * EnumConverter_GetStandardValues_m4127327453 (EnumConverter_t2538808523 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IComparer System.ComponentModel.EnumConverter::get_Comparer()
extern "C"  Il2CppObject * EnumConverter_get_Comparer_m212443907 (EnumConverter_t2538808523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.EnumConverter::get_EnumType()
extern "C"  Type_t * EnumConverter_get_EnumType_m2507063236 (EnumConverter_t2538808523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::get_Values()
extern "C"  StandardValuesCollection_t191679357 * EnumConverter_get_Values_m2206377553 (EnumConverter_t2538808523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EnumConverter::set_Values(System.ComponentModel.TypeConverter/StandardValuesCollection)
extern "C"  void EnumConverter_set_Values_m3268572248 (EnumConverter_t2538808523 * __this, StandardValuesCollection_t191679357 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArgumentException System.ComponentModel.EnumConverter::CreateValueNotValidException(System.Object)
extern "C"  ArgumentException_t3259014390 * EnumConverter_CreateValueNotValidException_m2766723693 (EnumConverter_t2538808523 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::get_IsFlags()
extern "C"  bool EnumConverter_get_IsFlags_m2596709316 (EnumConverter_t2538808523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
