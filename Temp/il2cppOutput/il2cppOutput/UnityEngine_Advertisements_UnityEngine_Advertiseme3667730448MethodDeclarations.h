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

// UnityEngine.Advertisements.Editor.Configuration
struct Configuration_t3667730448;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1445386684;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Advertisements.Editor.Configuration::.ctor(System.String)
extern "C"  void Configuration__ctor_m946901306 (Configuration_t3667730448 * __this, String_t* ___configurationResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Editor.Configuration::get_enabled()
extern "C"  bool Configuration_get_enabled_m3452758062 (Configuration_t3667730448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_enabled(System.Boolean)
extern "C"  void Configuration_set_enabled_m2030837325 (Configuration_t3667730448 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.Editor.Configuration::get_defaultPlacement()
extern "C"  String_t* Configuration_get_defaultPlacement_m3519144060 (Configuration_t3667730448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_defaultPlacement(System.String)
extern "C"  void Configuration_set_defaultPlacement_m2091432295 (Configuration_t3667730448 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> UnityEngine.Advertisements.Editor.Configuration::get_placements()
extern "C"  Dictionary_2_t1445386684 * Configuration_get_placements_m2848456616 (Configuration_t3667730448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_placements(System.Collections.Generic.Dictionary`2<System.String,System.Boolean>)
extern "C"  void Configuration_set_placements_m4026221219 (Configuration_t3667730448 * __this, Dictionary_2_t1445386684 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
