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

// System.Configuration.IgnoreSection
struct IgnoreSection_t681509237;
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

// System.Void System.Configuration.IgnoreSection::.ctor()
extern "C"  void IgnoreSection__ctor_m4055714512 (IgnoreSection_t681509237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::.cctor()
extern "C"  void IgnoreSection__cctor_m1005553135 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.IgnoreSection::IsModified()
extern "C"  bool IgnoreSection_IsModified_m3722026291 (IgnoreSection_t681509237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::DeserializeSection(System.Xml.XmlReader)
extern "C"  void IgnoreSection_DeserializeSection_m2922463074 (IgnoreSection_t681509237 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::Reset(System.Configuration.ConfigurationElement)
extern "C"  void IgnoreSection_Reset_m2294022138 (IgnoreSection_t681509237 * __this, ConfigurationElement_t1776195828 * ___parentElement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::ResetModified()
extern "C"  void IgnoreSection_ResetModified_m2018290788 (IgnoreSection_t681509237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.IgnoreSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C"  String_t* IgnoreSection_SerializeSection_m1724288736 (IgnoreSection_t681509237 * __this, ConfigurationElement_t1776195828 * ___parentElement0, String_t* ___name1, int32_t ___saveMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.IgnoreSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t3473514151 * IgnoreSection_get_Properties_m3548508015 (IgnoreSection_t681509237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
