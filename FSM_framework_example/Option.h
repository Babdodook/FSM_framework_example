#pragma once

#include"StateInterface.h"

class Option : public StateInterface {
public:
	static Option* Create();
	static Option* GetInstance();
	static void Destroy();

	virtual void EnterState();
	virtual void ExitState();
	virtual void Display();
private:
	static Option* mPthis;

	Option();
	~Option() = default;
};