#pragma once

#include "Entity.h"

class Player : public Entity
{
public:
	Player();

	virtual void Update(float p_fDeltaTime);
};