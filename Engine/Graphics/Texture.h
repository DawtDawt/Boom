#ifndef BOOM_TEXTURE
#define BOOM_TEXTURE

#include "GLFW/glfw3.h"
#include "SOIL/src/SOIL.h"

#include <iostream>
#include <string>

using namespace std;

class Texture
{
public:
	Texture();
	Texture(int _id);
	Texture(string path);

	int getID();
	int getWidth();
	int getHeight();
private:
	bool getTextureParams();

	int id;
	int width;
	int height;
};

#endif