#pragma once
#include "Text.h"
class PlaterPosition :
	public Text
{
public:
	D3DXVECTOR2* plyerpos;

	void Update()override;
	void Setting(D3DXVECTOR2* pos);
};

