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

// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t616554813;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"

// System.String System.Net.Configuration.HandlersUtil::ExtractAttributeValue(System.String,System.Xml.XmlNode)
extern "C"  String_t* HandlersUtil_ExtractAttributeValue_m485560609 (Il2CppObject * __this /* static, unused */, String_t* ___attKey0, XmlNode_t616554813 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Configuration.HandlersUtil::ExtractAttributeValue(System.String,System.Xml.XmlNode,System.Boolean)
extern "C"  String_t* HandlersUtil_ExtractAttributeValue_m1160410274 (Il2CppObject * __this /* static, unused */, String_t* ___attKey0, XmlNode_t616554813 * ___node1, bool ___optional2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HandlersUtil::ThrowException(System.String,System.Xml.XmlNode)
extern "C"  void HandlersUtil_ThrowException_m2422905867 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, XmlNode_t616554813 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
