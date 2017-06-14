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

// UnityEngine.Advertisements.ErrorEventArgs
struct ErrorEventArgs_t1391478423;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Advertisements.ErrorEventArgs::.ctor(System.Int64,System.String)
extern "C"  void ErrorEventArgs__ctor_m3572489426 (ErrorEventArgs_t1391478423 * __this, int64_t ___error0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Advertisements.ErrorEventArgs::get_error()
extern "C"  int64_t ErrorEventArgs_get_error_m3976596322 (ErrorEventArgs_t1391478423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_error(System.Int64)
extern "C"  void ErrorEventArgs_set_error_m2279754221 (ErrorEventArgs_t1391478423 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.ErrorEventArgs::get_message()
extern "C"  String_t* ErrorEventArgs_get_message_m1471974177 (ErrorEventArgs_t1391478423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_message(System.String)
extern "C"  void ErrorEventArgs_set_message_m517507732 (ErrorEventArgs_t1391478423 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
