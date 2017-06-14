#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITexturePacker/Storage
struct  Storage_t926507209 
{
public:
	// UnityEngine.Rect UITexturePacker/Storage::rect
	Rect_t3681755626  ___rect_0;
	// System.Boolean UITexturePacker/Storage::paddingX
	bool ___paddingX_1;
	// System.Boolean UITexturePacker/Storage::paddingY
	bool ___paddingY_2;

public:
	inline static int32_t get_offset_of_rect_0() { return static_cast<int32_t>(offsetof(Storage_t926507209, ___rect_0)); }
	inline Rect_t3681755626  get_rect_0() const { return ___rect_0; }
	inline Rect_t3681755626 * get_address_of_rect_0() { return &___rect_0; }
	inline void set_rect_0(Rect_t3681755626  value)
	{
		___rect_0 = value;
	}

	inline static int32_t get_offset_of_paddingX_1() { return static_cast<int32_t>(offsetof(Storage_t926507209, ___paddingX_1)); }
	inline bool get_paddingX_1() const { return ___paddingX_1; }
	inline bool* get_address_of_paddingX_1() { return &___paddingX_1; }
	inline void set_paddingX_1(bool value)
	{
		___paddingX_1 = value;
	}

	inline static int32_t get_offset_of_paddingY_2() { return static_cast<int32_t>(offsetof(Storage_t926507209, ___paddingY_2)); }
	inline bool get_paddingY_2() const { return ___paddingY_2; }
	inline bool* get_address_of_paddingY_2() { return &___paddingY_2; }
	inline void set_paddingY_2(bool value)
	{
		___paddingY_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UITexturePacker/Storage
struct Storage_t926507209_marshaled_pinvoke
{
	Rect_t3681755626  ___rect_0;
	int32_t ___paddingX_1;
	int32_t ___paddingY_2;
};
// Native definition for COM marshalling of UITexturePacker/Storage
struct Storage_t926507209_marshaled_com
{
	Rect_t3681755626  ___rect_0;
	int32_t ___paddingX_1;
	int32_t ___paddingY_2;
};
