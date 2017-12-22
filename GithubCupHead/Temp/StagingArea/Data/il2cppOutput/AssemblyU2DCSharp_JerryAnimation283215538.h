#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PlayerMovement
struct PlayerMovement_t3166138480;
// PlayerShoot
struct PlayerShoot_t2952253884;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JerryAnimation
struct  JerryAnimation_t283215538  : public MonoBehaviour_t1158329972
{
public:
	// PlayerMovement JerryAnimation::move
	PlayerMovement_t3166138480 * ___move_2;
	// PlayerShoot JerryAnimation::shoot
	PlayerShoot_t2952253884 * ___shoot_3;
	// UnityEngine.Animator JerryAnimation::_anim
	Animator_t69676727 * ____anim_4;

public:
	inline static int32_t get_offset_of_move_2() { return static_cast<int32_t>(offsetof(JerryAnimation_t283215538, ___move_2)); }
	inline PlayerMovement_t3166138480 * get_move_2() const { return ___move_2; }
	inline PlayerMovement_t3166138480 ** get_address_of_move_2() { return &___move_2; }
	inline void set_move_2(PlayerMovement_t3166138480 * value)
	{
		___move_2 = value;
		Il2CppCodeGenWriteBarrier(&___move_2, value);
	}

	inline static int32_t get_offset_of_shoot_3() { return static_cast<int32_t>(offsetof(JerryAnimation_t283215538, ___shoot_3)); }
	inline PlayerShoot_t2952253884 * get_shoot_3() const { return ___shoot_3; }
	inline PlayerShoot_t2952253884 ** get_address_of_shoot_3() { return &___shoot_3; }
	inline void set_shoot_3(PlayerShoot_t2952253884 * value)
	{
		___shoot_3 = value;
		Il2CppCodeGenWriteBarrier(&___shoot_3, value);
	}

	inline static int32_t get_offset_of__anim_4() { return static_cast<int32_t>(offsetof(JerryAnimation_t283215538, ____anim_4)); }
	inline Animator_t69676727 * get__anim_4() const { return ____anim_4; }
	inline Animator_t69676727 ** get_address_of__anim_4() { return &____anim_4; }
	inline void set__anim_4(Animator_t69676727 * value)
	{
		____anim_4 = value;
		Il2CppCodeGenWriteBarrier(&____anim_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
