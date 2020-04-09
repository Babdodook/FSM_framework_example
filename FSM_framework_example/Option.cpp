#include"Option.h"

Option* Option::mPthis = nullptr;

Option* Option::Create()
{
	if (!mPthis)
	{
		mPthis = new Option();
	}

	return mPthis;
}

Option* Option::GetInstance()
{
	return mPthis;
}

void Option::Destroy()
{
	if (mPthis)
	{
		delete mPthis;
		mPthis = nullptr;
	}
}

Option::Option()
{
}

void Option::EnterState()
{
	std::cout << "옵션에 입장하였습니다." << std::endl;
}

void Option::ExitState()
{
	std::cout << "옵션에서 퇴장하였습니다." << std::endl;
}

void Option::Display()
{
	std::cout << "-옵션-" << std::endl;
}