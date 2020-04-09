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
	std::cout << "����ʿ� �����Ͽ����ϴ�." << std::endl;
}

void WorldMap::ExitState()
{
	std::cout << "����ʿ��� �����Ͽ����ϴ�." << std::endl;
}

void WorldMap::Display()
{
	std::cout << "-�����-" << std::endl;
}