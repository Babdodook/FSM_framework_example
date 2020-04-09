#pragma once

#include"Basics.h"

class StateInterface {
public:
	StateInterface() = default;
	~StateInterface() = default;

	virtual void EnterState() = 0;
	virtual void ExitState() = 0;
	virtual void Display() = 0;
};