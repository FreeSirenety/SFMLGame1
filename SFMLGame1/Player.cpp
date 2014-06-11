#include "Player.h"
#include <iostream>

Player::Player()
{

}

void Player::Update(float p_fDeltaTime)
{
	Entity::Update(p_fDeltaTime);

	std::cout << "PlayerUpdate" << std::endl;
}