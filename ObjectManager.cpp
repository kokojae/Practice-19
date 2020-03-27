#include "DXUT.h"
#include "ObjectManager.h"

std::list<GameObject*> ObjectManager::obj_list = std::list<GameObject*>();

void ObjectManager::Sort(const GameObject* a, const GameObject* b)
{
}

void ObjectManager::Update()
{
}

void ObjectManager::LateUpdate()
{
}

void ObjectManager::Render()
{
}

void ObjectManager::Clear()
{
}

GameObject* ObjectManager::ColliderCheck(RECT* objRc, int layer)
{
	return nullptr;
}
