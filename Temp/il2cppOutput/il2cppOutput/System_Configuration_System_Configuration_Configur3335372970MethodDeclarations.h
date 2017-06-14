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

// System.Configuration.Configuration
struct Configuration_t3335372970;
// System.String
struct String_t;
// System.Configuration.InternalConfigurationSystem
struct InternalConfigurationSystem_t2108740756;
// System.Configuration.Internal.IConfigSystem
struct IConfigSystem_t2950865222;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t3115158152;
// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t1903842989;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t2230982736;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t575145286;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t4261113299;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t2600766927;
// System.Configuration.SectionInfo
struct SectionInfo_t1739019515;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t2346323570;
// System.Xml.XmlReader
struct XmlReader_t3675626668;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur3335372970.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Configuration_System_Configuration_Internal2108740756.h"
#include "System_Configuration_System_Configuration_SectionI1739019515.h"
#include "System_Configuration_System_Configuration_SectionG2346323570.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"

// System.Void System.Configuration.Configuration::.ctor(System.Configuration.Configuration,System.String)
extern "C"  void Configuration__ctor_m3545852494 (Configuration_t3335372970 * __this, Configuration_t3335372970 * ___parent0, String_t* ___locationSubPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::.ctor(System.Configuration.InternalConfigurationSystem,System.String)
extern "C"  void Configuration__ctor_m88421328 (Configuration_t3335372970 * __this, InternalConfigurationSystem_t2108740756 * ___system0, String_t* ___locationSubPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::FindLocationConfiguration(System.String,System.Configuration.Configuration)
extern "C"  Configuration_t3335372970 * Configuration_FindLocationConfiguration_m4081437406 (Configuration_t3335372970 * __this, String_t* ___relativePath0, Configuration_t3335372970 * ___defaultConfiguration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::Init(System.Configuration.Internal.IConfigSystem,System.String,System.Configuration.Configuration)
extern "C"  void Configuration_Init_m2991025886 (Configuration_t3335372970 * __this, Il2CppObject * ___system0, String_t* ___configPath1, Configuration_t3335372970 * ___parent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::get_Parent()
extern "C"  Configuration_t3335372970 * Configuration_get_Parent_m335637978 (Configuration_t3335372970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::set_Parent(System.Configuration.Configuration)
extern "C"  void Configuration_set_Parent_m3106974805 (Configuration_t3335372970 * __this, Configuration_t3335372970 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::GetParentWithFile()
extern "C"  Configuration_t3335372970 * Configuration_GetParentWithFile_m1651703053 (Configuration_t3335372970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigHost System.Configuration.Configuration::get_ConfigHost()
extern "C"  Il2CppObject * Configuration_get_ConfigHost_m854336265 (Configuration_t3335372970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_LocationConfigPath()
extern "C"  String_t* Configuration_get_LocationConfigPath_m609030371 (Configuration_t3335372970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_ConfigPath()
extern "C"  String_t* Configuration_get_ConfigPath_m937107392 (Configuration_t3335372970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_FilePath()
extern "C"  String_t* Configuration_get_FilePath_m3184045596 (Configuration_t3335372970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::get_HasFile()
extern "C"  bool Configuration_get_HasFile_m1167170352 (Configuration_t3335372970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLocationCollection System.Configuration.Configuration::get_Locations()
extern "C"  ConfigurationLocationCollection_t1903842989 * Configuration_get_Locations_m2394414303 (Configuration_t3335372970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::get_RootSectionGroup()
extern "C"  ConfigurationSectionGroup_t2230982736 * Configuration_get_RootSectionGroup_m1643677634 (Configuration_t3335372970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.Configuration::get_SectionGroups()
extern "C"  ConfigurationSectionGroupCollection_t575145286 * Configuration_get_SectionGroups_m2782934403 (Configuration_t3335372970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.Configuration::get_Sections()
extern "C"  ConfigurationSectionCollection_t4261113299 * Configuration_get_Sections_m3724328875 (Configuration_t3335372970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSection(System.String)
extern "C"  ConfigurationSection_t2600766927 * Configuration_GetSection_m3056810807 (Configuration_t3335372970 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSectionInstance(System.Configuration.SectionInfo,System.Boolean)
extern "C"  ConfigurationSection_t2600766927 * Configuration_GetSectionInstance_m3769455073 (Configuration_t3335372970 * __this, SectionInfo_t1739019515 * ___config0, bool ___createDefaultInstance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::GetSectionGroupInstance(System.Configuration.SectionGroupInfo)
extern "C"  ConfigurationSectionGroup_t2230982736 * Configuration_GetSectionGroupInstance_m2028928705 (Configuration_t3335372970 * __this, SectionGroupInfo_t2346323570 * ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::SetSectionXml(System.Configuration.SectionInfo,System.String)
extern "C"  void Configuration_SetSectionXml_m2783526347 (Configuration_t3335372970 * __this, SectionInfo_t1739019515 * ___config0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::GetSectionXml(System.Configuration.SectionInfo)
extern "C"  String_t* Configuration_GetSectionXml_m1792995434 (Configuration_t3335372970 * __this, SectionInfo_t1739019515 * ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::Load()
extern "C"  bool Configuration_Load_m851220319 (Configuration_t3335372970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadConfigFile(System.Xml.XmlReader,System.String)
extern "C"  void Configuration_ReadConfigFile_m1878607525 (Configuration_t3335372970 * __this, XmlReader_t3675626668 * ___reader0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadData(System.Xml.XmlReader,System.Boolean)
extern "C"  void Configuration_ReadData_m342895002 (Configuration_t3335372970 * __this, XmlReader_t3675626668 * ___reader0, bool ___allowOverride1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ThrowException(System.String,System.Xml.XmlReader)
extern "C"  void Configuration_ThrowException_m3079645534 (Configuration_t3335372970 * __this, String_t* ___text0, XmlReader_t3675626668 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
