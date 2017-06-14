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

// System.Configuration.ElementMap
struct ElementMap_t997038224;
// System.Type
struct Type_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Configuration.ElementMap::.ctor(System.Type)
extern "C"  void ElementMap__ctor_m2348370310 (ElementMap_t997038224 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ElementMap::.cctor()
extern "C"  void ElementMap__cctor_m3070084744 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ElementMap System.Configuration.ElementMap::GetMap(System.Type)
extern "C"  ElementMap_t997038224 * ElementMap_GetMap_m1137301092 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ElementMap::get_Properties()
extern "C"  ConfigurationPropertyCollection_t3473514151 * ElementMap_get_Properties_m169107978 (ElementMap_t997038224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
