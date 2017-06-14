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

// System.Text.RegularExpressions.CILCompiler
struct CILCompiler_t1740644799;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t633643314;
// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t3307743052;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t99948092;
// System.Text.RegularExpressions.CILCompiler/Frame
struct Frame_t997927490;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "System_System_Text_RegularExpressions_OpFlags378191910.h"
#include "System_System_Text_RegularExpressions_RxOp4049298493.h"
#include "mscorlib_System_Reflection_Emit_Label4243202660.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator99948092.h"
#include "mscorlib_System_Reflection_Emit_DynamicMethod3307743052.h"
#include "System_System_Text_RegularExpressions_CILCompiler_F997927490.h"

// System.Void System.Text.RegularExpressions.CILCompiler::.ctor()
extern "C"  void CILCompiler__ctor_m1943222730 (CILCompiler_t1740644799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::.cctor()
extern "C"  void CILCompiler__cctor_m1915253001 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.CILCompiler::System.Text.RegularExpressions.ICompiler.GetMachineFactory()
extern "C"  Il2CppObject * CILCompiler_System_Text_RegularExpressions_ICompiler_GetMachineFactory_m3210535296 (CILCompiler_t1740644799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::GetEvalMethod(System.Byte[],System.Int32)
extern "C"  DynamicMethod_t3307743052 * CILCompiler_GetEvalMethod_m1126867179 (CILCompiler_t1740644799 * __this, ByteU5BU5D_t3397334013* ___program0, int32_t ___pc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::GetMethod(System.Type,System.String,System.Reflection.MethodInfo&)
extern "C"  MethodInfo_t * CILCompiler_GetMethod_m3502884031 (CILCompiler_t1740644799 * __this, Type_t * ___t0, String_t* ___name1, MethodInfo_t ** ___cached2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::GetMethod(System.String,System.Reflection.MethodInfo&)
extern "C"  MethodInfo_t * CILCompiler_GetMethod_m1377558790 (CILCompiler_t1740644799 * __this, String_t* ___name0, MethodInfo_t ** ___cached1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::ReadInt(System.Byte[],System.Int32)
extern "C"  int32_t CILCompiler_ReadInt_m3815668907 (CILCompiler_t1740644799 * __this, ByteU5BU5D_t3397334013* ___code0, int32_t ___pc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.CILCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  uint16_t CILCompiler_MakeFlags_m151487305 (Il2CppObject * __this /* static, unused */, bool ___negate0, bool ___ignore1, bool ___reverse2, bool ___lazy3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitGenericOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitGenericOp_m15790949 (CILCompiler_t1740644799 * __this, uint8_t ___op0, bool ___negate1, bool ___ignore2, bool ___reverse3, bool ___lazy4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitOp_m2019674495 (CILCompiler_t1740644799 * __this, uint8_t ___op0, bool ___negate1, bool ___ignore2, bool ___reverse3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOpIgnoreReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitOpIgnoreReverse_m1764908920 (CILCompiler_t1740644799 * __this, uint8_t ___op0, bool ___ignore1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitOpNegateReverse_m1803025076 (CILCompiler_t1740644799 * __this, uint8_t ___op0, bool ___negate1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::CreateEvalMethod(System.Byte[],System.Int32)
extern "C"  DynamicMethod_t3307743052 * CILCompiler_CreateEvalMethod_m815146809 (CILCompiler_t1740644799 * __this, ByteU5BU5D_t3397334013* ___program0, int32_t ___pc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::ReadShort(System.Byte[],System.Int32)
extern "C"  int32_t CILCompiler_ReadShort_m2390075746 (CILCompiler_t1740644799 * __this, ByteU5BU5D_t3397334013* ___program0, int32_t ___pc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.Label System.Text.RegularExpressions.CILCompiler::CreateLabelForPC(System.Reflection.Emit.ILGenerator,System.Int32)
extern "C"  Label_t4243202660  CILCompiler_CreateLabelForPC_m2792596940 (CILCompiler_t1740644799 * __this, ILGenerator_t99948092 * ___ilgen0, int32_t ___pc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::GetILOffset(System.Reflection.Emit.ILGenerator)
extern "C"  int32_t CILCompiler_GetILOffset_m1903661437 (CILCompiler_t1740644799 * __this, ILGenerator_t99948092 * ___ilgen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::EmitEvalMethodBody(System.Reflection.Emit.DynamicMethod,System.Reflection.Emit.ILGenerator,System.Text.RegularExpressions.CILCompiler/Frame,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
extern "C"  DynamicMethod_t3307743052 * CILCompiler_EmitEvalMethodBody_m2233958002 (CILCompiler_t1740644799 * __this, DynamicMethod_t3307743052 * ___m0, ILGenerator_t99948092 * ___ilgen1, Frame_t997927490 * ___frame2, ByteU5BU5D_t3397334013* ___program3, int32_t ___pc4, int32_t ___end_pc5, bool ___one_op6, bool ___no_bump7, int32_t* ___out_pc8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
