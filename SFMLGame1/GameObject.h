#pragma once

class GameObject
{
public:
	GameObject();

	virtual void Update(float p_fDeltaTime);

private:
	/* Variable to catch delta time */
	float m_fDeltaTime;


};