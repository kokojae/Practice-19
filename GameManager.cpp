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
		// ����
		if (player != nullptr)
		{

		}
	}
	if (GetAsyncKeyState(VK_F2) & 0x8000)
	{
		// ���׷��̵�
		if (player != nullptr)
		{

		}
	}
	if (GetAsyncKeyState(VK_F3) & 0x8000)
	{
		// �ٿ�׷��̵�
		if (player != nullptr)
		{

		}
	}
	//if (GetAsyncKeyState(VK_F4) & 0x8000)
	//{
	//	// ��������
	//	SceneManager::LoadScene(SceneManager::Scene::Main);
	//}
	if (GetAsyncKeyState(VK_F5) & 0x8000)
	{
		// �������� 1����
		SceneManager::LoadScene(SceneManager::Scene::Stage1);
	}
	//if (GetAsyncKeyState(VK_F6) & 0x8000)
	//{
	//	// �������� 2��
	//	SceneManager::LoadScene(SceneManager::Scene::Stage2);
	//}
	
}
