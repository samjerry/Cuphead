#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMovement
struct  PlayerMovement_t3166138480  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerMovement::jumpVelocity
	float ___jumpVelocity_2;
	// System.Single PlayerMovement::fallMultiplier
	float ___fallMultiplier_3;
	// System.Single PlayerMovement::lowJumpMultiplier
	float ___lowJumpMultiplier_4;
	// System.Single PlayerMovement::walkSpeed
	float ___walkSpeed_5;
	// System.Single PlayerMovement::dashSpeed
	float ___dashSpeed_6;
	// System.Single PlayerMovement::dashDuration
	float ___dashDuration_7;
	// UnityEngine.SpriteRenderer PlayerMovement::_sr
	SpriteRenderer_t1209076198 * ____sr_8;
	// System.Single PlayerMovement::groundCheckRad
	float ___groundCheckRad_9;
	// UnityEngine.LayerMask PlayerMovement::groundLayer
	LayerMask_t3188175821  ___groundLayer_10;
	// UnityEngine.Transform PlayerMovement::groundCheck
	Transform_t3275118058 * ___groundCheck_11;
	// System.String PlayerMovement::moveDir
	String_t* ___moveDir_12;
	// System.Boolean PlayerMovement::isGrounded
	bool ___isGrounded_13;
	// System.Boolean PlayerMovement::_dJumpPossible
	bool ____dJumpPossible_14;
	// System.Boolean PlayerMovement::renAnim
	bool ___renAnim_15;
	// System.Boolean PlayerMovement::jump
	bool ___jump_16;
	// UnityEngine.Rigidbody2D PlayerMovement::_rb
	Rigidbody2D_t502193897 * ____rb_17;
	// System.Boolean PlayerMovement::isDashing
	bool ___isDashing_18;

