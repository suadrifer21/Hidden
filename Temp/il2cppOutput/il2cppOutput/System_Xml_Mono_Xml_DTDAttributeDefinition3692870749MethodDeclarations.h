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

// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t3692870749;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t1195946242;
// System.Collections.ArrayList
struct ArrayList_t4252133567;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDatatype1195946242.h"
#include "System_Xml_Mono_Xml_DTDAttributeOccurenceType2819881069.h"

// System.Void Mono.Xml.DTDAttributeDefinition::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAttributeDefinition__ctor_m3306196748 (DTDAttributeDefinition_t3692870749 * __this, DTDObjectModel_t1113953282 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::get_Name()
extern "C"  String_t* DTDAttributeDefinition_get_Name_m650349141 (DTDAttributeDefinition_t3692870749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_Name(System.String)
extern "C"  void DTDAttributeDefinition_set_Name_m881453274 (DTDAttributeDefinition_t3692870749 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype Mono.Xml.DTDAttributeDefinition::get_Datatype()
extern "C"  XmlSchemaDatatype_t1195946242 * DTDAttributeDefinition_get_Datatype_m3088554291 (DTDAttributeDefinition_t3692870749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_Datatype(System.Xml.Schema.XmlSchemaDatatype)
extern "C"  void DTDAttributeDefinition_set_Datatype_m729401134 (DTDAttributeDefinition_t3692870749 * __this, XmlSchemaDatatype_t1195946242 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeOccurenceType Mono.Xml.DTDAttributeDefinition::get_OccurenceType()
extern "C"  int32_t DTDAttributeDefinition_get_OccurenceType_m3278265120 (DTDAttributeDefinition_t3692870749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_OccurenceType(Mono.Xml.DTDAttributeOccurenceType)
extern "C"  void DTDAttributeDefinition_set_OccurenceType_m93111097 (DTDAttributeDefinition_t3692870749 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.DTDAttributeDefinition::get_EnumeratedAttributeDeclaration()
extern "C"  ArrayList_t4252133567 * DTDAttributeDefinition_get_EnumeratedAttributeDeclaration_m2607115935 (DTDAttributeDefinition_t3692870749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.DTDAttributeDefinition::get_EnumeratedNotations()
extern "C"  ArrayList_t4252133567 * DTDAttributeDefinition_get_EnumeratedNotations_m2950036770 (DTDAttributeDefinition_t3692870749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::get_DefaultValue()
extern "C"  String_t* DTDAttributeDefinition_get_DefaultValue_m3896464894 (DTDAttributeDefinition_t3692870749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::get_UnresolvedDefaultValue()
extern "C"  String_t* DTDAttributeDefinition_get_UnresolvedDefaultValue_m2164681549 (DTDAttributeDefinition_t3692870749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_UnresolvedDefaultValue(System.String)
extern "C"  void DTDAttributeDefinition_set_UnresolvedDefaultValue_m659364828 (DTDAttributeDefinition_t3692870749 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::ComputeDefaultValue()
extern "C"  String_t* DTDAttributeDefinition_ComputeDefaultValue_m4049783474 (DTDAttributeDefinition_t3692870749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
