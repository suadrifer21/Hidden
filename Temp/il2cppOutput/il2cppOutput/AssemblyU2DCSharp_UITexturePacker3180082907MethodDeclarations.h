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

// UITexturePacker
struct UITexturePacker_t3180082907;
// UnityEngine.Rect[]
struct RectU5BU5D_t1299715887;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2724090252;
// System.Collections.Generic.List`1<UnityEngine.Rect>
struct List_1_t3050876758;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "AssemblyU2DCSharp_UITexturePacker_FreeRectChoiceHe2112508177.h"

// System.Void UITexturePacker::.ctor(System.Int32,System.Int32,System.Boolean)
extern "C"  void UITexturePacker__ctor_m1754959573 (UITexturePacker_t3180082907 * __this, int32_t ___width0, int32_t ___height1, bool ___rotations2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexturePacker::Init(System.Int32,System.Int32,System.Boolean)
extern "C"  void UITexturePacker_Init_m3381427995 (UITexturePacker_t3180082907 * __this, int32_t ___width0, int32_t ___height1, bool ___rotations2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect[] UITexturePacker::PackTextures(UnityEngine.Texture2D,UnityEngine.Texture2D[],System.Int32,System.Int32)
extern "C"  RectU5BU5D_t1299715887* UITexturePacker_PackTextures_m2365325275 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___texture0, Texture2DU5BU5D_t2724090252* ___textures1, int32_t ___padding2, int32_t ___maxSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect[] UITexturePacker::PackTextures(UnityEngine.Texture2D,UnityEngine.Texture2D[],System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  RectU5BU5D_t1299715887* UITexturePacker_PackTextures_m1288635431 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___texture0, Texture2DU5BU5D_t2724090252* ___textures1, int32_t ___width2, int32_t ___height3, int32_t ___padding4, int32_t ___maxSize5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UITexturePacker::Insert(System.Int32,System.Int32,UITexturePacker/FreeRectChoiceHeuristic)
extern "C"  Rect_t3681755626  UITexturePacker_Insert_m3010233880 (UITexturePacker_t3180082907 * __this, int32_t ___width0, int32_t ___height1, int32_t ___method2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexturePacker::Insert(System.Collections.Generic.List`1<UnityEngine.Rect>,System.Collections.Generic.List`1<UnityEngine.Rect>,UITexturePacker/FreeRectChoiceHeuristic)
extern "C"  void UITexturePacker_Insert_m1332485866 (UITexturePacker_t3180082907 * __this, List_1_t3050876758 * ___rects0, List_1_t3050876758 * ___dst1, int32_t ___method2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexturePacker::PlaceRect(UnityEngine.Rect)
extern "C"  void UITexturePacker_PlaceRect_m1862443376 (UITexturePacker_t3180082907 * __this, Rect_t3681755626  ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UITexturePacker::ScoreRect(System.Int32,System.Int32,UITexturePacker/FreeRectChoiceHeuristic,System.Int32&,System.Int32&)
extern "C"  Rect_t3681755626  UITexturePacker_ScoreRect_m1330708977 (UITexturePacker_t3180082907 * __this, int32_t ___width0, int32_t ___height1, int32_t ___method2, int32_t* ___score13, int32_t* ___score24, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITexturePacker::Occupancy()
extern "C"  float UITexturePacker_Occupancy_m2405588195 (UITexturePacker_t3180082907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UITexturePacker::FindPositionForNewNodeBottomLeft(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C"  Rect_t3681755626  UITexturePacker_FindPositionForNewNodeBottomLeft_m2838232477 (UITexturePacker_t3180082907 * __this, int32_t ___width0, int32_t ___height1, int32_t* ___bestY2, int32_t* ___bestX3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UITexturePacker::FindPositionForNewNodeBestShortSideFit(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C"  Rect_t3681755626  UITexturePacker_FindPositionForNewNodeBestShortSideFit_m2442111783 (UITexturePacker_t3180082907 * __this, int32_t ___width0, int32_t ___height1, int32_t* ___bestShortSideFit2, int32_t* ___bestLongSideFit3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UITexturePacker::FindPositionForNewNodeBestLongSideFit(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C"  Rect_t3681755626  UITexturePacker_FindPositionForNewNodeBestLongSideFit_m4060506219 (UITexturePacker_t3180082907 * __this, int32_t ___width0, int32_t ___height1, int32_t* ___bestShortSideFit2, int32_t* ___bestLongSideFit3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UITexturePacker::FindPositionForNewNodeBestAreaFit(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C"  Rect_t3681755626  UITexturePacker_FindPositionForNewNodeBestAreaFit_m2268956793 (UITexturePacker_t3180082907 * __this, int32_t ___width0, int32_t ___height1, int32_t* ___bestAreaFit2, int32_t* ___bestShortSideFit3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UITexturePacker::CommonIntervalLength(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t UITexturePacker_CommonIntervalLength_m1030757584 (UITexturePacker_t3180082907 * __this, int32_t ___i1start0, int32_t ___i1end1, int32_t ___i2start2, int32_t ___i2end3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UITexturePacker::ContactPointScoreNode(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t UITexturePacker_ContactPointScoreNode_m3512013442 (UITexturePacker_t3180082907 * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UITexturePacker::FindPositionForNewNodeContactPoint(System.Int32,System.Int32,System.Int32&)
extern "C"  Rect_t3681755626  UITexturePacker_FindPositionForNewNodeContactPoint_m1337287310 (UITexturePacker_t3180082907 * __this, int32_t ___width0, int32_t ___height1, int32_t* ___bestContactScore2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITexturePacker::SplitFreeNode(UnityEngine.Rect,UnityEngine.Rect&)
extern "C"  bool UITexturePacker_SplitFreeNode_m2486022738 (UITexturePacker_t3180082907 * __this, Rect_t3681755626  ___freeNode0, Rect_t3681755626 * ___usedNode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexturePacker::PruneFreeList()
extern "C"  void UITexturePacker_PruneFreeList_m1428877888 (UITexturePacker_t3180082907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITexturePacker::IsContainedIn(UnityEngine.Rect,UnityEngine.Rect)
extern "C"  bool UITexturePacker_IsContainedIn_m118224550 (UITexturePacker_t3180082907 * __this, Rect_t3681755626  ___a0, Rect_t3681755626  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
