#pragma once

#include <map>

class State;

enum StateID
{
	MENU,
	GAME,
	INGAMEMENU,
	OPTIONS
};

class StateManager
{
public:
	StateManager();

	void UpdateCurrentState(float p_fDeltaTime);

	void AttachState(State *p_xState, StateID p_eID);

	State *DetachState(StateID p_eID);

	void SetCurrentState(StateID p_eID);

private:
	std::map<StateID, State*> m_mAttachedStates;
};