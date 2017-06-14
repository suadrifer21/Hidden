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

// GooglePlayGames.OurUtils.Logger
struct Logger_t2779394790;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GooglePlayGames.OurUtils.Logger::.ctor()
extern "C"  void Logger__ctor_m2392342328 (Logger_t2779394790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.OurUtils.Logger::get_DebugLogEnabled()
extern "C"  bool Logger_get_DebugLogEnabled_m119169341 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::set_DebugLogEnabled(System.Boolean)
extern "C"  void Logger_set_DebugLogEnabled_m169636066 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.OurUtils.Logger::get_WarningLogEnabled()
extern "C"  bool Logger_get_WarningLogEnabled_m2771615490 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::set_WarningLogEnabled(System.Boolean)
extern "C"  void Logger_set_WarningLogEnabled_m2872205729 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
extern "C"  void Logger_d_m3932493850 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
extern "C"  void Logger_w_m2973279877 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::e(System.String)
extern "C"  void Logger_e_m4001686111 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.OurUtils.Logger::describe(System.Byte[])
extern "C"  String_t* Logger_describe_m2941970763 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.OurUtils.Logger::ToLogMessage(System.String,System.String,System.String)
extern "C"  String_t* Logger_ToLogMessage_m3898719527 (Il2CppObject * __this /* static, unused */, String_t* ___prefix0, String_t* ___logType1, String_t* ___msg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.Logger::.cctor()
extern "C"  void Logger__cctor_m1003764211 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
