#include"WorldMap.h"

WorldMap* WorldMap::mPthis = nullptr;

WorldMap* WorldMap::Create()
{
	if (!mPthis)
	{
		mPthis = new WorldMap();
	}

	return mPthis;
}

WorldMap* WorldMap::GetInstance()
{
	return mPthis;
}

void WorldMap::Destroy()
{
	if (mPthis)
	{
		delete mPthis;
		mPthis = nullptr;
	}
}

WorldMap::WorldMap()
{
}

void WorldMap::EnterState()
{
	std::cout << "월드맵에 입장하였습니다." << std::endl;
}

void WorldMap::ExitState()
{
	std::cout << "월드맵에서 퇴장하였습니다." << std::endl;
}

void WorldMap::Display()
{
	std::cout << "-월드맵-" << std::endl;
}