﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cameraManager
struct  cameraManager_t2136423602  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform cameraManager::Player
	Transform_t3275118058 * ___Player_2;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(cameraManager_t2136423602, ___Player_2)); }
	inline Transform_t3275118058 * get_Player_2() const { return ___Player_2; }
	inline Transform_t3275118058 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(Transform_t3275118058 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier(&___Player_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif