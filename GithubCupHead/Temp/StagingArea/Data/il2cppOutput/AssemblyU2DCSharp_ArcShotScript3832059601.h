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
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArcShotScript
struct  ArcShotScript_t3832059601  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator ArcShotScript::_anim
	Animator_t69676727 * ____anim_2;
	// UnityEngine.GameObject ArcShotScript::Bullet
	GameObject_t1756533147 * ___Bullet_3;
	// System.Boolean ArcShotScript::CoroutinePlay
	bool ___CoroutinePlay_4;

public:
	inline static int32_t get_offset_of__anim_2() { return static_cast<int32_t>(offsetof(ArcShotScript_t3832059601, ____anim_2)); }
	inline Animator_t69676727 * get__anim_2() const { return ____anim_2; }
	inline Animator_t69676727 ** get_address_of__anim_2() { return &____anim_2; }
	inline void set__anim_2(Animator_t69676727 * value)
	{
		____anim_2 = value;
		Il2CppCodeGenWriteBarrier(&____anim_2, value);
	}

	inline static int32_t get_offset_of_Bullet_3() { return static_cast<int32_t>(offsetof(ArcShotScript_t3832059601, ___Bullet_3)); }
	inline GameObject_t1756533147 * get_Bullet_3() const { return ___Bullet_3; }
	inline GameObject_t1756533147 ** get_address_of_Bullet_3() { return &___Bullet_3; }
	inline void set_Bullet_3(GameObject_t1756533147 * value)
	{
		___Bullet_3 = value;
		Il2CppCodeGenWriteBarrier(&___Bullet_3, value);
	}

	inline static int32_t get_offset_of_CoroutinePlay_4() { return static_cast<int32_t>(offsetof(ArcShotScript_t3832059601, ___CoroutinePlay_4)); }
	inline bool get_CoroutinePlay_4() const { return ___CoroutinePlay_4; }
	inline bool* get_address_of_CoroutinePlay_4() { return &___CoroutinePlay_4; }
	inline void set_CoroutinePlay_4(bool value)
	{
		___CoroutinePlay_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
