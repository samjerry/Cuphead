#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProjectileMovement
struct  ProjectileMovement_t3044857590  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ProjectileMovement::_speed
	float ____speed_2;
	// UnityEngine.Vector2 ProjectileMovement::_myDirection
	Vector2_t2243707579  ____myDirection_3;
	// System.Boolean ProjectileMovement::_isReady
	bool ____isReady_4;
	// System.Single ProjectileMovement::_timeLeft
	float ____timeLeft_5;

public:
	inline static int32_t get_offset_of__speed_2() { return static_cast<int32_t>(offsetof(ProjectileMovement_t3044857590, ____speed_2)); }
	inline float get__speed_2() const { return ____speed_2; }
	inline float* get_address_of__speed_2() { return &____speed_2; }
	inline void set__speed_2(float value)
	{
		____speed_2 = value;
	}

	inline static int32_t get_offset_of__myDirection_3() { return static_cast<int32_t>(offsetof(ProjectileMovement_t3044857590, ____myDirection_3)); }
	inline Vector2_t2243707579  get__myDirection_3() const { return ____myDirection_3; }
	inline Vector2_t2243707579 * get_address_of__myDirection_3() { return &____myDirection_3; }
	inline void set__myDirection_3(Vector2_t2243707579  value)
	{
		____myDirection_3 = value;
	}

	inline static int32_t get_offset_of__isReady_4() { return static_cast<int32_t>(offsetof(ProjectileMovement_t3044857590, ____isReady_4)); }
	inline bool get__isReady_4() const { return ____isReady_4; }
	inline bool* get_address_of__isReady_4() { return &____isReady_4; }
	inline void set__isReady_4(bool value)
	{
		____isReady_4 = value;
	}

	inline static int32_t get_offset_of__timeLeft_5() { return static_cast<int32_t>(offsetof(ProjectileMovement_t3044857590, ____timeLeft_5)); }
	inline float get__timeLeft_5() const { return ____timeLeft_5; }
	inline float* get_address_of__timeLeft_5() { return &____timeLeft_5; }
	inline void set__timeLeft_5(float value)
	{
		____timeLeft_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
