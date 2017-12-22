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

// MushroomAnim
struct  MushroomAnim_t698676853  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean MushroomAnim::radius
	bool ___radius_2;
	// System.Boolean MushroomAnim::shooting
	bool ___shooting_3;
	// System.Single MushroomAnim::animTime
	float ___animTime_4;
	// UnityEngine.Animator MushroomAnim::_anim
	Animator_t69676727 * ____anim_5;
	// System.Int32 MushroomAnim::_inRadius
	int32_t ____inRadius_6;
	// System.Int32 MushroomAnim::_outRadius
	int32_t ____outRadius_7;
	// System.Int32 MushroomAnim::_isAttacking
	int32_t ____isAttacking_8;
	// System.Int32 MushroomAnim::_isNotAttacking
	int32_t ____isNotAttacking_9;

public:
	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(MushroomAnim_t698676853, ___radius_2)); }
	inline bool get_radius_2() const { return ___radius_2; }
	inline bool* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(bool value)
	{
		___radius_2 = value;
	}

	inline static int32_t get_offset_of_shooting_3() { return static_cast<int32_t>(offsetof(MushroomAnim_t698676853, ___shooting_3)); }
	inline bool get_shooting_3() const { return ___shooting_3; }
	inline bool* get_address_of_shooting_3() { return &___shooting_3; }
	inline void set_shooting_3(bool value)
	{
		___shooting_3 = value;
	}

	inline static int32_t get_offset_of_animTime_4() { return static_cast<int32_t>(offsetof(MushroomAnim_t698676853, ___animTime_4)); }
	inline float get_animTime_4() const { return ___animTime_4; }
	inline float* get_address_of_animTime_4() { return &___animTime_4; }
	inline void set_animTime_4(float value)
	{
		___animTime_4 = value;
	}

	inline static int32_t get_offset_of__anim_5() { return static_cast<int32_t>(offsetof(MushroomAnim_t698676853, ____anim_5)); }
	inline Animator_t69676727 * get__anim_5() const { return ____anim_5; }
	inline Animator_t69676727 ** get_address_of__anim_5() { return &____anim_5; }
	inline void set__anim_5(Animator_t69676727 * value)
	{
		____anim_5 = value;
		Il2CppCodeGenWriteBarrier(&____anim_5, value);
	}

	inline static int32_t get_offset_of__inRadius_6() { return static_cast<int32_t>(offsetof(MushroomAnim_t698676853, ____inRadius_6)); }
	inline int32_t get__inRadius_6() const { return ____inRadius_6; }
	inline int32_t* get_address_of__inRadius_6() { return &____inRadius_6; }
	inline void set__inRadius_6(int32_t value)
	{
		____inRadius_6 = value;
	}

	inline static int32_t get_offset_of__outRadius_7() { return static_cast<int32_t>(offsetof(MushroomAnim_t698676853, ____outRadius_7)); }
	inline int32_t get__outRadius_7() const { return ____outRadius_7; }
	inline int32_t* get_address_of__outRadius_7() { return &____outRadius_7; }
	inline void set__outRadius_7(int32_t value)
	{
		____outRadius_7 = value;
	}

	inline static int32_t get_offset_of__isAttacking_8() { return static_cast<int32_t>(offsetof(MushroomAnim_t698676853, ____isAttacking_8)); }
	inline int32_t get__isAttacking_8() const { return ____isAttacking_8; }
	inline int32_t* get_address_of__isAttacking_8() { return &____isAttacking_8; }
	inline void set__isAttacking_8(int32_t value)
	{
		____isAttacking_8 = value;
	}

	inline static int32_t get_offset_of__isNotAttacking_9() { return static_cast<int32_t>(offsetof(MushroomAnim_t698676853, ____isNotAttacking_9)); }
	inline int32_t get__isNotAttacking_9() const { return ____isNotAttacking_9; }
	inline int32_t* get_address_of__isNotAttacking_9() { return &____isNotAttacking_9; }
	inline void set__isNotAttacking_9(int32_t value)
	{
		____isNotAttacking_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
