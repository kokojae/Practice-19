#pragma once
#include <list>
#include "Layer.h"
class GameObject;

class ObjectManager
{
public:
	static std::list<GameObject*> obj_list;

	template <typename T>
	static T* Instantiate(D3DXVECTOR2 pos = { 0,0 });

	static void Update();
	static void LateUpdate();
	static void Render();
	static void Clear();

	static GameObject* ColliderCheck(RECT* objRc, int layer = Layer::DEFAULT);
};

bool Sort(const GameObject* a, const GameObject* b);

template<typename T>
inline T* ObjectManager::Instantiate(D3DXVECTOR2 pos)
{
	T* inst = new T;

	obj_list.push_back(inst);
	inst->Init();
	inst->pos = pos;
	obj_list.sort(Sort);

	return inst;
}
