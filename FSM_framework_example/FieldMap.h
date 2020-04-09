#pragma once

#include"StateInterface.h"

class FieldMap : public StateInterface {
public:
	static FieldMap* Create();
	static FieldMap* GetInstance();
	static void Destroy();

	virtual void EnterState();
	virtual void ExitState();
	virtual void Display();
private:
	static FieldMap* mPthis;

	FieldMap();
	~FieldMap() = default;
};