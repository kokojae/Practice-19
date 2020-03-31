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
}

void Player::Update()
{
}

void Player::Input()
{
}
