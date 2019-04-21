#ifndef BOOM_KEYBOARD
#define BOOM_KEYBOARD

#include "GLFW/glfw3.h"

class Keyboard
{
public:
	static void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
	
	static bool isKeyPressed(int key);
	static bool isKeyDown(int key);
	static bool isKeyUp(int key);
private:
	static bool keys[];
	static bool keysDown[];
	static bool keysUp[];
};


#endif