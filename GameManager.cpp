#include "DXUT.h"
#include "GameManager.h"
#include "Practice-19.h"

void GameManager::Init()
{
}

void GameManager::Update()
{
	if (GetAsyncKeyState(VK_F1))
	{
		// 무적
		if (player != nullptr)
		{

		}
	}
	if (GetAsyncKeyState(VK_F2))
	{
		// 업그레이드
		if (player != nullptr)
		{

		}
	}
	if (GetAsyncKeyState(VK_F3))
	{
		// 다운그레이드
		if (player != nullptr)
		{

		}
	}
	if (GetAsyncKeyState(VK_F4))
	{
		// 메인으로
		SceneManager::LoadScene(SceneManager::Scene::Main);
	}
	if (GetAsyncKeyState(VK_F5))
	{
		// 스테이지 1으로
		SceneManager::LoadScene(SceneManager::Scene::Stage1);
	}
	if (GetAsyncKeyState(VK_F6))
	{
		// 스테이지 2로
		SceneManager::LoadScene(SceneManager::Scene::Stage2);
	}
	
}
