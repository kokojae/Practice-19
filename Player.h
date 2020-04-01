#pragma once
#include "GameObject.h"
class Player :
	public GameObject
{
public:
	LPDIRECT3DTEXTURE9 level1;
	LPDIRECT3DTEXTURE9 level2;
	LPDIRECT3DTEXTURE9 level3;

	D3DXVECTOR2 cam_pos;

	void Init()override;
	void Update()override;
	void LateUpdate()override;

	void Input();
	void CameraFollow();
};

