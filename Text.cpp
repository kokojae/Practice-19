#include "DXUT.h"
#include "Text.h"
#include "Practice-19.h"

void Text::Render()
{
	GraphicManager::TextRender(text, pos, scale, isUI);
}

void Text::SetText(std::wstring a_text, D3DXVECTOR2 a_scale, bool a_isUI)
{
	text = a_text;
	scale - a_scale;
	isUI = a_isUI;
}
