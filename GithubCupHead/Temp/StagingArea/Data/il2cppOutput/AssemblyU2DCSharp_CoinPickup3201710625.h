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

// CoinPickup
struct  CoinPickup_t3201710625  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 CoinPickup::_score
	int32_t ____score_2;
	// UnityEngine.Animator CoinPickup::_anim
	Animator_t69676727 * ____anim_3;
	// System.Single CoinPickup::_timeLeft
	float ____timeLeft_4;
	// System.Boolean CoinPickup::_isCollision
	bool ____isCollision_5;
	// System.Int32 CoinPickup::_coinPickup
	int32_t ____coinPickup_6;

public:
	inline static int32_t get_offset_of__score_2() { return static_cast<int32_t>(offsetof(CoinPickup_t3201710625, ____score_2)); }
	inline int32_t get__score_2() const { return ____score_2; }
	inline int32_t* get_address_of__score_2() { return &____score_2; }
	inline void set__score_2(int32_t value)
	{
		____score_2 = value;
	}

	inline static int32_t get_offset_of__anim_3() { return static_cast<int32_t>(offsetof(CoinPickup_t3201710625, ____anim_3)); }
	inline Animator_t69676727 * get__anim_3() const { return ____anim_3; }
	inline Animator_t69676727 ** get_address_of__anim_3() { return &____anim_3; }
	inline void set__anim_3(Animator_t69676727 * value)
	{
		____anim_3 = value;
		Il2CppCodeGenWriteBarrier(&____anim_3, value);
	}

	inline static int32_t get_offset_of__timeLeft_4() { return static_cast<int32_t>(offsetof(CoinPickup_t3201710625, ____timeLeft_4)); }
	inline float get__timeLeft_4() const { return ____timeLeft_4; }
	inline float* get_address_of__timeLeft_4() { return &____timeLeft_4; }
	inline void set__timeLeft_4(float value)
	{
		____timeLeft_4 = value;
	}

	inline static int32_t get_offset_of__isCollision_5() { return static_cast<int32_t>(offsetof(CoinPickup_t3201710625, ____isCollision_5)); }
	inline bool get__isCollision_5() const { return ____isCollision_5; }
	inline bool* get_address_of__isCollision_5() { return &____isCollision_5; }
	inline void set__isCollision_5(bool value)
	{
		____isCollision_5 = value;
	}

	inline static int32_t get_offset_of__coinPickup_6() { return static_cast<int32_t>(offsetof(CoinPickup_t3201710625, ____coinPickup_6)); }
	inline int32_t get__coinPickup_6() const { return ____coinPickup_6; }
	inline int32_t* get_address_of__coinPickup_6() { return &____coinPickup_6; }
	inline void set__coinPickup_6(int32_t value)
	{
		____coinPickup_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
