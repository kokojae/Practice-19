#include "DXUT.h"
#include "ObjectManager.h"
#include "Practice-19.h"

std::list<GameObject*> ObjectManager::obj_list = std::list<GameObject*>();

void ObjectManager::Update()
{
	std::list<GameObject*>::iterator it = obj_list.begin();

	while (it != obj_list.end())
	{
		GameObject* inst = it._Ptr->_Myval;

		if (inst->destroy)
		{
			inst->Release();
			obj_list.erase(it++);
			delete inst;
			continue;
		}

		inst->Update();
		it++;
	}
}

void ObjectManager::LateUpdate()
{
	for (GameObject* inst : obj_list)
	{
		if (inst->destroy)
			continue;
		inst->LateUpdate();
	}
}

void ObjectManager::Render()
{
	for (GameObject* inst : obj_list)
	{
		if (inst->destroy)
			continue;
		inst->Render();
	}
}

void ObjectManager::Clear()
{
	for (GameObject* inst : obj_list)
	{
		inst->destroy = true;
	}
}

GameObject* ObjectManager::ColliderCheck(RECT* objRc, int layer)
{
	for (GameObject* inst : obj_list)
	{
		if ((layer & inst->collider.layer) == 0)
			continue;
		if (!inst->collider.enable)
			continue;
		if (inst->destroy)
			continue;

		if (IntersectRect(&RECT(), objRc, inst->GetRect()))
			return inst;
	}
	return nullptr;
}

bool Sort(const GameObject* a, const GameObject* b)
{
	return a->z < b->z;
}
