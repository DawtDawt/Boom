#ifndef BOOM_ENGINE
#define BOOM_ENGINE

#include "GLFW/glfw3.h"
#include "IO/Mouse.h"
#include "IO/Keyboard.h"
#pragma comment(lib, "opengl32.lib")

#include <iostream>

using namespace std;

class Engine
{
public:
	static int SCREEN_WIDTH;
	static int SCREEN_HEIGHT;

	Engine();
	~Engine();

	bool initialize(char* windowTitle);

	void update();
	void beginRender();
	void endRender();

	static double getDt();
private:
	static GLFWwindow* window;

	static double dt;
	double lastFrameTime;
};

#endif