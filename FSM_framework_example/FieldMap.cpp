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
	std::cout << "�ʵ�ʿ� �����Ͽ����ϴ�." << std::endl;
}

void FieldMap::ExitState()
{
	std::cout << "�ʵ�ʿ��� �����Ͽ����ϴ�." << std::endl;
}

void FieldMap::Display()
{
	std::cout << "-�ʵ��-" << std::endl;
}