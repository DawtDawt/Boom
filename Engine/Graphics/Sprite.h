#ifndef BOOM_SPRITE
#define BOOM_SPRITE

#include "GLFW/glfw3.h"
#include "Texture.h"
#include "../Math/Vector.h"

#include <iostream>
#include <string>

using namespace std;

class Sprite
{
public:
	Sprite();
	Sprite(string imagePath);
	Sprite(string imagePath, Vector _pos);

	void update();
	void render();

	void setSpeed(float x);
	void changeSpeedBy(float x);

	void moveTo(Vector _pos);
	void moveBy(Vector _pos);

	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();

	void rotTo(float x);
	void rotBy(float x);

	void setScale(float x);
	void setScale(Vector _scale);
private:
	Texture texture;

	float speed;
	Vector pos;
	float rot;
	Vector scale;
};

#endif