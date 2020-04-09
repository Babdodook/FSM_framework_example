#pragma once

#include"StateInterface.h"

class WorldMap : public StateInterface {
public:
	static WorldMap* Create();
	static WorldMap* GetInstance();
	static void Destroy();

	virtual void EnterState();
	virtual void ExitState();
	virtual void Display();
private:
	static WorldMap* mPthis;

	WorldMap();
	~WorldMap() = default;
};