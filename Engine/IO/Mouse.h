#ifndef BOOM_MOUSE
#define BOOM_MOUSE

#include "GLFW/glfw3.h"

class Mouse
{
public:
	static void mousePosCallback(GLFWwindow* window, double _x, double _y);
	static void mouseButtonCallback(GLFWwindow* window, int button, int action, int mods);

	static double getMouseX();
	static double getMouseY();
	static bool isButtonPressed(int button);
	static bool isButtonDown(int button);
	static bool isButtonUp(int button);
	
private:
	static double x;
	static double y;

	static bool buttons[];
	static bool buttonsDown[];
	static bool buttonsUp[];
};

#endif