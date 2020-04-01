#include "DXUT.h"
#include "Camera.h"
#include "Practice-19.h"

D3DXVECTOR2 Camera::pos = { 0,0 };
float Camera::degree = 0;
float Camera::scale = 1;
D3DXVECTOR2 Camera::shake = { 1,1 };

D3DXMATRIX Camera::GetCamMat()
{
	D3DXMATRIX mat_pos, mat_rot, mat_sca, mat_scr;

	D3DXMatrixTranslation(&mat_pos, -pos.x, -pos.y, 0);
	D3DXMatrixRotationZ(&mat_rot, D3DXToRadian(degree));
	D3DXMatrixScaling(&mat_sca, 1 / scale, 1 / scale, 1);
	D3DXMatrixTranslation(&mat_scr, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 0);

	return mat_pos * mat_sca * mat_rot * mat_scr;
}
