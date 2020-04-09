#include"StateManager.h"

int main()
{
	StateManager::Create();
	StateManager::GetInstance()->Run();
	StateManager::Destroy();

	return 0;
}