#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapZoom
struct  MapZoom_t2806292953  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MapZoom::curScale
	float ___curScale_2;
	// System.Single MapZoom::maxScale
	float ___maxScale_3;
	// System.Single MapZoom::minScale
	float ___minScale_4;
	// System.Boolean MapZoom::zoom
	bool ___zoom_5;
	// System.Single MapZoom::scaleInc
	float ___scaleInc_6;
	// UnityEngine.Vector3 MapZoom::scale
	Vector3_t2243707580  ___scale_7;

public:
	inline static int32_t get_offset_of_curScale_2() { return static_cast<int32_t>(offsetof(MapZoom_t2806292953, ___curScale_2)); }
	inline float get_curScale_2() const { return ___curScale_2; }
	inline float* get_address_of_curScale_2() { return &___curScale_2; }
	inline void set_curScale_2(float value)
	{
		___curScale_2 = value;
	}

	inline static int32_t get_offset_of_maxScale_3() { return static_cast<int32_t>(offsetof(MapZoom_t2806292953, ___maxScale_3)); }
	inline float get_maxScale_3() const { return ___maxScale_3; }
	inline float* get_address_of_maxScale_3() { return &___maxScale_3; }
	inline void set_maxScale_3(float value)
	{
		___maxScale_3 = value;
	}

	inline static int32_t get_offset_of_minScale_4() { return static_cast<int32_t>(offsetof(MapZoom_t2806292953, ___minScale_4)); }
	inline float get_minScale_4() const { return ___minScale_4; }
	inline float* get_address_of_minScale_4() { return &___minScale_4; }
	inline void set_minScale_4(float value)
	{
		___minScale_4 = value;
	}

	inline static int32_t get_offset_of_zoom_5() { return static_cast<int32_t>(offsetof(MapZoom_t2806292953, ___zoom_5)); }
	inline bool get_zoom_5() const { return ___zoom_5; }
	inline bool* get_address_of_zoom_5() { return &___zoom_5; }
	inline void set_zoom_5(bool value)
	{
		___zoom_5 = value;
	}

	inline static int32_t get_offset_of_scaleInc_6() { return static_cast<int32_t>(offsetof(MapZoom_t2806292953, ___scaleInc_6)); }
	inline float get_scaleInc_6() const { return ___scaleInc_6; }
	inline float* get_address_of_scaleInc_6() { return &___scaleInc_6; }
	inline void set_scaleInc_6(float value)
	{
		___scaleInc_6 = value;
	}

	inline static int32_t get_offset_of_scale_7() { return static_cast<int32_t>(offsetof(MapZoom_t2806292953, ___scale_7)); }
	inline Vector3_t2243707580  get_scale_7() const { return ___scale_7; }
	inline Vector3_t2243707580 * get_address_of_scale_7() { return &___scale_7; }
	inline void set_scale_7(Vector3_t2243707580  value)
	{
		___scale_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
