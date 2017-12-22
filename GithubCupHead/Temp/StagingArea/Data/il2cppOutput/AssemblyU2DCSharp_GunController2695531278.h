#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// BulletController
struct BulletController_t174416364;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GunController
struct  GunController_t2695531278  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GunController::isFiring
	bool ___isFiring_2;
	// BulletController GunController::bullet
	BulletController_t174416364 * ___bullet_3;
	// System.Single GunController::bulletSpd
	float ___bulletSpd_4;
	// System.Single GunController::bulletCD
	float ___bulletCD_5;
	// UnityEngine.Transform GunController::bulletOrigin
	Transform_t3275118058 * ___bulletOrigin_6;
	// System.Single GunController::_shotCount
	float ____shotCount_7;
	// BulletController GunController::_newBullet
	BulletController_t174416364 * ____newBullet_8;

public:
	inline static int32_t get_offset_of_isFiring_2() { return static_cast<int32_t>(offsetof(GunController_t2695531278, ___isFiring_2)); }
	inline bool get_isFiring_2() const { return ___isFiring_2; }
	inline bool* get_address_of_isFiring_2() { return &___isFiring_2; }
	inline void set_isFiring_2(bool value)
	{
		___isFiring_2 = value;
	}

	inline static int32_t get_offset_of_bullet_3() { return static_cast<int32_t>(offsetof(GunController_t2695531278, ___bullet_3)); }
	inline BulletController_t174416364 * get_bullet_3() const { return ___bullet_3; }
	inline BulletController_t174416364 ** get_address_of_bullet_3() { return &___bullet_3; }
	inline void set_bullet_3(BulletController_t174416364 * value)
	{
		___bullet_3 = value;
		Il2CppCodeGenWriteBarrier(&___bullet_3, value);
	}

	inline static int32_t get_offset_of_bulletSpd_4() { return static_cast<int32_t>(offsetof(GunController_t2695531278, ___bulletSpd_4)); }
	inline float get_bulletSpd_4() const { return ___bulletSpd_4; }
	inline float* get_address_of_bulletSpd_4() { return &___bulletSpd_4; }
	inline void set_bulletSpd_4(float value)
	{
		___bulletSpd_4 = value;
	}

	inline static int32_t get_offset_of_bulletCD_5() { return static_cast<int32_t>(offsetof(GunController_t2695531278, ___bulletCD_5)); }
	inline float get_bulletCD_5() const { return ___bulletCD_5; }
	inline float* get_address_of_bulletCD_5() { return &___bulletCD_5; }
	inline void set_bulletCD_5(float value)
	{
		___bulletCD_5 = value;
	}

	inline static int32_t get_offset_of_bulletOrigin_6() { return static_cast<int32_t>(offsetof(GunController_t2695531278, ___bulletOrigin_6)); }
	inline Transform_t3275118058 * get_bulletOrigin_6() const { return ___bulletOrigin_6; }
	inline Transform_t3275118058 ** get_address_of_bulletOrigin_6() { return &___bulletOrigin_6; }
	inline void set_bulletOrigin_6(Transform_t3275118058 * value)
	{
		___bulletOrigin_6 = value;
		Il2CppCodeGenWriteBarrier(&___bulletOrigin_6, value);
	}

	inline static int32_t get_offset_of__shotCount_7() { return static_cast<int32_t>(offsetof(GunController_t2695531278, ____shotCount_7)); }
	inline float get__shotCount_7() const { return ____shotCount_7; }
	inline float* get_address_of__shotCount_7() { return &____shotCount_7; }
	inline void set__shotCount_7(float value)
	{
		____shotCount_7 = value;
	}

	inline static int32_t get_offset_of__newBullet_8() { return static_cast<int32_t>(offsetof(GunController_t2695531278, ____newBullet_8)); }
	inline BulletController_t174416364 * get__newBullet_8() const { return ____newBullet_8; }
	inline BulletController_t174416364 ** get_address_of__newBullet_8() { return &____newBullet_8; }
	inline void set__newBullet_8(BulletController_t174416364 * value)
	{
		____newBullet_8 = value;
		Il2CppCodeGenWriteBarrier(&____newBullet_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
