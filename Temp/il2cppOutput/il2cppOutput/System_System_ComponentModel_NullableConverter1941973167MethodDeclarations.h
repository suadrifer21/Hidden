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

// System.ComponentModel.NullableConverter
struct NullableConverter_t1941973167;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t3633625151;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3166009492;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t191679357;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Object2689449295.h"

// System.Boolean System.ComponentModel.NullableConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool NullableConverter_CanConvertFrom_m3176132520 (NullableConverter_t1941973167 * __this, Il2CppObject * ___context0, Type_t * ___sourceType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool NullableConverter_CanConvertTo_m1929379537 (NullableConverter_t1941973167 * __this, Il2CppObject * ___context0, Type_t * ___destinationType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.NullableConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Il2CppObject * NullableConverter_ConvertFrom_m818758662 (NullableConverter_t1941973167 * __this, Il2CppObject * ___context0, CultureInfo_t3500843524 * ___culture1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.NullableConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * NullableConverter_ConvertTo_m1338318 (NullableConverter_t1941973167 * __this, Il2CppObject * ___context0, CultureInfo_t3500843524 * ___culture1, Il2CppObject * ___value2, Type_t * ___destinationType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool NullableConverter_GetCreateInstanceSupported_m883302063 (NullableConverter_t1941973167 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.NullableConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3166009492 * NullableConverter_GetProperties_m3755086408 (NullableConverter_t1941973167 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, AttributeU5BU5D_t4255796347* ___attributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool NullableConverter_GetPropertiesSupported_m1195541583 (NullableConverter_t1941973167 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.NullableConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C"  StandardValuesCollection_t191679357 * NullableConverter_GetStandardValues_m510051303 (NullableConverter_t1941973167 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool NullableConverter_GetStandardValuesExclusive_m1710620717 (NullableConverter_t1941973167 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool NullableConverter_GetStandardValuesSupported_m1857380869 (NullableConverter_t1941973167 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  bool NullableConverter_IsValid_m1598689580 (NullableConverter_t1941973167 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
