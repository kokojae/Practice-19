#include "DXUT.h"
#include "SoundManager.h"
#include "SDKsound.h"

CSoundManager* SoundManager::SFXManager = nullptr;
std::map<std::wstring, CSound*>SoundManager::SFX_map = std::map<std::wstring, CSound*>();

void SoundManager::Init()
{
	SFXManager = new CSoundManager();
	SFXManager->Initialize(DXUTGetHWND(), DSSCL_PRIORITY);
	SFXManager->SetPrimaryBufferFormat(2, 22050, 16);
}

CSound* SoundManager::SearchSFX(std::wstring path)
{
	CSound* SFX;

	if (SFX_map.count(path))
	{
		SFX = SFX_map[path];
	}
	else
	{
		SFXManager->Create(&SFX, const_cast<wchar_t*>(path.c_str()), 0, GUID_NULL);
		SFX_map[path] = SFX;
	}

	return SFX;
}

void SoundManager::PlaySFX(std::wstring path, bool isBGM)
{
	CSound* SFX = SearchSFX(path);

	if (isBGM)
	{
		SFX->Play(0, DSBPLAY_LOOPING);
	}
	else
	{
		SFX->Reset();
		SFX->Play(0, NULL);
	}
}

void SoundManager::EndSFX(std::wstring path)
{
	if (SFX_map.count(path))
	{
		SFX_map[path]->Stop();
		SFX_map[path]->Reset();
	}
}

void SoundManager::EndAllSFX()
{
	std::map<std::wstring, CSound*>::iterator it = SFX_map.begin();

	while (it != SFX_map.end())
	{
		it->second->Stop();
		(it++)->second->Reset();
	}
}
