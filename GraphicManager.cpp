#include "DXUT.h"
#include "GraphicManager.h"
#include "Practice-19.h"

LPD3DXSPRITE GraphicManager::sprite = nullptr;
ID3DXFont* GraphicManager::font = nullptr;

void GraphicManager::Init()
{
	D3DXCreateSprite(DXUTGetD3D9Device(), &sprite);

	D3DXCreateFont(DXUTGetD3D9Device(),
		70,
		0,
		FW_BOLD,
		1,
		false,
		DEFAULT_CHARSET,
		OUT_DEFAULT_PRECIS,
		DEFAULT_QUALITY,		
		DEFAULT_PITCH | FF_DONTCARE,
		L"¸¼Àº °íµñ",
		&font);
}

void GraphicManager::Render()
{
	sprite->Begin(D3DXSPRITE_ALPHABLEND);

	ObjectManager::Render();

	sprite->End();
}

void GraphicManager::Release()
{
	font->Release();
	sprite->Release();
}

void GraphicManager::TextureRender(TextureInfo info, D3DXVECTOR2 position)
{
	D3DXMATRIX mat, cen, pos, rot, sca;

	D3DXMatrixTranslation(&cen, -info.center.x, -info.center.y, 0);
	D3DXMatrixTranslation(&pos, position.x, position.y, 0);
	D3DXMatrixRotationZ(&rot, D3DXToRadian(info.degree));
	D3DXMatrixScaling(&sca, info.scale.x, info.scale.y, 1);

	mat = cen * sca * rot * pos;

	if (info.camera_on)
		mat* Camera::GetCamMat();

	// µµÆ®°×ÀÏ°æ¿ì »ç¿ë
	//DXUTGetD3D9Device()->SetSamplerState(0, D3DSAMP_MINFILTER, D3DTEXF_POINT);
	//DXUTGetD3D9Device()->SetSamplerState(0, D3DSAMP_MAGFILTER, D3DTEXF_POINT);
	//DXUTGetD3D9Device()->SetSamplerState(0, D3DSAMP_MIPFILTER, D3DTEXF_POINT);

	RECT rc = { info.index * info.size.x,
	0,
	(info.index + 1) * info.size.x,
	info.size.y };

	sprite->Draw(info.texture, &rc, NULL, NULL, info.color);
}

void GraphicManager::TextRender(std::wstring text, D3DXVECTOR2 position, D3DXVECTOR2 scale, bool isUI)
{
	D3DXMATRIX mat, pos, rot, sca;

	D3DXMatrixTranslation(&pos, position.x, position.y, 0);
	D3DXMatrixScaling(&sca, scale.x, scale.y, 1);

	mat = sca * pos;

	if (!isUI)
		mat *= Camera::GetCamMat();

	sprite->SetTransform(&mat);

	font->DrawText(sprite,
		text.c_str(),
		-1,
		NULL,
		DT_NOCLIP,
		D3DCOLOR_XRGB(0, 0, 0));
}
