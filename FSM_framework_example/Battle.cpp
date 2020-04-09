#include"Battle.h"

Battle* Battle::mPthis = nullptr;

Battle* Battle::Create()
{
	if (!mPthis)
	{
		mPthis = new Battle();
	}

	return mPthis;
}

Battle* Battle::GetInstance()
{
	return mPthis;
}

void Battle::Destroy()
{
	if (mPthis)
	{
		delete mPthis;
		mPthis = nullptr;
	}
}

Battle::Battle()
{
}

void Battle::EnterState()
{
	std::cout << "배틀에 입장하였습니다." << std::endl;
}

void Battle::ExitState()
{
	std::cout << "배틀에서 퇴장하였습니다." << std::endl;
}

void Battle::Display()
{
	std::cout << "-배틀-" << std::endl;
}