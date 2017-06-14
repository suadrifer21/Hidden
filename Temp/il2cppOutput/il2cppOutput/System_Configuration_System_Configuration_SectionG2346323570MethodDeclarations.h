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

// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t2346323570;
// System.Configuration.ConfigInfo
struct ConfigInfo_t546730838;
// System.String
struct String_t;
// System.Configuration.ConfigInfoCollection
struct ConfigInfoCollection_t3264723080;
// System.Configuration.Configuration
struct Configuration_t3335372970;
// System.Xml.XmlReader
struct XmlReader_t3675626668;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_ConfigInf546730838.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Configuration_System_Configuration_Configur3335372970.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Configuration_System_Configuration_SectionG2346323570.h"

// System.Void System.Configuration.SectionGroupInfo::.ctor()
extern "C"  void SectionGroupInfo__ctor_m2214539325 (SectionGroupInfo_t2346323570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::.cctor()
extern "C"  void SectionGroupInfo__cctor_m673398592 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::AddChild(System.Configuration.ConfigInfo)
extern "C"  void SectionGroupInfo_AddChild_m3251971407 (SectionGroupInfo_t2346323570 * __this, ConfigInfo_t546730838 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::Clear()
extern "C"  void SectionGroupInfo_Clear_m3188268036 (SectionGroupInfo_t2346323570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.SectionGroupInfo::HasChild(System.String)
extern "C"  bool SectionGroupInfo_HasChild_m1202859971 (SectionGroupInfo_t2346323570 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::RemoveChild(System.String)
extern "C"  void SectionGroupInfo_RemoveChild_m2246840815 (SectionGroupInfo_t2346323570 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::get_Sections()
extern "C"  ConfigInfoCollection_t3264723080 * SectionGroupInfo_get_Sections_m2472444668 (SectionGroupInfo_t2346323570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::get_Groups()
extern "C"  ConfigInfoCollection_t3264723080 * SectionGroupInfo_get_Groups_m2080419472 (SectionGroupInfo_t2346323570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
extern "C"  void SectionGroupInfo_ReadConfig_m964124140 (SectionGroupInfo_t2346323570 * __this, Configuration_t3335372970 * ___cfg0, String_t* ___streamName1, XmlReader_t3675626668 * ___reader2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadRemoveSection(System.Xml.XmlReader)
extern "C"  void SectionGroupInfo_ReadRemoveSection_m3200085140 (SectionGroupInfo_t2346323570 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadRootData(System.Xml.XmlReader,System.Configuration.Configuration,System.Boolean)
extern "C"  void SectionGroupInfo_ReadRootData_m1364370771 (SectionGroupInfo_t2346323570 * __this, XmlReader_t3675626668 * ___reader0, Configuration_t3335372970 * ___config1, bool ___overrideAllowed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
extern "C"  void SectionGroupInfo_ReadData_m4130533217 (SectionGroupInfo_t2346323570 * __this, Configuration_t3335372970 * ___config0, XmlReader_t3675626668 * ___reader1, bool ___overrideAllowed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadContent(System.Xml.XmlReader,System.Configuration.Configuration,System.Boolean,System.Boolean)
extern "C"  void SectionGroupInfo_ReadContent_m2298842435 (SectionGroupInfo_t2346323570 * __this, XmlReader_t3675626668 * ___reader0, Configuration_t3335372970 * ___config1, bool ___overrideAllowed2, bool ___root3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfo System.Configuration.SectionGroupInfo::GetConfigInfo(System.Xml.XmlReader,System.Configuration.SectionGroupInfo)
extern "C"  ConfigInfo_t546730838 * SectionGroupInfo_GetConfigInfo_m1968621232 (SectionGroupInfo_t2346323570 * __this, XmlReader_t3675626668 * ___reader0, SectionGroupInfo_t2346323570 * ___current1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::Merge(System.Configuration.ConfigInfo)
extern "C"  void SectionGroupInfo_Merge_m1107900400 (SectionGroupInfo_t2346323570 * __this, ConfigInfo_t546730838 * ___newData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
