#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonRetry
struct  ButtonRetry_t2966198526  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ButtonRetry::buttonImage
	GameObject_t1756533147 * ___buttonImage_2;
	// System.Single ButtonRetry::_playerHP
	float ____playerHP_3;

public:
	inline static int32_t get_offset_of_buttonImage_2() { return static_cast<int32_t>(offsetof(ButtonRetry_t2966198526, ___buttonImage_2)); }
	inline GameObject_t1756533147 * get_buttonImage_2() const { return ___buttonImage_2; }
	inline GameObject_t1756533147 ** get_address_of_buttonImage_2() { return &___buttonImage_2; }
	inline void set_buttonImage_2(GameObject_t1756533147 * value)
	{
		___buttonImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___buttonImage_2, value);
	}

	inline static int32_t get_offset_of__playerHP_3() { return static_cast<int32_t>(offsetof(ButtonRetry_t2966198526, ____playerHP_3)); }
	inline float get__playerHP_3() const { return ____playerHP_3; }
	inline float* get_address_of__playerHP_3() { return &____playerHP_3; }
	inline void set__playerHP_3(float value)
	{
		____playerHP_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
