#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t1199013257;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t1411648341;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollSnapRect
struct  ScrollSnapRect_t671131207  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ScrollSnapRect::startingPage
	int32_t ___startingPage_2;
	// System.Single ScrollSnapRect::fastSwipeThresholdTime
	float ___fastSwipeThresholdTime_3;
	// System.Int32 ScrollSnapRect::fastSwipeThresholdDistance
	int32_t ___fastSwipeThresholdDistance_4;
	// System.Single ScrollSnapRect::decelerationRate
	float ___decelerationRate_5;
	// UnityEngine.GameObject ScrollSnapRect::prevButton
	GameObject_t1756533147 * ___prevButton_6;
	// UnityEngine.GameObject ScrollSnapRect::nextButton
	GameObject_t1756533147 * ___nextButton_7;
	// UnityEngine.Sprite ScrollSnapRect::unselectedPage
	Sprite_t309593783 * ___unselectedPage_8;
	// UnityEngine.Sprite ScrollSnapRect::selectedPage
	Sprite_t309593783 * ___selectedPage_9;
	// UnityEngine.Transform ScrollSnapRect::pageSelectionIcons
	Transform_t3275118058 * ___pageSelectionIcons_10;
	// System.Int32 ScrollSnapRect::_fastSwipeThresholdMaxLimit
	int32_t ____fastSwipeThresholdMaxLimit_11;
	// UnityEngine.UI.ScrollRect ScrollSnapRect::_scrollRectComponent
	ScrollRect_t1199013257 * ____scrollRectComponent_12;
	// UnityEngine.RectTransform ScrollSnapRect::_scrollRectRect
	RectTransform_t3349966182 * ____scrollRectRect_13;
	// UnityEngine.RectTransform ScrollSnapRect::_container
	RectTransform_t3349966182 * ____container_14;
	// System.Boolean ScrollSnapRect::_horizontal
	bool ____horizontal_15;
	// System.Int32 ScrollSnapRect::_pageCount
	int32_t ____pageCount_16;
	// System.Int32 ScrollSnapRect::_currentPage
	int32_t ____currentPage_17;
	// System.Boolean ScrollSnapRect::_lerp
	bool ____lerp_18;
	// UnityEngine.Vector2 ScrollSnapRect::_lerpTo
	Vector2_t2243707579  ____lerpTo_19;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> ScrollSnapRect::_pagePositions
	List_1_t1612828711 * ____pagePositions_20;
	// System.Boolean ScrollSnapRect::_dragging
	bool ____dragging_21;
	// System.Single ScrollSnapRect::_timeStamp
	float ____timeStamp_22;
	// UnityEngine.Vector2 ScrollSnapRect::_startPosition
	Vector2_t2243707579  ____startPosition_23;
	// System.Boolean ScrollSnapRect::_showPageSelection
	bool ____showPageSelection_24;
	// System.Int32 ScrollSnapRect::_previousPageSelectionIndex
	int32_t ____previousPageSelectionIndex_25;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> ScrollSnapRect::_pageSelectionImages
	List_1_t1411648341 * ____pageSelectionImages_26;

