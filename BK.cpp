#include "DXUT.h"
#include "BK.h"
#include "Practice-19.h"

void BK::Init()
{
	switch (SceneManager::current_scene)
	{
	case SceneManager::Scene::Stage1:
		SetObject(L"resorce/background/stage1_2.png", { 2560,1080 }, { 2560,1080 });
		break;
	}
}
