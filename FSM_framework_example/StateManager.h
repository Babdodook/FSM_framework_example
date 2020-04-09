#pragma once

#include"Basics.h"
#include"Battle.h"
#include"FieldMap.h"
#include"Option.h"
#include"WorldMap.h"

class StateManager {
public:
	static StateManager* Create();
	static StateManager* GetInstance();
	static void Destroy();

	void ChangeState(State);
	void Run();
	State SelectMenu(int);
private:
	static StateManager* mPthis;

	StateManager();
	~StateManager();

	StateInterface* sInterface;
	State m_CurruntState;
};