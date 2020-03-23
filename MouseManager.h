#pragma once
class MouseManager
{
public:
	static D3DXVECTOR2 pos;
	static bool leftBtn;
	static bool middleBtn;
	static bool rightBtn;
	static RECT rc;

	static RECT* GetRect();
};

