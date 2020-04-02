#include "DXUT.h"
#include "SceneManager.h"
#include "Practice-19.h"

SceneManager::Scene SceneManager::current_scene = SceneManager::Scene();

void SceneManager::LoadScene(Scene scene)
{
	current_scene = scene;

	Camera::pos = { 0,0 };
	Camera::degree = 0;
	Camera::scale = 1;

	ObjectManager::Clear();
	SoundManager::EndAllSFX();

	switch (scene)
	{
	case SceneManager::Scene::Intro:
		ObjectManager::Instantiate<BK>();
		break;
	case SceneManager::Scene::Main:
		ObjectManager::Instantiate<BK>();
		ObjectManager::Instantiate<Player>();
		break;
	case SceneManager::Scene::HowTo:
		ObjectManager::Instantiate<BK>();
		break;
	case SceneManager::Scene::Rank:
		ObjectManager::Instantiate<BK>();
		break;
	case SceneManager::Scene::Credit:
		ObjectManager::Instantiate<BK>();
		break;
	case SceneManager::Scene::Stage1:
		ObjectManager::Instantiate<BK>();
		break;
	case SceneManager::Scene::Stage2:
		ObjectManager::Instantiate<BK>();
		break;
	}

	GameManager::player = ObjectManager::SearchObject(L"player");
}
