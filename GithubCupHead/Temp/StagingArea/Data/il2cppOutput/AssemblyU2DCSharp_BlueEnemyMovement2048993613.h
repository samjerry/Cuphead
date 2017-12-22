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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlueEnemyMovement
struct  BlueEnemyMovement_t2048993613  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BlueEnemyMovement::speed
	float ___speed_2;
	// System.Int32 BlueEnemyMovement::_direction
	int32_t ____direction_3;
	// System.Boolean BlueEnemyMovement::_moveDirect
	bool ____moveDirect_4;
	// UnityEngine.SpriteRenderer BlueEnemyMovement::_sr
	SpriteRenderer_t1209076198 * ____sr_5;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(BlueEnemyMovement_t2048993613, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of__direction_3() { return static_cast<int32_t>(offsetof(BlueEnemyMovement_t2048993613, ____direction_3)); }
	inline int32_t get__direction_3() const { return ____direction_3; }
	inline int32_t* get_address_of__direction_3() { return &____direction_3; }
	inline void set__direction_3(int32_t value)
	{
		____direction_3 = value;
	}

	inline static int32_t get_offset_of__moveDirect_4() { return static_cast<int32_t>(offsetof(BlueEnemyMovement_t2048993613, ____moveDirect_4)); }
	inline bool get__moveDirect_4() const { return ____moveDirect_4; }
	inline bool* get_address_of__moveDirect_4() { return &____moveDirect_4; }
	inline void set__moveDirect_4(bool value)
	{
		____moveDirect_4 = value;
	}

	inline static int32_t get_offset_of__sr_5() { return static_cast<int32_t>(offsetof(BlueEnemyMovement_t2048993613, ____sr_5)); }
	inline SpriteRenderer_t1209076198 * get__sr_5() const { return ____sr_5; }
	inline SpriteRenderer_t1209076198 ** get_address_of__sr_5() { return &____sr_5; }
	inline void set__sr_5(SpriteRenderer_t1209076198 * value)
	{
		____sr_5 = value;
		Il2CppCodeGenWriteBarrier(&____sr_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
