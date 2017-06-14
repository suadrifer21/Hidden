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

// System.WindowsConsoleDriver
struct WindowsConsoleDriver_t276624544;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ConsoleKeyInfo3124575640.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Handles2032702205.h"
#include "mscorlib_System_ConsoleScreenBufferInfo211837289.h"
#include "mscorlib_System_InputRecord3971050487.h"

// System.Void System.WindowsConsoleDriver::.ctor()
extern "C"  void WindowsConsoleDriver__ctor_m833672153 (WindowsConsoleDriver_t276624544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.WindowsConsoleDriver::ReadKey(System.Boolean)
extern "C"  ConsoleKeyInfo_t3124575640  WindowsConsoleDriver_ReadKey_m2722483337 (WindowsConsoleDriver_t276624544 * __this, bool ___intercept0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
extern "C"  IntPtr_t WindowsConsoleDriver_GetStdHandle_m2228793753 (Il2CppObject * __this /* static, unused */, int32_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
extern "C"  bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m1086313578 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, ConsoleScreenBufferInfo_t211837289 * ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
extern "C"  bool WindowsConsoleDriver_ReadConsoleInput_m3748139698 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, InputRecord_t3971050487 * ___record1, int32_t ___length2, int32_t* ___nread3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
