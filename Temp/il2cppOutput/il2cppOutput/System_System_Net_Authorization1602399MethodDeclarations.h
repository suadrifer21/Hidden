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

// System.Net.Authorization
struct Authorization_t1602399;
// System.String
struct String_t;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t3093891015;

#include "codegen/il2cpp-codegen.h"

// System.String System.Net.Authorization::get_Message()
extern "C"  String_t* Authorization_get_Message_m2175547724 (Authorization_t1602399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Authorization::get_Complete()
extern "C"  bool Authorization_get_Complete_m1402288019 (Authorization_t1602399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IAuthenticationModule System.Net.Authorization::get_Module()
extern "C"  Il2CppObject * Authorization_get_Module_m2331757864 (Authorization_t1602399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::set_Module(System.Net.IAuthenticationModule)
extern "C"  void Authorization_set_Module_m1551993521 (Authorization_t1602399 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
