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
	std::cout << "�ɼǿ� �����Ͽ����ϴ�." << std::endl;
}

void Option::ExitState()
{
	std::cout << "�ɼǿ��� �����Ͽ����ϴ�." << std::endl;
}

void Option::Display()
{
	std::cout << "-�ɼ�-" << std::endl;
}