#pragma once
class GameObject;

class GameManager
{
public:
	static GameObject* player;

	static void Init();
	static void Update();
};

