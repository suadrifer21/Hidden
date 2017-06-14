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

// System.Net.Configuration.RequestCachingSection
struct RequestCachingSection_t1642835391;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;
// System.Xml.XmlReader
struct XmlReader_t3675626668;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"

// System.Void System.Net.Configuration.RequestCachingSection::.cctor()
extern "C"  void RequestCachingSection__cctor_m1125821374 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.RequestCachingSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t3473514151 * RequestCachingSection_get_Properties_m850314794 (RequestCachingSection_t1642835391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::PostDeserialize()
extern "C"  void RequestCachingSection_PostDeserialize_m2488452934 (RequestCachingSection_t1642835391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void RequestCachingSection_DeserializeElement_m3395805077 (RequestCachingSection_t1642835391 * __this, XmlReader_t3675626668 * ___reader0, bool ___serializeCollectionKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
