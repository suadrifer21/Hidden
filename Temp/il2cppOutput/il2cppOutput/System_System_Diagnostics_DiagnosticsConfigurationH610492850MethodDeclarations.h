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

// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t610492850;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.String
struct String_t;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t2289511703;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t3359885287;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "System_System_Diagnostics_TraceListenerCollection2289511703.h"
#include "System_Xml_System_Xml_XmlAttributeCollection3359885287.h"

// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
extern "C"  void DiagnosticsConfigurationHandler__ctor_m1717705207 (DiagnosticsConfigurationHandler_t610492850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
extern "C"  Il2CppObject * DiagnosticsConfigurationHandler_Create_m1154409743 (DiagnosticsConfigurationHandler_t610492850 * __this, Il2CppObject * ___parent0, Il2CppObject * ___configContext1, XmlNode_t616554813 * ___section2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddAssertNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddAssertNode_m770808348 (DiagnosticsConfigurationHandler_t610492850 * __this, Il2CppObject * ___d0, XmlNode_t616554813 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddSwitchesNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddSwitchesNode_m3026393262 (DiagnosticsConfigurationHandler_t610492850 * __this, Il2CppObject * ___d0, XmlNode_t616554813 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::GetSwitchValue(System.String,System.String)
extern "C"  Il2CppObject * DiagnosticsConfigurationHandler_GetSwitchValue_m4194295945 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceNode_m3561280915 (DiagnosticsConfigurationHandler_t610492850 * __this, Il2CppObject * ___d0, XmlNode_t616554813 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceAttributes(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceAttributes_m1791470048 (DiagnosticsConfigurationHandler_t610492850 * __this, Il2CppObject * ___d0, XmlNode_t616554813 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.DiagnosticsConfigurationHandler::GetSharedListeners(System.Collections.IDictionary)
extern "C"  TraceListenerCollection_t2289511703 * DiagnosticsConfigurationHandler_GetSharedListeners_m1921093363 (DiagnosticsConfigurationHandler_t610492850 * __this, Il2CppObject * ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddSourcesNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddSourcesNode_m3218521178 (DiagnosticsConfigurationHandler_t610492850 * __this, Il2CppObject * ___d0, XmlNode_t616554813 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceSource(System.Collections.IDictionary,System.Collections.Hashtable,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceSource_m602564364 (DiagnosticsConfigurationHandler_t610492850 * __this, Il2CppObject * ___d0, Hashtable_t909839986 * ___sources1, XmlNode_t616554813 * ___node2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceListeners(System.Collections.IDictionary,System.Xml.XmlNode,System.Diagnostics.TraceListenerCollection)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceListeners_m680498418 (DiagnosticsConfigurationHandler_t610492850 * __this, Il2CppObject * ___d0, XmlNode_t616554813 * ___listenersNode1, TraceListenerCollection_t2289511703 * ___listeners2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceListener(System.Collections.IDictionary,System.Xml.XmlNode,System.Xml.XmlAttributeCollection,System.Diagnostics.TraceListenerCollection)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceListener_m2223521632 (DiagnosticsConfigurationHandler_t610492850 * __this, Il2CppObject * ___d0, XmlNode_t616554813 * ___child1, XmlAttributeCollection_t3359885287 * ___attributes2, TraceListenerCollection_t2289511703 * ___listeners3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::RemoveTraceListener(System.String)
extern "C"  void DiagnosticsConfigurationHandler_RemoveTraceListener_m4111049348 (DiagnosticsConfigurationHandler_t610492850 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.DiagnosticsConfigurationHandler::GetAttribute(System.Xml.XmlAttributeCollection,System.String,System.Boolean,System.Xml.XmlNode)
extern "C"  String_t* DiagnosticsConfigurationHandler_GetAttribute_m416559747 (DiagnosticsConfigurationHandler_t610492850 * __this, XmlAttributeCollection_t3359885287 * ___attrs0, String_t* ___attr1, bool ___required2, XmlNode_t616554813 * ___node3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ValidateAttribute(System.String,System.String,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ValidateAttribute_m267344658 (DiagnosticsConfigurationHandler_t610492850 * __this, String_t* ___attribute0, String_t* ___value1, XmlNode_t616554813 * ___node2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ValidateInvalidAttributes(System.Xml.XmlAttributeCollection,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ValidateInvalidAttributes_m2590608077 (DiagnosticsConfigurationHandler_t610492850 * __this, XmlAttributeCollection_t3359885287 * ___c0, XmlNode_t616554813 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowMissingAttribute(System.String,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ThrowMissingAttribute_m2009841832 (DiagnosticsConfigurationHandler_t610492850 * __this, String_t* ___attribute0, XmlNode_t616554813 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedNode(System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ThrowUnrecognizedNode_m2787511651 (DiagnosticsConfigurationHandler_t610492850 * __this, XmlNode_t616554813 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedElement(System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ThrowUnrecognizedElement_m1971340665 (DiagnosticsConfigurationHandler_t610492850 * __this, XmlNode_t616554813 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedAttribute(System.String,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ThrowUnrecognizedAttribute_m1045033865 (DiagnosticsConfigurationHandler_t610492850 * __this, String_t* ___attribute0, XmlNode_t616554813 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
