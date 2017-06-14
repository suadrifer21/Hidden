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

// System.TermInfoDriver
struct TermInfoDriver_t3839442152;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_ConsoleKeyInfo3124575640.h"
#include "mscorlib_System_TermInfoStrings1425267120.h"

// System.Void System.TermInfoDriver::.ctor(System.String)
extern "C"  void TermInfoDriver__ctor_m2458806735 (TermInfoDriver_t3839442152 * __this, String_t* ___term0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::.cctor()
extern "C"  void TermInfoDriver__cctor_m1707588596 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoDriver::SearchTerminfo(System.String)
extern "C"  String_t* TermInfoDriver_SearchTerminfo_m794815730 (Il2CppObject * __this /* static, unused */, String_t* ___term0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::WriteConsole(System.String)
extern "C"  void TermInfoDriver_WriteConsole_m2661336081 (TermInfoDriver_t3839442152 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TermInfoDriver::get_Initialized()
extern "C"  bool TermInfoDriver_get_Initialized_m4022276636 (TermInfoDriver_t3839442152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::Init()
extern "C"  void TermInfoDriver_Init_m520145739 (TermInfoDriver_t3839442152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoDriver::MangleParameters(System.String)
extern "C"  String_t* TermInfoDriver_MangleParameters_m2638919926 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::IncrementX()
extern "C"  void TermInfoDriver_IncrementX_m675655290 (TermInfoDriver_t3839442152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::WriteSpecialKey(System.ConsoleKeyInfo)
extern "C"  void TermInfoDriver_WriteSpecialKey_m2438470363 (TermInfoDriver_t3839442152 * __this, ConsoleKeyInfo_t3124575640  ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::WriteSpecialKey(System.Char)
extern "C"  void TermInfoDriver_WriteSpecialKey_m2200775021 (TermInfoDriver_t3839442152 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TermInfoDriver::IsSpecialKey(System.ConsoleKeyInfo)
extern "C"  bool TermInfoDriver_IsSpecialKey_m3036269876 (TermInfoDriver_t3839442152 * __this, ConsoleKeyInfo_t3124575640  ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TermInfoDriver::IsSpecialKey(System.Char)
extern "C"  bool TermInfoDriver_IsSpecialKey_m3433375452 (TermInfoDriver_t3839442152 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::GetCursorPosition()
extern "C"  void TermInfoDriver_GetCursorPosition_m1274681736 (TermInfoDriver_t3839442152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::CheckWindowDimensions()
extern "C"  void TermInfoDriver_CheckWindowDimensions_m866761480 (TermInfoDriver_t3839442152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoDriver::get_WindowHeight()
extern "C"  int32_t TermInfoDriver_get_WindowHeight_m1428404161 (TermInfoDriver_t3839442152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoDriver::get_WindowWidth()
extern "C"  int32_t TermInfoDriver_get_WindowWidth_m2184230706 (TermInfoDriver_t3839442152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::AddToBuffer(System.Int32)
extern "C"  void TermInfoDriver_AddToBuffer_m3582367680 (TermInfoDriver_t3839442152 * __this, int32_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::AdjustBuffer()
extern "C"  void TermInfoDriver_AdjustBuffer_m253627780 (TermInfoDriver_t3839442152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.TermInfoDriver::CreateKeyInfoFromInt(System.Int32,System.Boolean)
extern "C"  ConsoleKeyInfo_t3124575640  TermInfoDriver_CreateKeyInfoFromInt_m3845798733 (TermInfoDriver_t3839442152 * __this, int32_t ___n0, bool ___alt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.TermInfoDriver::GetKeyFromBuffer(System.Boolean)
extern "C"  Il2CppObject * TermInfoDriver_GetKeyFromBuffer_m3811385856 (TermInfoDriver_t3839442152 * __this, bool ___cooked0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.TermInfoDriver::ReadKeyInternal(System.Boolean&)
extern "C"  ConsoleKeyInfo_t3124575640  TermInfoDriver_ReadKeyInternal_m3966448064 (TermInfoDriver_t3839442152 * __this, bool* ___fresh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TermInfoDriver::InputPending()
extern "C"  bool TermInfoDriver_InputPending_m3214269258 (TermInfoDriver_t3839442152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::QueueEcho(System.Char)
extern "C"  void TermInfoDriver_QueueEcho_m288587712 (TermInfoDriver_t3839442152 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::Echo(System.ConsoleKeyInfo)
extern "C"  void TermInfoDriver_Echo_m468123377 (TermInfoDriver_t3839442152 * __this, ConsoleKeyInfo_t3124575640  ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::EchoFlush()
extern "C"  void TermInfoDriver_EchoFlush_m2293860136 (TermInfoDriver_t3839442152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoDriver::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t TermInfoDriver_Read_m3479292752 (TermInfoDriver_t3839442152 * __this, CharU5BU5D_t1328083999* ___dest0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.TermInfoDriver::ReadKey(System.Boolean)
extern "C"  ConsoleKeyInfo_t3124575640  TermInfoDriver_ReadKey_m4056805337 (TermInfoDriver_t3839442152 * __this, bool ___intercept0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoDriver::ReadLine()
extern "C"  String_t* TermInfoDriver_ReadLine_m2658952788 (TermInfoDriver_t3839442152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::SetCursorPosition(System.Int32,System.Int32)
extern "C"  void TermInfoDriver_SetCursorPosition_m1204206400 (TermInfoDriver_t3839442152 * __this, int32_t ___left0, int32_t ___top1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::CreateKeyMap()
extern "C"  void TermInfoDriver_CreateKeyMap_m1198575086 (TermInfoDriver_t3839442152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::InitKeys()
extern "C"  void TermInfoDriver_InitKeys_m3747157975 (TermInfoDriver_t3839442152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::AddStringMapping(System.TermInfoStrings)
extern "C"  void TermInfoDriver_AddStringMapping_m1203574700 (TermInfoDriver_t3839442152 * __this, int32_t ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
