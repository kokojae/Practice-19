#include "DXUT.h"
#include "GameManager.h"
#include "Practice-19.h"

void GameManager::init()
{
}

void GameManager::Update()
{
	if (GetAsyncKeyState(VK_F1))
	{
		// 무적
	}
	if (GetAsyncKeyState(VK_F2))
	{
		// 업그레이드
	}
	if (GetAsyncKeyState(VK_F3))
	{
		// 다운그레이드
	}
	if (GetAsyncKeyState(VK_F4))
	{
		SceneManager::LoadScene(SceneManager::Scene::Main);
	}
	if (GetAsyncKeyState(VK_F5))
	{
		SceneManager::LoadScene(SceneManager::Scene::Stage1);
	}
	if (GetAsyncKeyState(VK_F6))
	{
		SceneManager::LoadScene(SceneManager::Scene::Stage2);
	}
	
}
