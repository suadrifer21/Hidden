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

// System.Configuration.ConfigurationErrorsException
struct ConfigurationErrorsException_t1362721126;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Exception
struct Exception_t1927440687;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Xml.XmlReader
struct XmlReader_t3675626668;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Exception1927440687.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"

// System.Void System.Configuration.ConfigurationErrorsException::.ctor()
extern "C"  void ConfigurationErrorsException__ctor_m3609325505 (ConfigurationErrorsException_t1362721126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String)
extern "C"  void ConfigurationErrorsException__ctor_m2348714781 (ConfigurationErrorsException_t1362721126 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationErrorsException__ctor_m1926925674 (ConfigurationErrorsException_t1362721126 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception)
extern "C"  void ConfigurationErrorsException__ctor_m3963297863 (ConfigurationErrorsException_t1362721126 * __this, String_t* ___message0, Exception_t1927440687 * ___inner1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlNode)
extern "C"  void ConfigurationErrorsException__ctor_m3089652486 (ConfigurationErrorsException_t1362721126 * __this, String_t* ___message0, XmlNode_t616554813 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlReader)
extern "C"  void ConfigurationErrorsException__ctor_m4265896371 (ConfigurationErrorsException_t1362721126 * __this, String_t* ___message0, XmlReader_t3675626668 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception,System.String,System.Int32)
extern "C"  void ConfigurationErrorsException__ctor_m3506512730 (ConfigurationErrorsException_t1362721126 * __this, String_t* ___message0, Exception_t1927440687 * ___inner1, String_t* ___filename2, int32_t ___line3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_BareMessage()
extern "C"  String_t* ConfigurationErrorsException_get_BareMessage_m403421148 (ConfigurationErrorsException_t1362721126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_Message()
extern "C"  String_t* ConfigurationErrorsException_get_Message_m3733233144 (ConfigurationErrorsException_t1362721126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlReader)
extern "C"  String_t* ConfigurationErrorsException_GetFilename_m2673389627 (Il2CppObject * __this /* static, unused */, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlReader)
extern "C"  int32_t ConfigurationErrorsException_GetLineNumber_m1372608032 (Il2CppObject * __this /* static, unused */, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlNode)
extern "C"  String_t* ConfigurationErrorsException_GetFilename_m2049567258 (Il2CppObject * __this /* static, unused */, XmlNode_t616554813 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlNode)
extern "C"  int32_t ConfigurationErrorsException_GetLineNumber_m3976484637 (Il2CppObject * __this /* static, unused */, XmlNode_t616554813 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationErrorsException_GetObjectData_m770656613 (ConfigurationErrorsException_t1362721126 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
