#include "DXUT.h"
#include "Player.h"
#include "Practice-19.h"

void Player::Init()
{
	SetObject(L"resorce/player/player1.png", { 300,150 }, { 300,150 });
	level1 = TextureManager::LoadTexture(L"resorce/player/player1.png");
	level2 = TextureManager::LoadTexture(L"resorce/player/player2.png");
	level3 = TextureManager::LoadTexture(L"resorce/player/player3.png");

	z = 10;
	collider.layer = Layer::PLAYER;
	name = L"player";

	cam_pos = pos;

	ObjectManager::Instantiate<Text>(pos)->SetText(L"0");
}

void Player::Update()
{
	Gravity();
	Input();
	AddForce();
}

void Player::LateUpdate()
{
	CameraFollow();
}

void Player::Input()
{
}

void Player::CameraFollow()
{
	cam_pos += (pos - cam_pos) / 30;

	Camera::pos = cam_pos + D3DXVECTOR2(
		rand() % static_cast<int>(Camera::shake.x - Camera::shake.x / 2),
		rand() % static_cast<int>(Camera::shake.y - Camera::shake.y / 2)
	);

	Camera::scale += (1 - Camera::scale) / 10;
}
