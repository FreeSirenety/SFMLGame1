#include "Entity.h"
#include <iostream>

Entity::Entity()
{

}

void Entity::Update(float p_fDeltaTime)
{
	GameObject::Update(p_fDeltaTime);

	std::cout << "EntityUpdate" << std::endl;
}