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

// MushroomHP
struct  MushroomHP_t1111380810  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 MushroomHP::_IsDead
	int32_t ____IsDead_2;
	// UnityEngine.Animator MushroomHP::_anim
	Animator_t69676727 * ____anim_3;
	// System.Int32 MushroomHP::mushroomHP
	int32_t ___mushroomHP_4;

public:
	inline static int32_t get_offset_of__IsDead_2() { return static_cast<int32_t>(offsetof(MushroomHP_t1111380810, ____IsDead_2)); }
	inline int32_t get__IsDead_2() const { return ____IsDead_2; }
	inline int32_t* get_address_of__IsDead_2() { return &____IsDead_2; }
	inline void set__IsDead_2(int32_t value)
	{
		____IsDead_2 = value;
	}

	inline static int32_t get_offset_of__anim_3() { return static_cast<int32_t>(offsetof(MushroomHP_t1111380810, ____anim_3)); }
	inline Animator_t69676727 * get__anim_3() const { return ____anim_3; }
	inline Animator_t69676727 ** get_address_of__anim_3() { return &____anim_3; }
	inline void set__anim_3(Animator_t69676727 * value)
	{
		____anim_3 = value;
		Il2CppCodeGenWriteBarrier(&____anim_3, value);
	}

	inline static int32_t get_offset_of_mushroomHP_4() { return static_cast<int32_t>(offsetof(MushroomHP_t1111380810, ___mushroomHP_4)); }
	inline int32_t get_mushroomHP_4() const { return ___mushroomHP_4; }
	inline int32_t* get_address_of_mushroomHP_4() { return &___mushroomHP_4; }
	inline void set_mushroomHP_4(int32_t value)
	{
		___mushroomHP_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
