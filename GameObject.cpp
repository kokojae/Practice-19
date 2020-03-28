#include "DXUT.h"
#include "GameObject.h"
#include "Practice-19.h"

void GameObject::Init()
{
}

void GameObject::Update()
{
}

void GameObject::LateUpdate()
{
}

void GameObject::Render()
{
	DrawSelf();
}

void GameObject::Release()
{
	if (rc != nullptr)
		delete rc;
}

void GameObject::DrawSelf()
{
	GraphicManager::TextureRender(info, pos);
}

GameObject* GameObject::PlaceMeeting(D3DXVECTOR2 vec, int layer)
{
	collider.enable = false;

	ObjectManager::ColliderCheck(GetRect(vec), layer);

	collider.enable = true;

	return nullptr;
}

bool GameObject::IsClicked(MouseManager::Key key)
{
	switch (key)
	{
	case MouseManager::Key::LEFT:
		if (MouseManager::leftBtn)
			break;
		else
			return false;
	case MouseManager::Key::MIDDLE:
		if (MouseManager::middleBtn)
			break;
		else
			return false;
	case MouseManager::Key::RIGHT:
		if (MouseManager::rightBtn)
			break;
		else
			return false;
	case MouseManager::Key::ANY:
		break;
	}

	return IntersectRect(&RECT(), GetRect(), MouseManager::GetRect());
}

void GameObject::SetObject(std::wstring path, D3DXVECTOR2 tex_size, D3DXVECTOR2 col_size, D3DXVECTOR2 obj_scale)
{
	SetTexture(path, tex_size, obj_scale);
	SetCollider(col_size, obj_scale);
}

void GameObject::SetTexture(std::wstring path, D3DXVECTOR2 size, D3DXVECTOR2 scale)
{
	info.texture = TextureManager::LoadTexture(path);
	info.size = size;
	info.center = size / 2;
	info.scale = scale;
}

void GameObject::SetCollider(D3DXVECTOR2 size, D3DXVECTOR2 scale)
{
	collider.size.x = size.x * scale.x;
	collider.size.y = size.y * scale.y;
	collider.center = collider.size / 2;
}

RECT* GameObject::GetRect(D3DXVECTOR2 vector)
{
	rc->left	= (pos - collider.center + vector).x;
	rc->top		= (pos - collider.center + vector + collider.size).y;
	rc->right	= (pos - collider.center + vector).x;
	rc->bottom	= (pos - collider.center + vector + collider.size).y;

	return nullptr;
}
