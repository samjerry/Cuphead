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

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletScript
struct  BulletScript_t1317259639  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D BulletScript::_rb
	Rigidbody2D_t502193897 * ____rb_2;
	// UnityEngine.GameObject BulletScript::Explosion
	GameObject_t1756533147 * ___Explosion_3;
	// UnityEngine.Vector3 BulletScript::_targetPosition
	Vector3_t2243707580  ____targetPosition_4;
	// UnityEngine.Vector3 BulletScript::_velocity
	Vector3_t2243707580  ____velocity_5;
	// UnityEngine.Vector3 BulletScript::_desiredVelocity
	Vector3_t2243707580  ____desiredVelocity_6;
	// UnityEngine.Vector3 BulletScript::_steering
	Vector3_t2243707580  ____steering_7;
	// System.Single BulletScript::_maxVelocity
	float ____maxVelocity_8;

public:
	inline static int32_t get_offset_of__rb_2() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ____rb_2)); }
	inline Rigidbody2D_t502193897 * get__rb_2() const { return ____rb_2; }
	inline Rigidbody2D_t502193897 ** get_address_of__rb_2() { return &____rb_2; }
	inline void set__rb_2(Rigidbody2D_t502193897 * value)
	{
		____rb_2 = value;
		Il2CppCodeGenWriteBarrier(&____rb_2, value);
	}

	inline static int32_t get_offset_of_Explosion_3() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ___Explosion_3)); }
	inline GameObject_t1756533147 * get_Explosion_3() const { return ___Explosion_3; }
	inline GameObject_t1756533147 ** get_address_of_Explosion_3() { return &___Explosion_3; }
	inline void set_Explosion_3(GameObject_t1756533147 * value)
	{
		___Explosion_3 = value;
		Il2CppCodeGenWriteBarrier(&___Explosion_3, value);
	}

	inline static int32_t get_offset_of__targetPosition_4() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ____targetPosition_4)); }
	inline Vector3_t2243707580  get__targetPosition_4() const { return ____targetPosition_4; }
	inline Vector3_t2243707580 * get_address_of__targetPosition_4() { return &____targetPosition_4; }
	inline void set__targetPosition_4(Vector3_t2243707580  value)
	{
		____targetPosition_4 = value;
	}

	inline static int32_t get_offset_of__velocity_5() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ____velocity_5)); }
	inline Vector3_t2243707580  get__velocity_5() const { return ____velocity_5; }
	inline Vector3_t2243707580 * get_address_of__velocity_5() { return &____velocity_5; }
	inline void set__velocity_5(Vector3_t2243707580  value)
	{
		____velocity_5 = value;
	}

	inline static int32_t get_offset_of__desiredVelocity_6() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ____desiredVelocity_6)); }
	inline Vector3_t2243707580  get__desiredVelocity_6() const { return ____desiredVelocity_6; }
	inline Vector3_t2243707580 * get_address_of__desiredVelocity_6() { return &____desiredVelocity_6; }
	inline void set__desiredVelocity_6(Vector3_t2243707580  value)
	{
		____desiredVelocity_6 = value;
	}

	inline static int32_t get_offset_of__steering_7() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ____steering_7)); }
	inline Vector3_t2243707580  get__steering_7() const { return ____steering_7; }
	inline Vector3_t2243707580 * get_address_of__steering_7() { return &____steering_7; }
	inline void set__steering_7(Vector3_t2243707580  value)
	{
		____steering_7 = value;
	}

	inline static int32_t get_offset_of__maxVelocity_8() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ____maxVelocity_8)); }
	inline float get__maxVelocity_8() const { return ____maxVelocity_8; }
	inline float* get_address_of__maxVelocity_8() { return &____maxVelocity_8; }
	inline void set__maxVelocity_8(float value)
	{
		____maxVelocity_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
