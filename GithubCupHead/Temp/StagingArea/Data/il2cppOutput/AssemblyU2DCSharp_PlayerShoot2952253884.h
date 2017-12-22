#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Transform
struct Transform_t3275118058;
// GunController
struct GunController_t2695531278;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerShoot
struct  PlayerShoot_t2952253884  : public MonoBehaviour_t1158329972
{
public:
	// System.String PlayerShoot::bulDir
	String_t* ___bulDir_2;
	// System.Boolean PlayerShoot::isShooting
	bool ___isShooting_3;
	// System.Boolean PlayerShoot::renAnim
	bool ___renAnim_4;
	// UnityEngine.Rigidbody2D PlayerShoot::bullet
	Rigidbody2D_t502193897 * ___bullet_5;
	// System.Single PlayerShoot::_maxSpd
	float ____maxSpd_6;
	// UnityEngine.Transform PlayerShoot::_bulDir
	Transform_t3275118058 * ____bulDir_7;
	// UnityEngine.Transform PlayerShoot::_bulOrigin
	Transform_t3275118058 * ____bulOrigin_8;
	// UnityEngine.Rigidbody2D PlayerShoot::_bulInstance
	Rigidbody2D_t502193897 * ____bulInstance_9;
	// GunController PlayerShoot::gun
	GunController_t2695531278 * ___gun_10;

public:
	inline static int32_t get_offset_of_bulDir_2() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___bulDir_2)); }
	inline String_t* get_bulDir_2() const { return ___bulDir_2; }
	inline String_t** get_address_of_bulDir_2() { return &___bulDir_2; }
	inline void set_bulDir_2(String_t* value)
	{
		___bulDir_2 = value;
		Il2CppCodeGenWriteBarrier(&___bulDir_2, value);
	}

	inline static int32_t get_offset_of_isShooting_3() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___isShooting_3)); }
	inline bool get_isShooting_3() const { return ___isShooting_3; }
	inline bool* get_address_of_isShooting_3() { return &___isShooting_3; }
	inline void set_isShooting_3(bool value)
	{
		___isShooting_3 = value;
	}

	inline static int32_t get_offset_of_renAnim_4() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___renAnim_4)); }
	inline bool get_renAnim_4() const { return ___renAnim_4; }
	inline bool* get_address_of_renAnim_4() { return &___renAnim_4; }
	inline void set_renAnim_4(bool value)
	{
		___renAnim_4 = value;
	}

	inline static int32_t get_offset_of_bullet_5() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___bullet_5)); }
	inline Rigidbody2D_t502193897 * get_bullet_5() const { return ___bullet_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_bullet_5() { return &___bullet_5; }
	inline void set_bullet_5(Rigidbody2D_t502193897 * value)
	{
		___bullet_5 = value;
		Il2CppCodeGenWriteBarrier(&___bullet_5, value);
	}

	inline static int32_t get_offset_of__maxSpd_6() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ____maxSpd_6)); }
	inline float get__maxSpd_6() const { return ____maxSpd_6; }
	inline float* get_address_of__maxSpd_6() { return &____maxSpd_6; }
	inline void set__maxSpd_6(float value)
	{
		____maxSpd_6 = value;
	}

	inline static int32_t get_offset_of__bulDir_7() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ____bulDir_7)); }
	inline Transform_t3275118058 * get__bulDir_7() const { return ____bulDir_7; }
	inline Transform_t3275118058 ** get_address_of__bulDir_7() { return &____bulDir_7; }
	inline void set__bulDir_7(Transform_t3275118058 * value)
	{
		____bulDir_7 = value;
		Il2CppCodeGenWriteBarrier(&____bulDir_7, value);
	}

	inline static int32_t get_offset_of__bulOrigin_8() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ____bulOrigin_8)); }
	inline Transform_t3275118058 * get__bulOrigin_8() const { return ____bulOrigin_8; }
	inline Transform_t3275118058 ** get_address_of__bulOrigin_8() { return &____bulOrigin_8; }
	inline void set__bulOrigin_8(Transform_t3275118058 * value)
	{
		____bulOrigin_8 = value;
		Il2CppCodeGenWriteBarrier(&____bulOrigin_8, value);
	}

	inline static int32_t get_offset_of__bulInstance_9() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ____bulInstance_9)); }
	inline Rigidbody2D_t502193897 * get__bulInstance_9() const { return ____bulInstance_9; }
	inline Rigidbody2D_t502193897 ** get_address_of__bulInstance_9() { return &____bulInstance_9; }
	inline void set__bulInstance_9(Rigidbody2D_t502193897 * value)
	{
		____bulInstance_9 = value;
		Il2CppCodeGenWriteBarrier(&____bulInstance_9, value);
	}

	inline static int32_t get_offset_of_gun_10() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___gun_10)); }
	inline GunController_t2695531278 * get_gun_10() const { return ___gun_10; }
	inline GunController_t2695531278 ** get_address_of_gun_10() { return &___gun_10; }
	inline void set_gun_10(GunController_t2695531278 * value)
	{
		___gun_10 = value;
		Il2CppCodeGenWriteBarrier(&___gun_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
