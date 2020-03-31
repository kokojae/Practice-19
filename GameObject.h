#pragma once
#include <iostream>
#include "TextureInfo.h"
#include "BoxCollider.h"
#include "Layer.h"
#include "MouseManager.h"

class GameObject
{
public:
	D3DXVECTOR2 pos = { 0,0 };
	TextureInfo info;
	BoxCollider collider;
	bool destroy = false;
	int z = 0;
	RECT* rc = new RECT();
	std::wstring name = L"";

	virtual void Init();
	virtual void Update();
	virtual void LateUpdate();
	virtual void Render();
	virtual void Release();

	void DrawSelf();
	GameObject* PlaceMeeting(D3DXVECTOR2 vec, int layer = Layer::DEFAULT);
	bool IsClicked(MouseManager::Key key = MouseManager::Key::ANY);

	void SetObject(std::wstring path, D3DXVECTOR2 tex_size, D3DXVECTOR2 col_size, D3DXVECTOR2 obj_scale = { 1,1 });;
	void SetTexture(std::wstring path, D3DXVECTOR2 size, D3DXVECTOR2 scale);
	void SetCollider(D3DXVECTOR2 size, D3DXVECTOR2 scale);

	RECT* GetRect(D3DXVECTOR2 vector = { 0,0 });
};

