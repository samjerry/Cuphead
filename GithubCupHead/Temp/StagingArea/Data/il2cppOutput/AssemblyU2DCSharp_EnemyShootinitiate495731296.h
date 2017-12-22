#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyShootinitiate
struct  EnemyShootinitiate_t495731296  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.SpriteRenderer EnemyShootinitiate::_sr
	SpriteRenderer_t1209076198 * ____sr_2;
	// UnityEngine.GameObject EnemyShootinitiate::mushroomBall
	GameObject_t1756533147 * ___mushroomBall_3;
	// UnityEngine.GameObject EnemyShootinitiate::_player
	GameObject_t1756533147 * ____player_4;
	// System.Single EnemyShootinitiate::_timeLeft
	float ____timeLeft_5;
	// System.Single EnemyShootinitiate::range
	float ___range_6;
	// System.Boolean EnemyShootinitiate::inRange
	bool ___inRange_7;
	// System.Boolean EnemyShootinitiate::isShooting
	bool ___isShooting_8;

public:
	inline static int32_t get_offset_of__sr_2() { return static_cast<int32_t>(offsetof(EnemyShootinitiate_t495731296, ____sr_2)); }
	inline SpriteRenderer_t1209076198 * get__sr_2() const { return ____sr_2; }
	inline SpriteRenderer_t1209076198 ** get_address_of__sr_2() { return &____sr_2; }
	inline void set__sr_2(SpriteRenderer_t1209076198 * value)
	{
		____sr_2 = value;
		Il2CppCodeGenWriteBarrier(&____sr_2, value);
	}

	inline static int32_t get_offset_of_mushroomBall_3() { return static_cast<int32_t>(offsetof(EnemyShootinitiate_t495731296, ___mushroomBall_3)); }
	inline GameObject_t1756533147 * get_mushroomBall_3() const { return ___mushroomBall_3; }
	inline GameObject_t1756533147 ** get_address_of_mushroomBall_3() { return &___mushroomBall_3; }
	inline void set_mushroomBall_3(GameObject_t1756533147 * value)
	{
		___mushroomBall_3 = value;
		Il2CppCodeGenWriteBarrier(&___mushroomBall_3, value);
	}

	inline static int32_t get_offset_of__player_4() { return static_cast<int32_t>(offsetof(EnemyShootinitiate_t495731296, ____player_4)); }
	inline GameObject_t1756533147 * get__player_4() const { return ____player_4; }
	inline GameObject_t1756533147 ** get_address_of__player_4() { return &____player_4; }
	inline void set__player_4(GameObject_t1756533147 * value)
	{
		____player_4 = value;
		Il2CppCodeGenWriteBarrier(&____player_4, value);
	}

	inline static int32_t get_offset_of__timeLeft_5() { return static_cast<int32_t>(offsetof(EnemyShootinitiate_t495731296, ____timeLeft_5)); }
	inline float get__timeLeft_5() const { return ____timeLeft_5; }
	inline float* get_address_of__timeLeft_5() { return &____timeLeft_5; }
	inline void set__timeLeft_5(float value)
	{
		____timeLeft_5 = value;
	}

	inline static int32_t get_offset_of_range_6() { return static_cast<int32_t>(offsetof(EnemyShootinitiate_t495731296, ___range_6)); }
	inline float get_range_6() const { return ___range_6; }
	inline float* get_address_of_range_6() { return &___range_6; }
	inline void set_range_6(float value)
	{
		___range_6 = value;
	}

	inline static int32_t get_offset_of_inRange_7() { return static_cast<int32_t>(offsetof(EnemyShootinitiate_t495731296, ___inRange_7)); }
	inline bool get_inRange_7() const { return ___inRange_7; }
	inline bool* get_address_of_inRange_7() { return &___inRange_7; }
	inline void set_inRange_7(bool value)
	{
		___inRange_7 = value;
	}

	inline static int32_t get_offset_of_isShooting_8() { return static_cast<int32_t>(offsetof(EnemyShootinitiate_t495731296, ___isShooting_8)); }
	inline bool get_isShooting_8() const { return ___isShooting_8; }
	inline bool* get_address_of_isShooting_8() { return &___isShooting_8; }
	inline void set_isShooting_8(bool value)
	{
		___isShooting_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
