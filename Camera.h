#pragma once
class Camera
{
public:
	static D3DXVECTOR2 pos;
	static float degree;
	static float scale;
	static D3DXVECTOR2 shake;

	static D3DXMATRIX GetCamera();
};

