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

// System.Xml.XmlNodeReader
struct XmlNodeReader_t1022603664;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Xml.XmlNodeReaderImpl
struct XmlNodeReaderImpl_t2982135230;
// System.Xml.XmlParserContext
struct XmlParserContext_t2728039553;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2533799901;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"
#include "System_Xml_System_Xml_XmlNodeReaderImpl2982135230.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"
#include "System_Xml_System_Xml_ReadState3138905245.h"
#include "System_Xml_System_Xml_XmlSpace2880376877.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Xml.XmlNodeReader::.ctor(System.Xml.XmlNode)
extern "C"  void XmlNodeReader__ctor_m1586642800 (XmlNodeReader_t1022603664 * __this, XmlNode_t616554813 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::.ctor(System.Xml.XmlNodeReaderImpl,System.Boolean)
extern "C"  void XmlNodeReader__ctor_m3189895030 (XmlNodeReader_t1022603664 * __this, XmlNodeReaderImpl_t2982135230 * ___entityContainer0, bool ___insideAttribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlNodeReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t2728039553 * XmlNodeReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m2547993224 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlNodeReader::get_Current()
extern "C"  XmlReader_t3675626668 * XmlNodeReader_get_Current_m2520713358 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReader::get_AttributeCount()
extern "C"  int32_t XmlNodeReader_get_AttributeCount_m2240283045 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_BaseURI()
extern "C"  String_t* XmlNodeReader_get_BaseURI_m901432962 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_CanResolveEntity()
extern "C"  bool XmlNodeReader_get_CanResolveEntity_m4072803143 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReader::get_Depth()
extern "C"  int32_t XmlNodeReader_get_Depth_m4117731583 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_EOF()
extern "C"  bool XmlNodeReader_get_EOF_m209104168 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_HasAttributes()
extern "C"  bool XmlNodeReader_get_HasAttributes_m2216932181 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_HasValue()
extern "C"  bool XmlNodeReader_get_HasValue_m4238014757 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_IsDefault()
extern "C"  bool XmlNodeReader_get_IsDefault_m2639280269 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_IsEmptyElement()
extern "C"  bool XmlNodeReader_get_IsEmptyElement_m2862210161 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_LocalName()
extern "C"  String_t* XmlNodeReader_get_LocalName_m449703579 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Name()
extern "C"  String_t* XmlNodeReader_get_Name_m162796868 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_NamespaceURI()
extern "C"  String_t* XmlNodeReader_get_NamespaceURI_m3293875576 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNodeReader::get_NameTable()
extern "C"  XmlNameTable_t1345805268 * XmlNodeReader_get_NameTable_m1149150120 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNodeReader::get_NodeType()
extern "C"  int32_t XmlNodeReader_get_NodeType_m1582573794 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Prefix()
extern "C"  String_t* XmlNodeReader_get_Prefix_m4240162345 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlNodeReader::get_ReadState()
extern "C"  int32_t XmlNodeReader_get_ReadState_m563865203 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNodeReader::get_SchemaInfo()
extern "C"  Il2CppObject * XmlNodeReader_get_SchemaInfo_m17560338 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Value()
extern "C"  String_t* XmlNodeReader_get_Value_m2216935738 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_XmlLang()
extern "C"  String_t* XmlNodeReader_get_XmlLang_m3917791998 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNodeReader::get_XmlSpace()
extern "C"  int32_t XmlNodeReader_get_XmlSpace_m1512718315 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::Close()
extern "C"  void XmlNodeReader_Close_m52870487 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::GetAttribute(System.String)
extern "C"  String_t* XmlNodeReader_GetAttribute_m1630409448 (XmlNodeReader_t1022603664 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlNodeReader_GetAttribute_m2912715220 (XmlNodeReader_t1022603664 * __this, String_t* ___name0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::LookupNamespace(System.String)
extern "C"  String_t* XmlNodeReader_LookupNamespace_m1134321591 (XmlNodeReader_t1022603664 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::MoveToAttribute(System.Int32)
extern "C"  void XmlNodeReader_MoveToAttribute_m2293074350 (XmlNodeReader_t1022603664 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToAttribute(System.String)
extern "C"  bool XmlNodeReader_MoveToAttribute_m729147409 (XmlNodeReader_t1022603664 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlNodeReader_MoveToAttribute_m2400098735 (XmlNodeReader_t1022603664 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToElement()
extern "C"  bool XmlNodeReader_MoveToElement_m2742449697 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToFirstAttribute()
extern "C"  bool XmlNodeReader_MoveToFirstAttribute_m3548824025 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToNextAttribute()
extern "C"  bool XmlNodeReader_MoveToNextAttribute_m1336939330 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::Read()
extern "C"  bool XmlNodeReader_Read_m355512967 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::ReadAttributeValue()
extern "C"  bool XmlNodeReader_ReadAttributeValue_m1460879036 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::ResolveEntity()
extern "C"  void XmlNodeReader_ResolveEntity_m4178078124 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::Skip()
extern "C"  void XmlNodeReader_Skip_m1625936024 (XmlNodeReader_t1022603664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
