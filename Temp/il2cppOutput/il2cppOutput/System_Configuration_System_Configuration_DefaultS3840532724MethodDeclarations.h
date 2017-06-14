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

// System.Configuration.DefaultSection
struct DefaultSection_t3840532724;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1776195828;
// System.String
struct String_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Configuration_System_Configuration_Configur1776195828.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Configuration_System_Configuration_Configura700320212.h"

// System.Void System.Configuration.DefaultSection::.ctor()
extern "C"  void DefaultSection__ctor_m1597606775 (DefaultSection_t3840532724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::.cctor()
extern "C"  void DefaultSection__cctor_m1370258022 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::DeserializeSection(System.Xml.XmlReader)
extern "C"  void DefaultSection_DeserializeSection_m2332286625 (DefaultSection_t3840532724 * __this, XmlReader_t3675626668 * ___xmlReader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.DefaultSection::IsModified()
extern "C"  bool DefaultSection_IsModified_m1050808524 (DefaultSection_t3840532724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::Reset(System.Configuration.ConfigurationElement)
extern "C"  void DefaultSection_Reset_m516688665 (DefaultSection_t3840532724 * __this, ConfigurationElement_t1776195828 * ___parentSection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::ResetModified()
extern "C"  void DefaultSection_ResetModified_m2081880583 (DefaultSection_t3840532724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.DefaultSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C"  String_t* DefaultSection_SerializeSection_m580503059 (DefaultSection_t3840532724 * __this, ConfigurationElement_t1776195828 * ___parentSection0, String_t* ___name1, int32_t ___saveMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.DefaultSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t3473514151 * DefaultSection_get_Properties_m1402553764 (DefaultSection_t3840532724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
