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
		// ����
		if (player != nullptr)
		{

		}
	}
	if (GetAsyncKeyState(VK_F2))
	{
		// ���׷��̵�
		if (player != nullptr)
		{

		}
	}
	if (GetAsyncKeyState(VK_F3))
	{
		// �ٿ�׷��̵�
		if (player != nullptr)
		{

		}
	}
	if (GetAsyncKeyState(VK_F4))
	{
		// ��������
		SceneManager::LoadScene(SceneManager::Scene::Main);
	}
	if (GetAsyncKeyState(VK_F5))
	{
		// �������� 1����
		SceneManager::LoadScene(SceneManager::Scene::Stage1);
	}
	if (GetAsyncKeyState(VK_F6))
	{
		// �������� 2��
		SceneManager::LoadScene(SceneManager::Scene::Stage2);
	}
	
}
