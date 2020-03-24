#include "DXUT.h"
#include "MouseManager.h"
#include "Practice-19.h"

D3DXVECTOR2 MouseManager::pos = { 0,0 };
bool MouseManager::leftBtn = false;
bool MouseManager::middleBtn = false;
bool MouseManager::rightBtn = false;
RECT MouseManager::rc = { 0,0,0,0 };

RECT* MouseManager::GetRect()
{
	LONG x = static_cast<LONG>(pos.x);
	LONG y = static_cast<LONG>(pos.y);

	rc = { x - 1,y - 1,x + 1,y + 1 };

	return &rc;
}
