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

// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t2048066811;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.ComponentModel.TypeConverter
struct TypeConverter_t745995970;
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t210547623;
// System.Configuration.ConfigurationCollectionAttribute
struct ConfigurationCollectionAttribute_t2811353736;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Configuration_System_Configuration_Configur3219689025.h"
#include "System_System_ComponentModel_TypeConverter745995970.h"
#include "System_Configuration_System_Configuration_Configura210547623.h"
#include "System_Configuration_System_Configuration_Configur2811353736.h"

// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type)
extern "C"  void ConfigurationProperty__ctor_m2339141717 (ConfigurationProperty_t2048066811 * __this, String_t* ___name0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object)
extern "C"  void ConfigurationProperty__ctor_m2205928547 (ConfigurationProperty_t2048066811 * __this, String_t* ___name0, Type_t * ___type1, Il2CppObject * ___default_value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.Configuration.ConfigurationPropertyOptions)
extern "C"  void ConfigurationProperty__ctor_m1024361505 (ConfigurationProperty_t2048066811 * __this, String_t* ___name0, Type_t * ___type1, Il2CppObject * ___default_value2, int32_t ___flags3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions)
extern "C"  void ConfigurationProperty__ctor_m2779674618 (ConfigurationProperty_t2048066811 * __this, String_t* ___name0, Type_t * ___type1, Il2CppObject * ___default_value2, TypeConverter_t745995970 * ___converter3, ConfigurationValidatorBase_t210547623 * ___validation4, int32_t ___flags5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions,System.String)
extern "C"  void ConfigurationProperty__ctor_m664996226 (ConfigurationProperty_t2048066811 * __this, String_t* ___name0, Type_t * ___type1, Il2CppObject * ___default_value2, TypeConverter_t745995970 * ___converter3, ConfigurationValidatorBase_t210547623 * ___validation4, int32_t ___flags5, String_t* ___description6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.cctor()
extern "C"  void ConfigurationProperty__cctor_m3667988185 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationProperty::get_DefaultValue()
extern "C"  Il2CppObject * ConfigurationProperty_get_DefaultValue_m426297024 (ConfigurationProperty_t2048066811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsKey()
extern "C"  bool ConfigurationProperty_get_IsKey_m2843757270 (ConfigurationProperty_t2048066811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsRequired()
extern "C"  bool ConfigurationProperty_get_IsRequired_m2849112540 (ConfigurationProperty_t2048066811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsDefaultCollection()
extern "C"  bool ConfigurationProperty_get_IsDefaultCollection_m4193636108 (ConfigurationProperty_t2048066811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationProperty::get_Name()
extern "C"  String_t* ConfigurationProperty_get_Name_m2150541641 (ConfigurationProperty_t2048066811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.ConfigurationProperty::get_Type()
extern "C"  Type_t * ConfigurationProperty_get_Type_m573764699 (ConfigurationProperty_t2048066811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationProperty::get_Validator()
extern "C"  ConfigurationValidatorBase_t210547623 * ConfigurationProperty_get_Validator_m1030428852 (ConfigurationProperty_t2048066811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationProperty::ConvertFromString(System.String)
extern "C"  Il2CppObject * ConfigurationProperty_ConvertFromString_m661781545 (ConfigurationProperty_t2048066811 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationProperty::ConvertToString(System.Object)
extern "C"  String_t* ConfigurationProperty_ConvertToString_m137757750 (ConfigurationProperty_t2048066811 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsElement()
extern "C"  bool ConfigurationProperty_get_IsElement_m12977767 (ConfigurationProperty_t2048066811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationCollectionAttribute System.Configuration.ConfigurationProperty::get_CollectionAttribute()
extern "C"  ConfigurationCollectionAttribute_t2811353736 * ConfigurationProperty_get_CollectionAttribute_m256228153 (ConfigurationProperty_t2048066811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::set_CollectionAttribute(System.Configuration.ConfigurationCollectionAttribute)
extern "C"  void ConfigurationProperty_set_CollectionAttribute_m21883792 (ConfigurationProperty_t2048066811 * __this, ConfigurationCollectionAttribute_t2811353736 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::Validate(System.Object)
extern "C"  void ConfigurationProperty_Validate_m556423690 (ConfigurationProperty_t2048066811 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
