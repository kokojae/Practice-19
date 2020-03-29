#pragma once
class SceneManager
{
public:
	static enum class Scene { Intro, Main, HowTo, Rank, Credit, Stage1, Stage2 };

	static Scene current_scene;

	static void LoadScene(Scene scene);
};

