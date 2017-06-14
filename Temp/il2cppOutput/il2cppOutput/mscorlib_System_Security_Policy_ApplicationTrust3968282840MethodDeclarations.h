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

// System.Security.Policy.ApplicationTrust
struct ApplicationTrust_t3968282840;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t1594053347;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"

// System.Void System.Security.Policy.ApplicationTrust::.ctor()
extern "C"  void ApplicationTrust__ctor_m1252878691 (ApplicationTrust_t3968282840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::get_DefaultGrantSet()
extern "C"  PolicyStatement_t1594053347 * ApplicationTrust_get_DefaultGrantSet_m1473349484 (ApplicationTrust_t3968282840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ApplicationTrust::FromXml(System.Security.SecurityElement)
extern "C"  void ApplicationTrust_FromXml_m1699647667 (ApplicationTrust_t3968282840 * __this, SecurityElement_t2325568386 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ApplicationTrust::ToXml()
extern "C"  SecurityElement_t2325568386 * ApplicationTrust_ToXml_m3731725145 (ApplicationTrust_t3968282840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::GetDefaultGrantSet()
extern "C"  PolicyStatement_t1594053347 * ApplicationTrust_GetDefaultGrantSet_m3685802737 (ApplicationTrust_t3968282840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
