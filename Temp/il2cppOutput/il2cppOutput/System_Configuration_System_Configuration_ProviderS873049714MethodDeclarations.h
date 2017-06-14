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

// System.Configuration.ProviderSettings
struct ProviderSettings_t873049714;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1776195828;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Configuration_System_Configuration_Configur1776195828.h"
#include "System_Configuration_System_Configuration_Configura700320212.h"

// System.Void System.Configuration.ProviderSettings::.ctor()
extern "C"  void ProviderSettings__ctor_m2418229397 (ProviderSettings_t873049714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::.cctor()
extern "C"  void ProviderSettings__cctor_m1551014246 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ProviderSettings::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C"  bool ProviderSettings_OnDeserializeUnrecognizedAttribute_m2101799192 (ProviderSettings_t873049714 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ProviderSettings::IsModified()
extern "C"  bool ProviderSettings_IsModified_m4208587056 (ProviderSettings_t873049714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::Reset(System.Configuration.ConfigurationElement)
extern "C"  void ProviderSettings_Reset_m748547671 (ProviderSettings_t873049714 * __this, ConfigurationElement_t1776195828 * ___parentElement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C"  void ProviderSettings_Unmerge_m3899437761 (ProviderSettings_t873049714 * __this, ConfigurationElement_t1776195828 * ___source0, ConfigurationElement_t1776195828 * ___parent1, int32_t ___updateMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProviderSettings::get_Name()
extern "C"  String_t* ProviderSettings_get_Name_m2720563190 (ProviderSettings_t873049714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProviderSettings::get_Type()
extern "C"  String_t* ProviderSettings_get_Type_m525859805 (ProviderSettings_t873049714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettings::get_Properties()
extern "C"  ConfigurationPropertyCollection_t3473514151 * ProviderSettings_get_Properties_m1448998824 (ProviderSettings_t873049714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Configuration.ProviderSettings::get_Parameters()
extern "C"  NameValueCollection_t3047564564 * ProviderSettings_get_Parameters_m1237896802 (ProviderSettings_t873049714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
