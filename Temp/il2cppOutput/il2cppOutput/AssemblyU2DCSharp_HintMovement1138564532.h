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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HintMovement
struct  HintMovement_t1138564532  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean HintMovement::isMoving
	bool ___isMoving_2;
	// UnityEngine.GameObject HintMovement::endObject
	GameObject_t1756533147 * ___endObject_3;
	// System.Single HintMovement::speed
	float ___speed_4;
	// UnityEngine.Vector3 HintMovement::startPoint
	Vector3_t2243707580  ___startPoint_5;

public:
	inline static int32_t get_offset_of_isMoving_2() { return static_cast<int32_t>(offsetof(HintMovement_t1138564532, ___isMoving_2)); }
	inline bool get_isMoving_2() const { return ___isMoving_2; }
	inline bool* get_address_of_isMoving_2() { return &___isMoving_2; }
	inline void set_isMoving_2(bool value)
	{
		___isMoving_2 = value;
	}

	inline static int32_t get_offset_of_endObject_3() { return static_cast<int32_t>(offsetof(HintMovement_t1138564532, ___endObject_3)); }
	inline GameObject_t1756533147 * get_endObject_3() const { return ___endObject_3; }
	inline GameObject_t1756533147 ** get_address_of_endObject_3() { return &___endObject_3; }
	inline void set_endObject_3(GameObject_t1756533147 * value)
	{
		___endObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___endObject_3, value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(HintMovement_t1138564532, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_startPoint_5() { return static_cast<int32_t>(offsetof(HintMovement_t1138564532, ___startPoint_5)); }
	inline Vector3_t2243707580  get_startPoint_5() const { return ___startPoint_5; }
	inline Vector3_t2243707580 * get_address_of_startPoint_5() { return &___startPoint_5; }
	inline void set_startPoint_5(Vector3_t2243707580  value)
	{
		___startPoint_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
