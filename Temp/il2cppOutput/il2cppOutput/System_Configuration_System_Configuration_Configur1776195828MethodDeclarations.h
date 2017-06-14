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

// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1776195828;
// System.Configuration.Configuration
struct Configuration_t3335372970;
// System.Configuration.PropertyInformation
struct PropertyInformation_t2089433965;
// System.Configuration.ElementInformation
struct ElementInformation_t3165583784;
// System.String
struct String_t;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t1011762925;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t2048066811;
// System.Object
struct Il2CppObject;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t1911180302;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.XmlWriter
struct XmlWriter_t1048088568;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur3335372970.h"
#include "System_Configuration_System_Configuration_Property2089433965.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Configuration_System_Configuration_Configur2048066811.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlWriter1048088568.h"
#include "System_Configuration_System_Configuration_Configur1776195828.h"
#include "System_Configuration_System_Configuration_Configura700320212.h"

// System.Void System.Configuration.ConfigurationElement::.ctor()
extern "C"  void ConfigurationElement__ctor_m1276017081 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationElement::get_Configuration()
extern "C"  Configuration_t3335372970 * ConfigurationElement_get_Configuration_m2347242418 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Configuration(System.Configuration.Configuration)
extern "C"  void ConfigurationElement_set_Configuration_m1639150663 (ConfigurationElement_t1776195828 * __this, Configuration_t3335372970 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::InitFromProperty(System.Configuration.PropertyInformation)
extern "C"  void ConfigurationElement_InitFromProperty_m3625723156 (ConfigurationElement_t1776195828 * __this, PropertyInformation_t2089433965 * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::get_ElementInformation()
extern "C"  ElementInformation_t3165583784 * ConfigurationElement_get_ElementInformation_m3882602470 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElement::get_RawXml()
extern "C"  String_t* ConfigurationElement_get_RawXml_m2664527628 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_RawXml(System.String)
extern "C"  void ConfigurationElement_set_RawXml_m3850583953 (ConfigurationElement_t1776195828 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Init()
extern "C"  void ConfigurationElement_Init_m1329365593 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllAttributesExcept()
extern "C"  ConfigurationLockCollection_t1011762925 * ConfigurationElement_get_LockAllAttributesExcept_m3610263831 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllElementsExcept()
extern "C"  ConfigurationLockCollection_t1011762925 * ConfigurationElement_get_LockAllElementsExcept_m1554073633 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAttributes()
extern "C"  ConfigurationLockCollection_t1011762925 * ConfigurationElement_get_LockAttributes_m3450186057 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockElements()
extern "C"  ConfigurationLockCollection_t1011762925 * ConfigurationElement_get_LockElements_m2225570247 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_LockItem(System.Boolean)
extern "C"  void ConfigurationElement_set_LockItem_m3758070483 (ConfigurationElement_t1776195828 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::SetPropertyValue(System.Configuration.ConfigurationProperty,System.Object,System.Boolean)
extern "C"  void ConfigurationElement_SetPropertyValue_m1782021972 (ConfigurationElement_t1776195828 * __this, ConfigurationProperty_t2048066811 * ___prop0, Il2CppObject * ___value1, bool ___ignoreLocks2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::GetKeyProperties()
extern "C"  ConfigurationPropertyCollection_t3473514151 * ConfigurationElement_GetKeyProperties_m4219970304 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::GetDefaultCollection()
extern "C"  ConfigurationElementCollection_t1911180302 * ConfigurationElement_GetDefaultCollection_m1796439560 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::get_Item(System.Configuration.ConfigurationProperty)
extern "C"  Il2CppObject * ConfigurationElement_get_Item_m1850092018 (ConfigurationElement_t1776195828 * __this, ConfigurationProperty_t2048066811 * ___property0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Item(System.Configuration.ConfigurationProperty,System.Object)
extern "C"  void ConfigurationElement_set_Item_m2558768429 (ConfigurationElement_t1776195828 * __this, ConfigurationProperty_t2048066811 * ___property0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::get_Item(System.String)
extern "C"  Il2CppObject * ConfigurationElement_get_Item_m3478882412 (ConfigurationElement_t1776195828 * __this, String_t* ___property_name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Item(System.String,System.Object)
extern "C"  void ConfigurationElement_set_Item_m3141894725 (ConfigurationElement_t1776195828 * __this, String_t* ___property_name0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties()
extern "C"  ConfigurationPropertyCollection_t3473514151 * ConfigurationElement_get_Properties_m2163360678 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::Equals(System.Object)
extern "C"  bool ConfigurationElement_Equals_m3484522968 (ConfigurationElement_t1776195828 * __this, Il2CppObject * ___compareTo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElement::GetHashCode()
extern "C"  int32_t ConfigurationElement_GetHashCode_m2198573252 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasValues()
extern "C"  bool ConfigurationElement_HasValues_m1341383433 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasLocalModifications()
extern "C"  bool ConfigurationElement_HasLocalModifications_m169968917 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void ConfigurationElement_DeserializeElement_m2430565615 (ConfigurationElement_t1776195828 * __this, XmlReader_t3675626668 * ___reader0, bool ___serializeCollectionKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C"  bool ConfigurationElement_OnDeserializeUnrecognizedAttribute_m157901910 (ConfigurationElement_t1776195828 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern "C"  bool ConfigurationElement_OnDeserializeUnrecognizedElement_m1053820706 (ConfigurationElement_t1776195828 * __this, String_t* ___element0, XmlReader_t3675626668 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::OnRequiredPropertyNotFound(System.String)
extern "C"  Il2CppObject * ConfigurationElement_OnRequiredPropertyNotFound_m3323765040 (ConfigurationElement_t1776195828 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::PreSerialize(System.Xml.XmlWriter)
extern "C"  void ConfigurationElement_PreSerialize_m1824129726 (ConfigurationElement_t1776195828 * __this, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::PostDeserialize()
extern "C"  void ConfigurationElement_PostDeserialize_m3225465312 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::InitializeDefault()
extern "C"  void ConfigurationElement_InitializeDefault_m2939047706 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::IsModified()
extern "C"  bool ConfigurationElement_IsModified_m748618350 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::SetReadOnly()
extern "C"  void ConfigurationElement_SetReadOnly_m1594739059 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::IsReadOnly()
extern "C"  bool ConfigurationElement_IsReadOnly_m2244525315 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement)
extern "C"  void ConfigurationElement_Reset_m484744193 (ConfigurationElement_t1776195828 * __this, ConfigurationElement_t1776195828 * ___parentElement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::ResetModified()
extern "C"  void ConfigurationElement_ResetModified_m933170487 (ConfigurationElement_t1776195828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern "C"  bool ConfigurationElement_SerializeElement_m4131562944 (ConfigurationElement_t1776195828 * __this, XmlWriter_t1048088568 * ___writer0, bool ___serializeCollectionKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String)
extern "C"  bool ConfigurationElement_SerializeToXmlElement_m3789742405 (ConfigurationElement_t1776195828 * __this, XmlWriter_t1048088568 * ___writer0, String_t* ___elementName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C"  void ConfigurationElement_Unmerge_m2515561191 (ConfigurationElement_t1776195828 * __this, ConfigurationElement_t1776195828 * ___source0, ConfigurationElement_t1776195828 * ___parent1, int32_t ___updateMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasValue(System.String)
extern "C"  bool ConfigurationElement_HasValue_m1390685398 (ConfigurationElement_t1776195828 * __this, String_t* ___propName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::ValidateValue(System.Configuration.ConfigurationProperty,System.String)
extern "C"  void ConfigurationElement_ValidateValue_m1396480566 (ConfigurationElement_t1776195828 * __this, ConfigurationProperty_t2048066811 * ___p0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
