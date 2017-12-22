#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletController
struct  BulletController_t174416364  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BulletController::speed
	float ___speed_2;
	// System.Single BulletController::lifeTime
	float ___lifeTime_3;
	// UnityEngine.Vector3 BulletController::shootDir
	Vector3_t2243707580  ___shootDir_4;
	// UnityEngine.Transform BulletController::aimDir
	Transform_t3275118058 * ___aimDir_5;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(BulletController_t174416364, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_lifeTime_3() { return static_cast<int32_t>(offsetof(BulletController_t174416364, ___lifeTime_3)); }
	inline float get_lifeTime_3() const { return ___lifeTime_3; }
	inline float* get_address_of_lifeTime_3() { return &___lifeTime_3; }
	inline void set_lifeTime_3(float value)
	{
		___lifeTime_3 = value;
	}

	inline static int32_t get_offset_of_shootDir_4() { return static_cast<int32_t>(offsetof(BulletController_t174416364, ___shootDir_4)); }
	inline Vector3_t2243707580  get_shootDir_4() const { return ___shootDir_4; }
	inline Vector3_t2243707580 * get_address_of_shootDir_4() { return &___shootDir_4; }
	inline void set_shootDir_4(Vector3_t2243707580  value)
	{
		___shootDir_4 = value;
	}

	inline static int32_t get_offset_of_aimDir_5() { return static_cast<int32_t>(offsetof(BulletController_t174416364, ___aimDir_5)); }
	inline Transform_t3275118058 * get_aimDir_5() const { return ___aimDir_5; }
	inline Transform_t3275118058 ** get_address_of_aimDir_5() { return &___aimDir_5; }
	inline void set_aimDir_5(Transform_t3275118058 * value)
	{
		___aimDir_5 = value;
		Il2CppCodeGenWriteBarrier(&___aimDir_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
