#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// HogScene/Image[]
struct ImageU5BU5D_t442682705;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_HogScene_LayerType813678172.h"
#include "AssemblyU2DCSharp_HogScene_LayerStatus1395463862.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HogScene/Layer
struct  Layer_t3433654444  : public Il2CppObject
{
public:
	// HogScene/LayerType HogScene/Layer::type
	int32_t ___type_0;
	// System.String HogScene/Layer::name
	String_t* ___name_1;
	// HogScene/LayerStatus HogScene/Layer::layerStatus
	int32_t ___layerStatus_2;
	// UnityEngine.Rect HogScene/Layer::bounds
	Rect_t3681755626  ___bounds_3;
	// HogScene/Image[] HogScene/Layer::images
	ImageU5BU5D_t442682705* ___images_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Layer_t3433654444, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Layer_t3433654444, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_layerStatus_2() { return static_cast<int32_t>(offsetof(Layer_t3433654444, ___layerStatus_2)); }
	inline int32_t get_layerStatus_2() const { return ___layerStatus_2; }
	inline int32_t* get_address_of_layerStatus_2() { return &___layerStatus_2; }
	inline void set_layerStatus_2(int32_t value)
	{
		___layerStatus_2 = value;
	}

	inline static int32_t get_offset_of_bounds_3() { return static_cast<int32_t>(offsetof(Layer_t3433654444, ___bounds_3)); }
	inline Rect_t3681755626  get_bounds_3() const { return ___bounds_3; }
	inline Rect_t3681755626 * get_address_of_bounds_3() { return &___bounds_3; }
	inline void set_bounds_3(Rect_t3681755626  value)
	{
		___bounds_3 = value;
	}

	inline static int32_t get_offset_of_images_4() { return static_cast<int32_t>(offsetof(Layer_t3433654444, ___images_4)); }
	inline ImageU5BU5D_t442682705* get_images_4() const { return ___images_4; }
	inline ImageU5BU5D_t442682705** get_address_of_images_4() { return &___images_4; }
	inline void set_images_4(ImageU5BU5D_t442682705* value)
	{
		___images_4 = value;
		Il2CppCodeGenWriteBarrier(&___images_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