public:
	inline static int32_t get_offset_of_jumpVelocity_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___jumpVelocity_2)); }
	inline float get_jumpVelocity_2() const { return ___jumpVelocity_2; }
	inline float* get_address_of_jumpVelocity_2() { return &___jumpVelocity_2; }
	inline void set_jumpVelocity_2(float value)
	{
		___jumpVelocity_2 = value;
	}

	inline static int32_t get_offset_of_fallMultiplier_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___fallMultiplier_3)); }
	inline float get_fallMultiplier_3() const { return ___fallMultiplier_3; }
	inline float* get_address_of_fallMultiplier_3() { return &___fallMultiplier_3; }
	inline void set_fallMultiplier_3(float value)
	{
		___fallMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_lowJumpMultiplier_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___lowJumpMultiplier_4)); }
	inline float get_lowJumpMultiplier_4() const { return ___lowJumpMultiplier_4; }
	inline float* get_address_of_lowJumpMultiplier_4() { return &___lowJumpMultiplier_4; }
	inline void set_lowJumpMultiplier_4(float value)
	{
		___lowJumpMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_walkSpeed_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___walkSpeed_5)); }
	inline float get_walkSpeed_5() const { return ___walkSpeed_5; }
	inline float* get_address_of_walkSpeed_5() { return &___walkSpeed_5; }
	inline void set_walkSpeed_5(float value)
	{
		___walkSpeed_5 = value;
	}

	inline static int32_t get_offset_of_dashSpeed_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___dashSpeed_6)); }
	inline float get_dashSpeed_6() const { return ___dashSpeed_6; }
	inline float* get_address_of_dashSpeed_6() { return &___dashSpeed_6; }
	inline void set_dashSpeed_6(float value)
	{
		___dashSpeed_6 = value;
	}

	inline static int32_t get_offset_of_dashDuration_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___dashDuration_7)); }
	inline float get_dashDuration_7() const { return ___dashDuration_7; }
	inline float* get_address_of_dashDuration_7() { return &___dashDuration_7; }
	inline void set_dashDuration_7(float value)
	{
		___dashDuration_7 = value;
	}

	inline static int32_t get_offset_of__sr_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ____sr_8)); }
	inline SpriteRenderer_t1209076198 * get__sr_8() const { return ____sr_8; }
	inline SpriteRenderer_t1209076198 ** get_address_of__sr_8() { return &____sr_8; }
	inline void set__sr_8(SpriteRenderer_t1209076198 * value)
	{
		____sr_8 = value;
		Il2CppCodeGenWriteBarrier(&____sr_8, value);
	}

	inline static int32_t get_offset_of_groundCheckRad_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___groundCheckRad_9)); }
	inline float get_groundCheckRad_9() const { return ___groundCheckRad_9; }
	inline float* get_address_of_groundCheckRad_9() { return &___groundCheckRad_9; }
	inline void set_groundCheckRad_9(float value)
	{
		___groundCheckRad_9 = value;
	}

	inline static int32_t get_offset_of_groundLayer_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___groundLayer_10)); }
	inline LayerMask_t3188175821  get_groundLayer_10() const { return ___groundLayer_10; }
	inline LayerMask_t3188175821 * get_address_of_groundLayer_10() { return &___groundLayer_10; }
	inline void set_groundLayer_10(LayerMask_t3188175821  value)
	{
		___groundLayer_10 = value;
	}

	inline static int32_t get_offset_of_groundCheck_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___groundCheck_11)); }
	inline Transform_t3275118058 * get_groundCheck_11() const { return ___groundCheck_11; }
	inline Transform_t3275118058 ** get_address_of_groundCheck_11() { return &___groundCheck_11; }
	inline void set_groundCheck_11(Transform_t3275118058 * value)
	{
		___groundCheck_11 = value;
		Il2CppCodeGenWriteBarrier(&___groundCheck_11, value);
	}

	inline static int32_t get_offset_of_moveDir_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___moveDir_12)); }
	inline String_t* get_moveDir_12() const { return ___moveDir_12; }
	inline String_t** get_address_of_moveDir_12() { return &___moveDir_12; }
	inline void set_moveDir_12(String_t* value)
	{
		___moveDir_12 = value;
		Il2CppCodeGenWriteBarrier(&___moveDir_12, value);
	}

	inline static int32_t get_offset_of_isGrounded_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___isGrounded_13)); }
	inline bool get_isGrounded_13() const { return ___isGrounded_13; }
	inline bool* get_address_of_isGrounded_13() { return &___isGrounded_13; }
	inline void set_isGrounded_13(bool value)
	{
		___isGrounded_13 = value;
	}

	inline static int32_t get_offset_of__dJumpPossible_14() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ____dJumpPossible_14)); }
	inline bool get__dJumpPossible_14() const { return ____dJumpPossible_14; }
	inline bool* get_address_of__dJumpPossible_14() { return &____dJumpPossible_14; }
	inline void set__dJumpPossible_14(bool value)
	{
		____dJumpPossible_14 = value;
	}

	inline static int32_t get_offset_of_renAnim_15() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___renAnim_15)); }
	inline bool get_renAnim_15() const { return ___renAnim_15; }
	inline bool* get_address_of_renAnim_15() { return &___renAnim_15; }
	inline void set_renAnim_15(bool value)
	{
		___renAnim_15 = value;
	}

	inline static int32_t get_offset_of_jump_16() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___jump_16)); }
	inline bool get_jump_16() const { return ___jump_16; }
	inline bool* get_address_of_jump_16() { return &___jump_16; }
	inline void set_jump_16(bool value)
	{
		___jump_16 = value;
	}

	inline static int32_t get_offset_of__rb_17() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ____rb_17)); }
	inline Rigidbody2D_t502193897 * get__rb_17() const { return ____rb_17; }
	inline Rigidbody2D_t502193897 ** get_address_of__rb_17() { return &____rb_17; }
	inline void set__rb_17(Rigidbody2D_t502193897 * value)
	{
		____rb_17 = value;
		Il2CppCodeGenWriteBarrier(&____rb_17, value);
	}

	inline static int32_t get_offset_of_isDashing_18() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___isDashing_18)); }
	inline bool get_isDashing_18() const { return ___isDashing_18; }
	inline bool* get_address_of_isDashing_18() { return &___isDashing_18; }
	inline void set_isDashing_18(bool value)
	{
		___isDashing_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
