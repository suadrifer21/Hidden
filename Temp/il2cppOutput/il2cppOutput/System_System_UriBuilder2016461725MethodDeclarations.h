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

// System.UriBuilder
struct UriBuilder_t2016461725;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.UriBuilder::.ctor(System.Uri)
extern "C"  void UriBuilder__ctor_m2466436215 (UriBuilder_t2016461725 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::set_Host(System.String)
extern "C"  void UriBuilder_set_Host_m1829532633 (UriBuilder_t2016461725 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.UriBuilder::get_Uri()
extern "C"  Uri_t19570940 * UriBuilder_get_Uri_m1365242951 (UriBuilder_t2016461725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriBuilder::Equals(System.Object)
extern "C"  bool UriBuilder_Equals_m1682960663 (UriBuilder_t2016461725 * __this, Il2CppObject * ___rparam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriBuilder::GetHashCode()
extern "C"  int32_t UriBuilder_GetHashCode_m2846873589 (UriBuilder_t2016461725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriBuilder::ToString()
extern "C"  String_t* UriBuilder_ToString_m2442590737 (UriBuilder_t2016461725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
