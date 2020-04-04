#include "DXUT.h"
#include "PlaterPosition.h"

wchar_t* ConverCtoWC(char* str)
{
	//wchar_t형 변수 선언
	wchar_t* pStr;

	//멀티 바이트 크기 계산 길이 반환
	int strSize = MultiByteToWideChar(CP_ACP, 0, str, -1, NULL, NULL);

	//wchar_t 메모리 할당
	pStr = new WCHAR[strSize];

	//형 변환
	MultiByteToWideChar(CP_ACP, 0, str, strlen(str) + 1, pStr, strSize);

	return pStr;
}

void PlaterPosition::Update()
{
	char str[50] = { 0 };
	wchar_t* pos = nullptr;

	sprintf_s(str, sizeof str, "position : %f, %f", plyerpos->x, plyerpos->y);

	pos = ConverCtoWC(str);

	SetText(pos, { 1,1 });

	position = (*plyerpos) + D3DXVECTOR2(100, 100);
}

void PlaterPosition::Setting(D3DXVECTOR2* player_pos)
{
	plyerpos = player_pos;
}
