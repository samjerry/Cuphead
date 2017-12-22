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

// PlayerAnim
struct  PlayerAnim_t693015272  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean PlayerAnim::running
	bool ___running_2;
	// System.Boolean PlayerAnim::shoot
	bool ___shoot_3;
	// System.Boolean PlayerAnim::jump
	bool ___jump_4;
	// UnityEngine.Animator PlayerAnim::_anim
	Animator_t69676727 * ____anim_5;
	// System.Int32 PlayerAnim::_IsRun
	int32_t ____IsRun_6;
	// System.Int32 PlayerAnim::_IsNotRun
	int32_t ____IsNotRun_7;
	// System.Int32 PlayerAnim::_Jump
	int32_t ____Jump_8;
	// System.Int32 PlayerAnim::_FalseJump
	int32_t ____FalseJump_9;
	// System.Int32 PlayerAnim::_RunJump
	int32_t ____RunJump_10;

public:
	inline static int32_t get_offset_of_running_2() { return static_cast<int32_t>(offsetof(PlayerAnim_t693015272, ___running_2)); }
	inline bool get_running_2() const { return ___running_2; }
	inline bool* get_address_of_running_2() { return &___running_2; }
	inline void set_running_2(bool value)
	{
		___running_2 = value;
	}

	inline static int32_t get_offset_of_shoot_3() { return static_cast<int32_t>(offsetof(PlayerAnim_t693015272, ___shoot_3)); }
	inline bool get_shoot_3() const { return ___shoot_3; }
	inline bool* get_address_of_shoot_3() { return &___shoot_3; }
	inline void set_shoot_3(bool value)
	{
		___shoot_3 = value;
	}

	inline static int32_t get_offset_of_jump_4() { return static_cast<int32_t>(offsetof(PlayerAnim_t693015272, ___jump_4)); }
	inline bool get_jump_4() const { return ___jump_4; }
	inline bool* get_address_of_jump_4() { return &___jump_4; }
	inline void set_jump_4(bool value)
	{
		___jump_4 = value;
	}

	inline static int32_t get_offset_of__anim_5() { return static_cast<int32_t>(offsetof(PlayerAnim_t693015272, ____anim_5)); }
	inline Animator_t69676727 * get__anim_5() const { return ____anim_5; }
	inline Animator_t69676727 ** get_address_of__anim_5() { return &____anim_5; }
	inline void set__anim_5(Animator_t69676727 * value)
	{
		____anim_5 = value;
		Il2CppCodeGenWriteBarrier(&____anim_5, value);
	}

	inline static int32_t get_offset_of__IsRun_6() { return static_cast<int32_t>(offsetof(PlayerAnim_t693015272, ____IsRun_6)); }
	inline int32_t get__IsRun_6() const { return ____IsRun_6; }
	inline int32_t* get_address_of__IsRun_6() { return &____IsRun_6; }
	inline void set__IsRun_6(int32_t value)
	{
		____IsRun_6 = value;
	}

	inline static int32_t get_offset_of__IsNotRun_7() { return static_cast<int32_t>(offsetof(PlayerAnim_t693015272, ____IsNotRun_7)); }
	inline int32_t get__IsNotRun_7() const { return ____IsNotRun_7; }
	inline int32_t* get_address_of__IsNotRun_7() { return &____IsNotRun_7; }
	inline void set__IsNotRun_7(int32_t value)
	{
		____IsNotRun_7 = value;
	}

	inline static int32_t get_offset_of__Jump_8() { return static_cast<int32_t>(offsetof(PlayerAnim_t693015272, ____Jump_8)); }
	inline int32_t get__Jump_8() const { return ____Jump_8; }
	inline int32_t* get_address_of__Jump_8() { return &____Jump_8; }
	inline void set__Jump_8(int32_t value)
	{
		____Jump_8 = value;
	}

	inline static int32_t get_offset_of__FalseJump_9() { return static_cast<int32_t>(offsetof(PlayerAnim_t693015272, ____FalseJump_9)); }
	inline int32_t get__FalseJump_9() const { return ____FalseJump_9; }
	inline int32_t* get_address_of__FalseJump_9() { return &____FalseJump_9; }
	inline void set__FalseJump_9(int32_t value)
	{
		____FalseJump_9 = value;
	}

	inline static int32_t get_offset_of__RunJump_10() { return static_cast<int32_t>(offsetof(PlayerAnim_t693015272, ____RunJump_10)); }
	inline int32_t get__RunJump_10() const { return ____RunJump_10; }
	inline int32_t* get_address_of__RunJump_10() { return &____RunJump_10; }
	inline void set__RunJump_10(int32_t value)
	{
		____RunJump_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
