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
	Camera::shake = { 0,0 };

	ObjectManager::Clear();
	SoundManager::EndAllSFX();

	switch (scene)
	{
	case SceneManager::Scene::Intro:
		break;
	case SceneManager::Scene::Main:
		break;
	case SceneManager::Scene::HowTo:
		break;
	case SceneManager::Scene::Rank:
		break;
	case SceneManager::Scene::Credit:
		break;
	case SceneManager::Scene::Stage1:
		break;
	case SceneManager::Scene::Stage2:
		break;
	}

	GameManager::player = ObjectManager::SearchObject(L"player");
}
