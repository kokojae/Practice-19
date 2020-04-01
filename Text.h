#pragma once
#include "GameObject.h"
#include <iostream>

class Text :
	public GameObject
{
public:
	std::wstring text = L"";
	D3DXVECTOR2 scale = { 0,0 };
	bool isUI = false;

	void Render() override;

	void SetText(std::wstring a_text, D3DXVECTOR2 a_scale = { 1,1 }, bool a_isUI = false);
};

