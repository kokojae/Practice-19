#pragma once
#include <map>
#include <iostream>

class TextureManager
{
public:
	static std::map<std::wstring, LPDIRECT3DTEXTURE9> texture_map;

	static LPDIRECT3DTEXTURE9 LoadTexture(std::wstring path);
	static void ReleaseTextures();
};

