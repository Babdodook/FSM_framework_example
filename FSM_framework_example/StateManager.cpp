#include"StateManager.h"

StateManager* StateManager::mPthis = nullptr;

StateManager* StateManager::Create()
{
	if (!mPthis)
	{
		mPthis = new StateManager();
	}

	return mPthis;
}

StateManager* StateManager::GetInstance()
{
	return mPthis;
}

void StateManager::Destroy()
{
	if (mPthis)
	{
		delete mPthis;
		mPthis = nullptr;
	}
}

StateManager::StateManager()
{
	Battle::Create();
	FieldMap::Create();
	Option::Create();
	WorldMap::Create();

	sInterface = WorldMap::GetInstance();

	m_CurruntState = State::Max;
}

StateManager::~StateManager()
{
	Battle::Destroy();
	FieldMap::Destroy();
	Option::Destroy();
	WorldMap::Destroy();
}

void StateManager::ChangeState(State _state)
{
	sInterface->ExitState();

	switch (_state)
	{
	case State::STATE_Battle:
		sInterface = Battle::GetInstance();
		break;
	case State::STATE_FieldMap:
		sInterface = FieldMap::GetInstance();
		break;
	case State::STATE_Option:
		sInterface = Option::GetInstance();
		break;
	case State::STATE_WorldMap:
		sInterface = WorldMap::GetInstance();
		break;
	}

	sInterface->EnterState();
}

void StateManager::Run()
{
	int select;

	std::cout << "1. 배틀" << std::endl;
	std::cout << "2. 필드맵" << std::endl;
	std::cout << "3. 옵션" << std::endl;
	std::cout << "4. 월드맵" << std::endl;

	while (1)
	{
		std::cout << "선택>>";
		std::cin >> select;

		std::cout << std::endl;

		ChangeState(SelectMenu(select));
		sInterface->Display();

		std::cout << std::endl;
	}
}

State StateManager::SelectMenu(int select)
{
	State tempState = State::Max;

	switch (select)
	{
	case 1:
		tempState = State::STATE_Battle;
		break;
	case 2:
		tempState = State::STATE_FieldMap;
		break;
	case 3:
		tempState = State::STATE_Option;
		break;
	case 4:
		tempState = State::STATE_WorldMap;
		break;
	}

	return tempState;
}