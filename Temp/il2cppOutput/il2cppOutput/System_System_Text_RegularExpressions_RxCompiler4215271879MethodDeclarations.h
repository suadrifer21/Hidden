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

// System.Text.RegularExpressions.RxCompiler
struct RxCompiler_t4215271879;
// System.Text.RegularExpressions.LinkRef
struct LinkRef_t2090853131;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t633643314;
// System.Collections.BitArray
struct BitArray_t4180138994;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_RxOp4049298493.h"
#include "System_System_Text_RegularExpressions_LinkRef2090853131.h"
#include "mscorlib_System_Globalization_UnicodeCategory682236799.h"
#include "System_System_Text_RegularExpressions_Category1984577050.h"
#include "mscorlib_System_Collections_BitArray4180138994.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Text_RegularExpressions_Position3781184359.h"

// System.Void System.Text.RegularExpressions.RxCompiler::.ctor()
extern "C"  void RxCompiler__ctor_m2592327580 (RxCompiler_t4215271879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::MakeRoom(System.Int32)
extern "C"  void RxCompiler_MakeRoom_m462463302 (RxCompiler_t4215271879 * __this, int32_t ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Byte)
extern "C"  void RxCompiler_Emit_m1429737796 (RxCompiler_t4215271879 * __this, uint8_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Text.RegularExpressions.RxOp)
extern "C"  void RxCompiler_Emit_m2803112275 (RxCompiler_t4215271879 * __this, uint8_t ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.UInt16)
extern "C"  void RxCompiler_Emit_m320471761 (RxCompiler_t4215271879 * __this, uint16_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Int32)
extern "C"  void RxCompiler_Emit_m1572297820 (RxCompiler_t4215271879 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_BeginLink_m2897669665 (RxCompiler_t4215271879 * __this, LinkRef_t2090853131 * ___lref0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitLink_m1843845055 (RxCompiler_t4215271879 * __this, LinkRef_t2090853131 * ___lref0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.RxCompiler::GetMachineFactory()
extern "C"  Il2CppObject * RxCompiler_GetMachineFactory_m898299723 (RxCompiler_t4215271879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitFalse()
extern "C"  void RxCompiler_EmitFalse_m2150238026 (RxCompiler_t4215271879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitTrue()
extern "C"  void RxCompiler_EmitTrue_m208911561 (RxCompiler_t4215271879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitOp_m2170757811 (RxCompiler_t4215271879 * __this, uint8_t ___op0, bool ___negate1, bool ___ignore2, bool ___reverse3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpIgnoreReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitOpIgnoreReverse_m2916010466 (RxCompiler_t4215271879 * __this, uint8_t ___op0, bool ___ignore1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitOpNegateReverse_m2394443942 (RxCompiler_t4215271879 * __this, uint8_t ___op0, bool ___negate1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitCharacter_m331160236 (RxCompiler_t4215271879 * __this, Il2CppChar ___c0, bool ___negate1, bool ___ignore2, bool ___reverse3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitUniCat(System.Globalization.UnicodeCategory,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitUniCat_m3750780004 (RxCompiler_t4215271879 * __this, int32_t ___cat0, bool ___negate1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCatGeneral(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitCatGeneral_m538424866 (RxCompiler_t4215271879 * __this, uint16_t ___cat0, bool ___negate1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitCategory_m1774655050 (RxCompiler_t4215271879 * __this, uint16_t ___cat0, bool ___negate1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitNotCategory_m1566852611 (RxCompiler_t4215271879 * __this, uint16_t ___cat0, bool ___negate1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitRange_m3284246947 (RxCompiler_t4215271879 * __this, Il2CppChar ___lo0, Il2CppChar ___hi1, bool ___negate2, bool ___ignore3, bool ___reverse4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitSet_m2171567683 (RxCompiler_t4215271879 * __this, Il2CppChar ___lo0, BitArray_t4180138994 * ___set1, bool ___negate2, bool ___ignore3, bool ___reverse4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitString(System.String,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitString_m3770896224 (RxCompiler_t4215271879 * __this, String_t* ___str0, bool ___ignore1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitPosition(System.Text.RegularExpressions.Position)
extern "C"  void RxCompiler_EmitPosition_m2763301240 (RxCompiler_t4215271879 * __this, uint16_t ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpen(System.Int32)
extern "C"  void RxCompiler_EmitOpen_m1788951640 (RxCompiler_t4215271879 * __this, int32_t ___gid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitClose(System.Int32)
extern "C"  void RxCompiler_EmitClose_m3137615108 (RxCompiler_t4215271879 * __this, int32_t ___gid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitBalanceStart_m3492232572 (RxCompiler_t4215271879 * __this, int32_t ___gid0, int32_t ___balance1, bool ___capture2, LinkRef_t2090853131 * ___tail3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBalance()
extern "C"  void RxCompiler_EmitBalance_m1872916693 (RxCompiler_t4215271879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitReference_m3488579965 (RxCompiler_t4215271879 * __this, int32_t ___gid0, bool ___ignore1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitIfDefined_m2744798462 (RxCompiler_t4215271879 * __this, int32_t ___gid0, LinkRef_t2090853131 * ___tail1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitSub_m2508051691 (RxCompiler_t4215271879 * __this, LinkRef_t2090853131 * ___tail0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitTest_m1407545509 (RxCompiler_t4215271879 * __this, LinkRef_t2090853131 * ___yes0, LinkRef_t2090853131 * ___tail1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitBranch_m3125228475 (RxCompiler_t4215271879 * __this, LinkRef_t2090853131 * ___next0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitJump_m2160254825 (RxCompiler_t4215271879 * __this, LinkRef_t2090853131 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitIn_m83847174 (RxCompiler_t4215271879 * __this, LinkRef_t2090853131 * ___tail0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitRepeat_m902163687 (RxCompiler_t4215271879 * __this, int32_t ___min0, int32_t ___max1, bool ___lazy2, LinkRef_t2090853131 * ___until3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitUntil_m1911759225 (RxCompiler_t4215271879 * __this, LinkRef_t2090853131 * ___repeat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
extern "C"  void RxCompiler_EmitInfo_m3976688582 (RxCompiler_t4215271879 * __this, int32_t ___count0, int32_t ___min1, int32_t ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitFastRepeat_m1552329531 (RxCompiler_t4215271879 * __this, int32_t ___min0, int32_t ___max1, bool ___lazy2, LinkRef_t2090853131 * ___tail3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitAnchor_m4140657390 (RxCompiler_t4215271879 * __this, bool ___reverse0, int32_t ___offset1, LinkRef_t2090853131 * ___tail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBranchEnd()
extern "C"  void RxCompiler_EmitBranchEnd_m533273236 (RxCompiler_t4215271879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitAlternationEnd()
extern "C"  void RxCompiler_EmitAlternationEnd_m1851557113 (RxCompiler_t4215271879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.RxCompiler::NewLink()
extern "C"  LinkRef_t2090853131 * RxCompiler_NewLink_m3625689445 (RxCompiler_t4215271879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_ResolveLink_m4159533520 (RxCompiler_t4215271879 * __this, LinkRef_t2090853131 * ___link0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
