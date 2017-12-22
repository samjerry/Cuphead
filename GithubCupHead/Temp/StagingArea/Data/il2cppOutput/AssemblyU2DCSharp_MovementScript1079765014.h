#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovementScript
struct  MovementScript_t1079765014  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D MovementScript::_rb
	Rigidbody2D_t502193897 * ____rb_2;
	// UnityEngine.Animator MovementScript::_anim
	Animator_t69676727 * ____anim_3;
	// UnityEngine.GameObject MovementScript::platform
	GameObject_t1756533147 * ___platform_4;

public:
	inline static int32_t get_offset_of__rb_2() { return static_cast<int32_t>(offsetof(MovementScript_t1079765014, ____rb_2)); }
	inline Rigidbody2D_t502193897 * get__rb_2() const { return ____rb_2; }
	inline Rigidbody2D_t502193897 ** get_address_of__rb_2() { return &____rb_2; }
	inline void set__rb_2(Rigidbody2D_t502193897 * value)
	{
		____rb_2 = value;
		Il2CppCodeGenWriteBarrier(&____rb_2, value);
	}

	inline static int32_t get_offset_of__anim_3() { return static_cast<int32_t>(offsetof(MovementScript_t1079765014, ____anim_3)); }
	inline Animator_t69676727 * get__anim_3() const { return ____anim_3; }
	inline Animator_t69676727 ** get_address_of__anim_3() { return &____anim_3; }
	inline void set__anim_3(Animator_t69676727 * value)
	{
		____anim_3 = value;
		Il2CppCodeGenWriteBarrier(&____anim_3, value);
	}

	inline static int32_t get_offset_of_platform_4() { return static_cast<int32_t>(offsetof(MovementScript_t1079765014, ___platform_4)); }
	inline GameObject_t1756533147 * get_platform_4() const { return ___platform_4; }
	inline GameObject_t1756533147 ** get_address_of_platform_4() { return &___platform_4; }
	inline void set_platform_4(GameObject_t1756533147 * value)
	{
		___platform_4 = value;
		Il2CppCodeGenWriteBarrier(&___platform_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
