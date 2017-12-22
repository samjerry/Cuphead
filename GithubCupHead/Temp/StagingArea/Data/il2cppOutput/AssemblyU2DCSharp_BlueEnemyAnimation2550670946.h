#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlueEnemyAnimation
struct  BlueEnemyAnimation_t2550670946  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BlueEnemyAnimation::animHp
	float ___animHp_2;
	// UnityEngine.Animator BlueEnemyAnimation::_anim
	Animator_t69676727 * ____anim_3;
	// System.Int32 BlueEnemyAnimation::_death
	int32_t ____death_4;
	// System.Int32 BlueEnemyAnimation::_alive
	int32_t ____alive_5;

public:
	inline static int32_t get_offset_of_animHp_2() { return static_cast<int32_t>(offsetof(BlueEnemyAnimation_t2550670946, ___animHp_2)); }
	inline float get_animHp_2() const { return ___animHp_2; }
	inline float* get_address_of_animHp_2() { return &___animHp_2; }
	inline void set_animHp_2(float value)
	{
		___animHp_2 = value;
	}

	inline static int32_t get_offset_of__anim_3() { return static_cast<int32_t>(offsetof(BlueEnemyAnimation_t2550670946, ____anim_3)); }
	inline Animator_t69676727 * get__anim_3() const { return ____anim_3; }
	inline Animator_t69676727 ** get_address_of__anim_3() { return &____anim_3; }
	inline void set__anim_3(Animator_t69676727 * value)
	{
		____anim_3 = value;
		Il2CppCodeGenWriteBarrier(&____anim_3, value);
	}

	inline static int32_t get_offset_of__death_4() { return static_cast<int32_t>(offsetof(BlueEnemyAnimation_t2550670946, ____death_4)); }
	inline int32_t get__death_4() const { return ____death_4; }
	inline int32_t* get_address_of__death_4() { return &____death_4; }
	inline void set__death_4(int32_t value)
	{
		____death_4 = value;
	}

	inline static int32_t get_offset_of__alive_5() { return static_cast<int32_t>(offsetof(BlueEnemyAnimation_t2550670946, ____alive_5)); }
	inline int32_t get__alive_5() const { return ____alive_5; }
	inline int32_t* get_address_of__alive_5() { return &____alive_5; }
	inline void set__alive_5(int32_t value)
	{
		____alive_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
