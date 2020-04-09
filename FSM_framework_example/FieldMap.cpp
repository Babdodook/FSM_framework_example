#include"FieldMap.h"

FieldMap* FieldMap::mPthis = nullptr;

FieldMap* FieldMap::Create()
{
	if (!mPthis)
	{
		mPthis = new FieldMap();
	}

	return mPthis;
}

FieldMap* FieldMap::GetInstance()
{
	return mPthis;
}

void FieldMap::Destroy()
{
	if (mPthis)
	{
		delete mPthis;
		mPthis = nullptr;
	}
}

FieldMap::FieldMap()
{
}

void FieldMap::EnterState()
{
	std::cout << "필드맵에 입장하였습니다." << std::endl;
}

void FieldMap::ExitState()
{
	std::cout << "필드맵에서 퇴장하였습니다." << std::endl;
}

void FieldMap::Display()
{
	std::cout << "-필드맵-" << std::endl;
}