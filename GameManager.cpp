#include "DXUT.h"
#include "GameManager.h"
#include "Practice-19.h"

GameObject* GameManager::player = nullptr;

void GameManager::Init()
{
	SceneManager::LoadScene(SceneManager::Scene::Stage1);
}

void GameManager::Update()
{
	if (GetAsyncKeyState(VK_F1) & 0x8000)
	{
		// 무적
		if (player != nullptr)
		{

		}
	}
	if (GetAsyncKeyState(VK_F2) & 0x8000)
	{
		// 업그레이드
		if (player != nullptr)
		{

		}
	}
	if (GetAsyncKeyState(VK_F3) & 0x8000)
	{
		// 다운그레이드
		if (player != nullptr)
		{

		}
	}
	//if (GetAsyncKeyState(VK_F4) & 0x8000)
	//{
	//	// 메인으로
	//	SceneManager::LoadScene(SceneManager::Scene::Main);
	//}
	if (GetAsyncKeyState(VK_F5) & 0x8000)
	{
		// 스테이지 1으로
		SceneManager::LoadScene(SceneManager::Scene::Stage1);
	}
	//if (GetAsyncKeyState(VK_F6) & 0x8000)
	//{
	//	// 스테이지 2로
	//	SceneManager::LoadScene(SceneManager::Scene::Stage2);
	//}
	
}
