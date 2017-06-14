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

// System.Configuration.ConfigInfo
struct ConfigInfo_t546730838;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t3675626668;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"

// System.Void System.Configuration.ConfigInfo::.ctor()
extern "C"  void ConfigInfo__ctor_m2533184409 (ConfigInfo_t546730838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigInfo::CreateInstance()
extern "C"  Il2CppObject * ConfigInfo_CreateInstance_m615435773 (ConfigInfo_t546730838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfo::set_StreamName(System.String)
extern "C"  void ConfigInfo_set_StreamName_m1734466909 (ConfigInfo_t546730838 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfo::ThrowException(System.String,System.Xml.XmlReader)
extern "C"  void ConfigInfo_ThrowException_m3313572946 (ConfigInfo_t546730838 * __this, String_t* ___text0, XmlReader_t3675626668 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
