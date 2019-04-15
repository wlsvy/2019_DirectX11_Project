#pragma once
#include "WindowContainer.h"
#include "Timer.h"
#include "SceneManager.h"

class Engine : WindowContainer{
public:
	Engine() : sceneManager(this, &timer.Time) {}
	bool Initialize(HINSTANCE hInstance, std::string window_title, std::string window_class, int width, int height);
	bool ProcessMessage();
	void Update();
	void RenderFrame();
	~Engine();

private:
	Timer timer;
	SceneManager sceneManager;
};