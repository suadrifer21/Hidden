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

// BouncingBall
struct  BouncingBall_t3151945374  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BouncingBall::Acceleration
	float ___Acceleration_2;
	// System.Single BouncingBall::HorizVelocity
	float ___HorizVelocity_3;
	// System.Single BouncingBall::Wall
	float ___Wall_4;
	// System.Single BouncingBall::Radius
	float ___Radius_5;
	// System.Single BouncingBall::RotationSpeed
	float ___RotationSpeed_6;
	// UnityEngine.Vector3 BouncingBall::Velocity
	Vector3_t2243707580  ___Velocity_7;
	// System.Single BouncingBall::MaxVelocity
	float ___MaxVelocity_8;

public:
	inline static int32_t get_offset_of_Acceleration_2() { return static_cast<int32_t>(offsetof(BouncingBall_t3151945374, ___Acceleration_2)); }
	inline float get_Acceleration_2() const { return ___Acceleration_2; }
	inline float* get_address_of_Acceleration_2() { return &___Acceleration_2; }
	inline void set_Acceleration_2(float value)
	{
		___Acceleration_2 = value;
	}

	inline static int32_t get_offset_of_HorizVelocity_3() { return static_cast<int32_t>(offsetof(BouncingBall_t3151945374, ___HorizVelocity_3)); }
	inline float get_HorizVelocity_3() const { return ___HorizVelocity_3; }
	inline float* get_address_of_HorizVelocity_3() { return &___HorizVelocity_3; }
	inline void set_HorizVelocity_3(float value)
	{
		___HorizVelocity_3 = value;
	}

	inline static int32_t get_offset_of_Wall_4() { return static_cast<int32_t>(offsetof(BouncingBall_t3151945374, ___Wall_4)); }
	inline float get_Wall_4() const { return ___Wall_4; }
	inline float* get_address_of_Wall_4() { return &___Wall_4; }
	inline void set_Wall_4(float value)
	{
		___Wall_4 = value;
	}

	inline static int32_t get_offset_of_Radius_5() { return static_cast<int32_t>(offsetof(BouncingBall_t3151945374, ___Radius_5)); }
	inline float get_Radius_5() const { return ___Radius_5; }
	inline float* get_address_of_Radius_5() { return &___Radius_5; }
	inline void set_Radius_5(float value)
	{
		___Radius_5 = value;
	}

	inline static int32_t get_offset_of_RotationSpeed_6() { return static_cast<int32_t>(offsetof(BouncingBall_t3151945374, ___RotationSpeed_6)); }
	inline float get_RotationSpeed_6() const { return ___RotationSpeed_6; }
	inline float* get_address_of_RotationSpeed_6() { return &___RotationSpeed_6; }
	inline void set_RotationSpeed_6(float value)
	{
		___RotationSpeed_6 = value;
	}

	inline static int32_t get_offset_of_Velocity_7() { return static_cast<int32_t>(offsetof(BouncingBall_t3151945374, ___Velocity_7)); }
	inline Vector3_t2243707580  get_Velocity_7() const { return ___Velocity_7; }
	inline Vector3_t2243707580 * get_address_of_Velocity_7() { return &___Velocity_7; }
	inline void set_Velocity_7(Vector3_t2243707580  value)
	{
		___Velocity_7 = value;
	}

	inline static int32_t get_offset_of_MaxVelocity_8() { return static_cast<int32_t>(offsetof(BouncingBall_t3151945374, ___MaxVelocity_8)); }
	inline float get_MaxVelocity_8() const { return ___MaxVelocity_8; }
	inline float* get_address_of_MaxVelocity_8() { return &___MaxVelocity_8; }
	inline void set_MaxVelocity_8(float value)
	{
		___MaxVelocity_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
