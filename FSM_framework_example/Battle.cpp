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
	std::cout << "��Ʋ�� �����Ͽ����ϴ�." << std::endl;
}

void Battle::ExitState()
{
	std::cout << "��Ʋ���� �����Ͽ����ϴ�." << std::endl;
}

void Battle::Display()
{
	std::cout << "-��Ʋ-" << std::endl;
}