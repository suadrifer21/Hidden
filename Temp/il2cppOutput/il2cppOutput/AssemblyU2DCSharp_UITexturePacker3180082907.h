#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Rect>
struct List_1_t3050876758;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITexturePacker
struct  UITexturePacker_t3180082907  : public Il2CppObject
{
public:
	// System.Int32 UITexturePacker::binWidth
	int32_t ___binWidth_0;
	// System.Int32 UITexturePacker::binHeight
	int32_t ___binHeight_1;
	// System.Boolean UITexturePacker::allowRotations
	bool ___allowRotations_2;
	// System.Collections.Generic.List`1<UnityEngine.Rect> UITexturePacker::usedRectangles
	List_1_t3050876758 * ___usedRectangles_3;
	// System.Collections.Generic.List`1<UnityEngine.Rect> UITexturePacker::freeRectangles
	List_1_t3050876758 * ___freeRectangles_4;

public:
	inline static int32_t get_offset_of_binWidth_0() { return static_cast<int32_t>(offsetof(UITexturePacker_t3180082907, ___binWidth_0)); }
	inline int32_t get_binWidth_0() const { return ___binWidth_0; }
	inline int32_t* get_address_of_binWidth_0() { return &___binWidth_0; }
	inline void set_binWidth_0(int32_t value)
	{
		___binWidth_0 = value;
	}

	inline static int32_t get_offset_of_binHeight_1() { return static_cast<int32_t>(offsetof(UITexturePacker_t3180082907, ___binHeight_1)); }
	inline int32_t get_binHeight_1() const { return ___binHeight_1; }
	inline int32_t* get_address_of_binHeight_1() { return &___binHeight_1; }
	inline void set_binHeight_1(int32_t value)
	{
		___binHeight_1 = value;
	}

	inline static int32_t get_offset_of_allowRotations_2() { return static_cast<int32_t>(offsetof(UITexturePacker_t3180082907, ___allowRotations_2)); }
	inline bool get_allowRotations_2() const { return ___allowRotations_2; }
	inline bool* get_address_of_allowRotations_2() { return &___allowRotations_2; }
	inline void set_allowRotations_2(bool value)
	{
		___allowRotations_2 = value;
	}

	inline static int32_t get_offset_of_usedRectangles_3() { return static_cast<int32_t>(offsetof(UITexturePacker_t3180082907, ___usedRectangles_3)); }
	inline List_1_t3050876758 * get_usedRectangles_3() const { return ___usedRectangles_3; }
	inline List_1_t3050876758 ** get_address_of_usedRectangles_3() { return &___usedRectangles_3; }
	inline void set_usedRectangles_3(List_1_t3050876758 * value)
	{
		___usedRectangles_3 = value;
		Il2CppCodeGenWriteBarrier(&___usedRectangles_3, value);
	}

	inline static int32_t get_offset_of_freeRectangles_4() { return static_cast<int32_t>(offsetof(UITexturePacker_t3180082907, ___freeRectangles_4)); }
	inline List_1_t3050876758 * get_freeRectangles_4() const { return ___freeRectangles_4; }
	inline List_1_t3050876758 ** get_address_of_freeRectangles_4() { return &___freeRectangles_4; }
	inline void set_freeRectangles_4(List_1_t3050876758 * value)
	{
		___freeRectangles_4 = value;
		Il2CppCodeGenWriteBarrier(&___freeRectangles_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
