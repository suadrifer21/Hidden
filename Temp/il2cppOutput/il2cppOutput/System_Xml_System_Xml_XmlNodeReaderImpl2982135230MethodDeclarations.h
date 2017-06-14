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

// System.Xml.XmlNodeReaderImpl
struct XmlNodeReaderImpl_t2982135230;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Xml.XmlParserContext
struct XmlParserContext_t2728039553;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2533799901;
// System.Xml.XmlElement
struct XmlElement_t2877111883;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeReaderImpl2982135230.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"
#include "System_Xml_System_Xml_ReadState3138905245.h"
#include "System_Xml_System_Xml_XmlSpace2880376877.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Xml.XmlNodeReaderImpl::.ctor(System.Xml.XmlNodeReaderImpl)
extern "C"  void XmlNodeReaderImpl__ctor_m1633627529 (XmlNodeReaderImpl_t2982135230 * __this, XmlNodeReaderImpl_t2982135230 * ___entityContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::.ctor(System.Xml.XmlNode)
extern "C"  void XmlNodeReaderImpl__ctor_m1696190894 (XmlNodeReaderImpl_t2982135230 * __this, XmlNode_t616554813 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlNodeReaderImpl::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t2728039553 * XmlNodeReaderImpl_Mono_Xml_IHasXmlParserContext_get_ParserContext_m1102179878 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReaderImpl::get_AttributeCount()
extern "C"  int32_t XmlNodeReaderImpl_get_AttributeCount_m4102812025 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_BaseURI()
extern "C"  String_t* XmlNodeReaderImpl_get_BaseURI_m3737762928 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_CanResolveEntity()
extern "C"  bool XmlNodeReaderImpl_get_CanResolveEntity_m563938875 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReaderImpl::get_Depth()
extern "C"  int32_t XmlNodeReaderImpl_get_Depth_m3495135827 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_EOF()
extern "C"  bool XmlNodeReaderImpl_get_EOF_m983814438 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_HasAttributes()
extern "C"  bool XmlNodeReaderImpl_get_HasAttributes_m4236028001 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_HasValue()
extern "C"  bool XmlNodeReaderImpl_get_HasValue_m98307633 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_IsDefault()
extern "C"  bool XmlNodeReaderImpl_get_IsDefault_m2311853433 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_IsEmptyElement()
extern "C"  bool XmlNodeReaderImpl_get_IsEmptyElement_m16851381 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_LocalName()
extern "C"  String_t* XmlNodeReaderImpl_get_LocalName_m4145022039 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_Name()
extern "C"  String_t* XmlNodeReaderImpl_get_Name_m1648921046 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_NamespaceURI()
extern "C"  String_t* XmlNodeReaderImpl_get_NamespaceURI_m132984726 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNodeReaderImpl::get_NameTable()
extern "C"  XmlNameTable_t1345805268 * XmlNodeReaderImpl_get_NameTable_m3333584122 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNodeReaderImpl::get_NodeType()
extern "C"  int32_t XmlNodeReaderImpl_get_NodeType_m1162616592 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_Prefix()
extern "C"  String_t* XmlNodeReaderImpl_get_Prefix_m3356694165 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlNodeReaderImpl::get_ReadState()
extern "C"  int32_t XmlNodeReaderImpl_get_ReadState_m2625108751 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNodeReaderImpl::get_SchemaInfo()
extern "C"  Il2CppObject * XmlNodeReaderImpl_get_SchemaInfo_m3676510756 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_Value()
extern "C"  String_t* XmlNodeReaderImpl_get_Value_m3735063880 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_XmlLang()
extern "C"  String_t* XmlNodeReaderImpl_get_XmlLang_m2881298512 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNodeReaderImpl::get_XmlSpace()
extern "C"  int32_t XmlNodeReaderImpl_get_XmlSpace_m2797757447 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::Close()
extern "C"  void XmlNodeReaderImpl_Close_m1704926723 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetAttribute(System.String)
extern "C"  String_t* XmlNodeReaderImpl_GetAttribute_m767687494 (XmlNodeReaderImpl_t2982135230 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlNodeReaderImpl_GetAttribute_m2996472422 (XmlNodeReaderImpl_t2982135230 * __this, String_t* ___name0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetXmlDeclarationAttribute(System.String)
extern "C"  String_t* XmlNodeReaderImpl_GetXmlDeclarationAttribute_m4060122393 (XmlNodeReaderImpl_t2982135230 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetDocumentTypeAttribute(System.String)
extern "C"  String_t* XmlNodeReaderImpl_GetDocumentTypeAttribute_m1274435763 (XmlNodeReaderImpl_t2982135230 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlNodeReaderImpl::GetCurrentElement()
extern "C"  XmlElement_t2877111883 * XmlNodeReaderImpl_GetCurrentElement_m3444374810 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::LookupNamespace(System.String)
extern "C"  String_t* XmlNodeReaderImpl_LookupNamespace_m3399983811 (XmlNodeReaderImpl_t2982135230 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::MoveToAttribute(System.Int32)
extern "C"  void XmlNodeReaderImpl_MoveToAttribute_m578201676 (XmlNodeReaderImpl_t2982135230 * __this, int32_t ___attributeIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToAttribute(System.String)
extern "C"  bool XmlNodeReaderImpl_MoveToAttribute_m2912332701 (XmlNodeReaderImpl_t2982135230 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlNodeReaderImpl_MoveToAttribute_m2110801683 (XmlNodeReaderImpl_t2982135230 * __this, String_t* ___name0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToElement()
extern "C"  bool XmlNodeReaderImpl_MoveToElement_m3066191493 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToFirstAttribute()
extern "C"  bool XmlNodeReaderImpl_MoveToFirstAttribute_m4278258205 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToNextAttribute()
extern "C"  bool XmlNodeReaderImpl_MoveToNextAttribute_m3028215860 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::Read()
extern "C"  bool XmlNodeReaderImpl_Read_m1834556699 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::ReadContent()
extern "C"  bool XmlNodeReaderImpl_ReadContent_m395958090 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::ReadAttributeValue()
extern "C"  bool XmlNodeReaderImpl_ReadAttributeValue_m1946571370 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::ResolveEntity()
extern "C"  void XmlNodeReaderImpl_ResolveEntity_m2591174910 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::Skip()
extern "C"  void XmlNodeReaderImpl_Skip_m392030598 (XmlNodeReaderImpl_t2982135230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
