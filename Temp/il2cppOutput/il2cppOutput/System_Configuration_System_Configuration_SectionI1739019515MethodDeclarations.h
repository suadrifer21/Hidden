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

// System.Configuration.SectionInfo
struct SectionInfo_t1739019515;
// System.Object
struct Il2CppObject;
// System.Configuration.Configuration
struct Configuration_t3335372970;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Configuration.ConfigInfo
struct ConfigInfo_t546730838;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur3335372970.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Configuration_System_Configuration_ConfigInf546730838.h"

// System.Void System.Configuration.SectionInfo::.ctor()
extern "C"  void SectionInfo__ctor_m3237924430 (SectionInfo_t1739019515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.SectionInfo::CreateInstance()
extern "C"  Il2CppObject * SectionInfo_CreateInstance_m3857848628 (SectionInfo_t1739019515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
extern "C"  void SectionInfo_ReadConfig_m1508625577 (SectionInfo_t1739019515 * __this, Configuration_t3335372970 * ___cfg0, String_t* ___streamName1, XmlReader_t3675626668 * ___reader2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
extern "C"  void SectionInfo_ReadData_m2814313648 (SectionInfo_t1739019515 * __this, Configuration_t3335372970 * ___config0, XmlReader_t3675626668 * ___reader1, bool ___overrideAllowed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::Merge(System.Configuration.ConfigInfo)
extern "C"  void SectionInfo_Merge_m2513541987 (SectionInfo_t1739019515 * __this, ConfigInfo_t546730838 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
