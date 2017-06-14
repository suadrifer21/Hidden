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

// System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler
struct ElementHandler_t1009623312;
// System.Object
struct Il2CppObject;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ElementHandler__ctor_m3192990496 (ElementHandler_t1009623312 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::Invoke(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void ElementHandler_Invoke_m1885447928 (ElementHandler_t1009623312 * __this, Il2CppObject * ___d0, XmlNode_t616554813 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::BeginInvoke(System.Collections.IDictionary,System.Xml.XmlNode,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ElementHandler_BeginInvoke_m3057129389 (ElementHandler_t1009623312 * __this, Il2CppObject * ___d0, XmlNode_t616554813 * ___node1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ElementHandler_EndInvoke_m2941971906 (ElementHandler_t1009623312 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