public:
	inline static int32_t get_offset_of_startingPage_2() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ___startingPage_2)); }
	inline int32_t get_startingPage_2() const { return ___startingPage_2; }
	inline int32_t* get_address_of_startingPage_2() { return &___startingPage_2; }
	inline void set_startingPage_2(int32_t value)
	{
		___startingPage_2 = value;
	}

	inline static int32_t get_offset_of_fastSwipeThresholdTime_3() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ___fastSwipeThresholdTime_3)); }
	inline float get_fastSwipeThresholdTime_3() const { return ___fastSwipeThresholdTime_3; }
	inline float* get_address_of_fastSwipeThresholdTime_3() { return &___fastSwipeThresholdTime_3; }
	inline void set_fastSwipeThresholdTime_3(float value)
	{
		___fastSwipeThresholdTime_3 = value;
	}

	inline static int32_t get_offset_of_fastSwipeThresholdDistance_4() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ___fastSwipeThresholdDistance_4)); }
	inline int32_t get_fastSwipeThresholdDistance_4() const { return ___fastSwipeThresholdDistance_4; }
	inline int32_t* get_address_of_fastSwipeThresholdDistance_4() { return &___fastSwipeThresholdDistance_4; }
	inline void set_fastSwipeThresholdDistance_4(int32_t value)
	{
		___fastSwipeThresholdDistance_4 = value;
	}

	inline static int32_t get_offset_of_decelerationRate_5() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ___decelerationRate_5)); }
	inline float get_decelerationRate_5() const { return ___decelerationRate_5; }
	inline float* get_address_of_decelerationRate_5() { return &___decelerationRate_5; }
	inline void set_decelerationRate_5(float value)
	{
		___decelerationRate_5 = value;
	}

	inline static int32_t get_offset_of_prevButton_6() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ___prevButton_6)); }
	inline GameObject_t1756533147 * get_prevButton_6() const { return ___prevButton_6; }
	inline GameObject_t1756533147 ** get_address_of_prevButton_6() { return &___prevButton_6; }
	inline void set_prevButton_6(GameObject_t1756533147 * value)
	{
		___prevButton_6 = value;
		Il2CppCodeGenWriteBarrier(&___prevButton_6, value);
	}

	inline static int32_t get_offset_of_nextButton_7() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ___nextButton_7)); }
	inline GameObject_t1756533147 * get_nextButton_7() const { return ___nextButton_7; }
	inline GameObject_t1756533147 ** get_address_of_nextButton_7() { return &___nextButton_7; }
	inline void set_nextButton_7(GameObject_t1756533147 * value)
	{
		___nextButton_7 = value;
		Il2CppCodeGenWriteBarrier(&___nextButton_7, value);
	}

	inline static int32_t get_offset_of_unselectedPage_8() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ___unselectedPage_8)); }
	inline Sprite_t309593783 * get_unselectedPage_8() const { return ___unselectedPage_8; }
	inline Sprite_t309593783 ** get_address_of_unselectedPage_8() { return &___unselectedPage_8; }
	inline void set_unselectedPage_8(Sprite_t309593783 * value)
	{
		___unselectedPage_8 = value;
		Il2CppCodeGenWriteBarrier(&___unselectedPage_8, value);
	}

	inline static int32_t get_offset_of_selectedPage_9() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ___selectedPage_9)); }
	inline Sprite_t309593783 * get_selectedPage_9() const { return ___selectedPage_9; }
	inline Sprite_t309593783 ** get_address_of_selectedPage_9() { return &___selectedPage_9; }
	inline void set_selectedPage_9(Sprite_t309593783 * value)
	{
		___selectedPage_9 = value;
		Il2CppCodeGenWriteBarrier(&___selectedPage_9, value);
	}

	inline static int32_t get_offset_of_pageSelectionIcons_10() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ___pageSelectionIcons_10)); }
	inline Transform_t3275118058 * get_pageSelectionIcons_10() const { return ___pageSelectionIcons_10; }
	inline Transform_t3275118058 ** get_address_of_pageSelectionIcons_10() { return &___pageSelectionIcons_10; }
	inline void set_pageSelectionIcons_10(Transform_t3275118058 * value)
	{
		___pageSelectionIcons_10 = value;
		Il2CppCodeGenWriteBarrier(&___pageSelectionIcons_10, value);
	}

	inline static int32_t get_offset_of__fastSwipeThresholdMaxLimit_11() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ____fastSwipeThresholdMaxLimit_11)); }
	inline int32_t get__fastSwipeThresholdMaxLimit_11() const { return ____fastSwipeThresholdMaxLimit_11; }
	inline int32_t* get_address_of__fastSwipeThresholdMaxLimit_11() { return &____fastSwipeThresholdMaxLimit_11; }
	inline void set__fastSwipeThresholdMaxLimit_11(int32_t value)
	{
		____fastSwipeThresholdMaxLimit_11 = value;
	}

	inline static int32_t get_offset_of__scrollRectComponent_12() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ____scrollRectComponent_12)); }
	inline ScrollRect_t1199013257 * get__scrollRectComponent_12() const { return ____scrollRectComponent_12; }
	inline ScrollRect_t1199013257 ** get_address_of__scrollRectComponent_12() { return &____scrollRectComponent_12; }
	inline void set__scrollRectComponent_12(ScrollRect_t1199013257 * value)
	{
		____scrollRectComponent_12 = value;
		Il2CppCodeGenWriteBarrier(&____scrollRectComponent_12, value);
	}

	inline static int32_t get_offset_of__scrollRectRect_13() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ____scrollRectRect_13)); }
	inline RectTransform_t3349966182 * get__scrollRectRect_13() const { return ____scrollRectRect_13; }
	inline RectTransform_t3349966182 ** get_address_of__scrollRectRect_13() { return &____scrollRectRect_13; }
	inline void set__scrollRectRect_13(RectTransform_t3349966182 * value)
	{
		____scrollRectRect_13 = value;
		Il2CppCodeGenWriteBarrier(&____scrollRectRect_13, value);
	}

	inline static int32_t get_offset_of__container_14() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ____container_14)); }
	inline RectTransform_t3349966182 * get__container_14() const { return ____container_14; }
	inline RectTransform_t3349966182 ** get_address_of__container_14() { return &____container_14; }
	inline void set__container_14(RectTransform_t3349966182 * value)
	{
		____container_14 = value;
		Il2CppCodeGenWriteBarrier(&____container_14, value);
	}

	inline static int32_t get_offset_of__horizontal_15() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ____horizontal_15)); }
	inline bool get__horizontal_15() const { return ____horizontal_15; }
	inline bool* get_address_of__horizontal_15() { return &____horizontal_15; }
	inline void set__horizontal_15(bool value)
	{
		____horizontal_15 = value;
	}

	inline static int32_t get_offset_of__pageCount_16() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ____pageCount_16)); }
	inline int32_t get__pageCount_16() const { return ____pageCount_16; }
	inline int32_t* get_address_of__pageCount_16() { return &____pageCount_16; }
	inline void set__pageCount_16(int32_t value)
	{
		____pageCount_16 = value;
	}

	inline static int32_t get_offset_of__currentPage_17() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ____currentPage_17)); }
	inline int32_t get__currentPage_17() const { return ____currentPage_17; }
	inline int32_t* get_address_of__currentPage_17() { return &____currentPage_17; }
	inline void set__currentPage_17(int32_t value)
	{
		____currentPage_17 = value;
	}

	inline static int32_t get_offset_of__lerp_18() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ____lerp_18)); }
	inline bool get__lerp_18() const { return ____lerp_18; }
	inline bool* get_address_of__lerp_18() { return &____lerp_18; }
	inline void set__lerp_18(bool value)
	{
		____lerp_18 = value;
	}

	inline static int32_t get_offset_of__lerpTo_19() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ____lerpTo_19)); }
	inline Vector2_t2243707579  get__lerpTo_19() const { return ____lerpTo_19; }
	inline Vector2_t2243707579 * get_address_of__lerpTo_19() { return &____lerpTo_19; }
	inline void set__lerpTo_19(Vector2_t2243707579  value)
	{
		____lerpTo_19 = value;
	}

	inline static int32_t get_offset_of__pagePositions_20() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ____pagePositions_20)); }
	inline List_1_t1612828711 * get__pagePositions_20() const { return ____pagePositions_20; }
	inline List_1_t1612828711 ** get_address_of__pagePositions_20() { return &____pagePositions_20; }
	inline void set__pagePositions_20(List_1_t1612828711 * value)
	{
		____pagePositions_20 = value;
		Il2CppCodeGenWriteBarrier(&____pagePositions_20, value);
	}

	inline static int32_t get_offset_of__dragging_21() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ____dragging_21)); }
	inline bool get__dragging_21() const { return ____dragging_21; }
	inline bool* get_address_of__dragging_21() { return &____dragging_21; }
	inline void set__dragging_21(bool value)
	{
		____dragging_21 = value;
	}

	inline static int32_t get_offset_of__timeStamp_22() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ____timeStamp_22)); }
	inline float get__timeStamp_22() const { return ____timeStamp_22; }
	inline float* get_address_of__timeStamp_22() { return &____timeStamp_22; }
	inline void set__timeStamp_22(float value)
	{
		____timeStamp_22 = value;
	}

	inline static int32_t get_offset_of__startPosition_23() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ____startPosition_23)); }
	inline Vector2_t2243707579  get__startPosition_23() const { return ____startPosition_23; }
	inline Vector2_t2243707579 * get_address_of__startPosition_23() { return &____startPosition_23; }
	inline void set__startPosition_23(Vector2_t2243707579  value)
	{
		____startPosition_23 = value;
	}

	inline static int32_t get_offset_of__showPageSelection_24() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ____showPageSelection_24)); }
	inline bool get__showPageSelection_24() const { return ____showPageSelection_24; }
	inline bool* get_address_of__showPageSelection_24() { return &____showPageSelection_24; }
	inline void set__showPageSelection_24(bool value)
	{
		____showPageSelection_24 = value;
	}

	inline static int32_t get_offset_of__previousPageSelectionIndex_25() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ____previousPageSelectionIndex_25)); }
	inline int32_t get__previousPageSelectionIndex_25() const { return ____previousPageSelectionIndex_25; }
	inline int32_t* get_address_of__previousPageSelectionIndex_25() { return &____previousPageSelectionIndex_25; }
	inline void set__previousPageSelectionIndex_25(int32_t value)
	{
		____previousPageSelectionIndex_25 = value;
	}

	inline static int32_t get_offset_of__pageSelectionImages_26() { return static_cast<int32_t>(offsetof(ScrollSnapRect_t671131207, ____pageSelectionImages_26)); }
	inline List_1_t1411648341 * get__pageSelectionImages_26() const { return ____pageSelectionImages_26; }
	inline List_1_t1411648341 ** get_address_of__pageSelectionImages_26() { return &____pageSelectionImages_26; }
	inline void set__pageSelectionImages_26(List_1_t1411648341 * value)
	{
		____pageSelectionImages_26 = value;
		Il2CppCodeGenWriteBarrier(&____pageSelectionImages_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
