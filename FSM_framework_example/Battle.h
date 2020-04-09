#pragma once

#include"StateInterface.h"

class Battle : public StateInterface {
public:
	static Battle* Create();
	static Battle* GetInstance();
	static void Destroy();

	virtual void EnterState();
	virtual void ExitState();
	virtual void Display();
private:
	static Battle* mPthis;

	Battle();
	~Battle() = default;
};