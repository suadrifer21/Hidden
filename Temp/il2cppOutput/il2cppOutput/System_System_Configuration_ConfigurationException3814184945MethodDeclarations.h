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

// System.Configuration.ConfigurationException
struct ConfigurationException_t3814184945;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Exception
struct Exception_t1927440687;
// System.Xml.XmlNode
struct XmlNode_t616554813;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Exception1927440687.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"

// System.Void System.Configuration.ConfigurationException::.ctor()
extern "C"  void ConfigurationException__ctor_m1046987330 (ConfigurationException_t3814184945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String)
extern "C"  void ConfigurationException__ctor_m1950737452 (ConfigurationException_t3814184945 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationException__ctor_m3177755519 (ConfigurationException_t3814184945 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Exception)
extern "C"  void ConfigurationException__ctor_m3617147564 (ConfigurationException_t3814184945 * __this, String_t* ___message0, Exception_t1927440687 * ___inner1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Xml.XmlNode)
extern "C"  void ConfigurationException__ctor_m2353791559 (ConfigurationException_t3814184945 * __this, String_t* ___message0, XmlNode_t616554813 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Exception,System.Xml.XmlNode)
extern "C"  void ConfigurationException__ctor_m3525068459 (ConfigurationException_t3814184945 * __this, String_t* ___message0, Exception_t1927440687 * ___inner1, XmlNode_t616554813 * ___node2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.String,System.Int32)
extern "C"  void ConfigurationException__ctor_m2633858641 (ConfigurationException_t3814184945 * __this, String_t* ___message0, String_t* ___filename1, int32_t ___line2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationException::get_BareMessage()
extern "C"  String_t* ConfigurationException_get_BareMessage_m74709031 (ConfigurationException_t3814184945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationException::get_Message()
extern "C"  String_t* ConfigurationException_get_Message_m4079252099 (ConfigurationException_t3814184945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationException::GetXmlNodeFilename(System.Xml.XmlNode)
extern "C"  String_t* ConfigurationException_GetXmlNodeFilename_m3187209172 (Il2CppObject * __this /* static, unused */, XmlNode_t616554813 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationException::GetXmlNodeLineNumber(System.Xml.XmlNode)
extern "C"  int32_t ConfigurationException_GetXmlNodeLineNumber_m3219878065 (Il2CppObject * __this /* static, unused */, XmlNode_t616554813 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationException_GetObjectData_m832314182 (ConfigurationException_t3814184945 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
