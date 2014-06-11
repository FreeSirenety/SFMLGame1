#pragma once

#include "GameObject.h"

class Entity : public GameObject
{
public:
	Entity();

	virtual void Update(float p_fDeltaTime);
};