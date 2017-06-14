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

// System.Text.RegularExpressions.RxInterpreter
struct RxInterpreter_t2459337652;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t877898325;
// System.Text.RegularExpressions.Match
struct Match_t3164245899;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// System.String
struct String_t;
// System.Text.RegularExpressions.Group
struct Group_t3761430853;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_EvalDelegate877898325.h"
#include "System_System_Text_RegularExpressions_Regex1803876613.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Text_RegularExpressions_Group3761430853.h"

// System.Void System.Text.RegularExpressions.RxInterpreter::.ctor(System.Byte[],System.Text.RegularExpressions.EvalDelegate)
extern "C"  void RxInterpreter__ctor_m2358372138 (RxInterpreter_t2459337652 * __this, ByteU5BU5D_t3397334013* ___program0, EvalDelegate_t877898325 * ___eval_del1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::.cctor()
extern "C"  void RxInterpreter__cctor_m2275621484 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::ReadInt(System.Byte[],System.Int32)
extern "C"  int32_t RxInterpreter_ReadInt_m668929650 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___code0, int32_t ___pc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RxInterpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C"  Match_t3164245899 * RxInterpreter_Scan_m1356112593 (RxInterpreter_t2459337652 * __this, Regex_t1803876613 * ___regex0, String_t* ___text1, int32_t ___start2, int32_t ___end3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Open(System.Int32,System.Int32)
extern "C"  void RxInterpreter_Open_m2570278233 (RxInterpreter_t2459337652 * __this, int32_t ___gid0, int32_t ___ptr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Close(System.Int32,System.Int32)
extern "C"  void RxInterpreter_Close_m2101529351 (RxInterpreter_t2459337652 * __this, int32_t ___gid0, int32_t ___ptr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C"  bool RxInterpreter_Balance_m3767924741 (RxInterpreter_t2459337652 * __this, int32_t ___gid0, int32_t ___balance_gid1, bool ___capture2, int32_t ___ptr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::Checkpoint()
extern "C"  int32_t RxInterpreter_Checkpoint_m188195365 (RxInterpreter_t2459337652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Backtrack(System.Int32)
extern "C"  void RxInterpreter_Backtrack_m736877418 (RxInterpreter_t2459337652 * __this, int32_t ___cp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::ResetGroups()
extern "C"  void RxInterpreter_ResetGroups_m3230354462 (RxInterpreter_t2459337652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::GetLastDefined(System.Int32)
extern "C"  int32_t RxInterpreter_GetLastDefined_m1356069903 (RxInterpreter_t2459337652 * __this, int32_t ___gid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::CreateMark(System.Int32)
extern "C"  int32_t RxInterpreter_CreateMark_m2672659395 (RxInterpreter_t2459337652 * __this, int32_t ___previous0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
extern "C"  void RxInterpreter_GetGroupInfo_m2976720619 (RxInterpreter_t2459337652 * __this, int32_t ___gid0, int32_t* ___first_mark_index1, int32_t* ___n_caps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
extern "C"  void RxInterpreter_PopulateGroup_m624289816 (RxInterpreter_t2459337652 * __this, Group_t3761430853 * ___g0, int32_t ___first_mark_index1, int32_t ___n_caps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RxInterpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
extern "C"  Match_t3164245899 * RxInterpreter_GenerateMatch_m1328484004 (RxInterpreter_t2459337652 * __this, Regex_t1803876613 * ___regex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::IsWordChar(System.Char)
extern "C"  bool RxInterpreter_IsWordChar_m1472608470 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::EvalByteCode(System.Int32,System.Int32,System.Int32&)
extern "C"  bool RxInterpreter_EvalByteCode_m3606401639 (RxInterpreter_t2459337652 * __this, int32_t ___pc0, int32_t ___strpos1, int32_t* ___strpos_result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
