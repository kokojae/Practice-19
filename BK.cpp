#include "DXUT.h"
#include "BK.h"
#include "Practice-19.h"

void BK::Init()
{
	switch (SceneManager::current_scene)
	{
	case SceneManager::Scene::Intro:
		SetObject(L"resorce/scean/intro1.png", { 2560,1080 }, { 2560,1080 });
		break;

	case SceneManager::Scene::Main:
		SetObject(L"resorce/scean/mainmenu.png", { 2560,1080 }, { 2560,1080 });
		break;

	case SceneManager::Scene::HowTo:
		SetObject(L"resorce/scean/howtogame.png", { 2560,1080 }, { 2560,1080 });
		break;

	case SceneManager::Scene::Rank:
		SetObject(L"resorce/scean/gameranking.png", { 2560,1080 }, { 2560,1080 });
		break;

	case SceneManager::Scene::Credit:
		SetObject(L"resorce/scean/credit.png", { 2560,1080 }, { 2560,1080 });
		break;

	case SceneManager::Scene::Stage1:
		SetObject(L"resorce/background/stage1_2.png", { 2560,1080 }, { 2560,1080 });
		break;

	case SceneManager::Scene::Stage2:
		SetObject(L"resorce/background/stage2_3.png", { 2560,1080 }, { 2560,1080 });
		break;
	}
}
