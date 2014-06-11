#include "GameObject.h"
#include <iostream>

GameObject::GameObject()
{

}

void GameObject::Update(float p_fDeltaTime)
{
	m_fDeltaTime = p_fDeltaTime;

	std::cout << "GameObjectUpdate" << std::endl;
}