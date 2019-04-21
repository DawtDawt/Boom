#ifndef BOOM_SPRITE
#define BOOM_SPRITE

#include "GLFW/glfw3.h"
#include "Texture.h"
#include "../Engine.h"

#include <iostream>
#include <string>

using namespace std;

class Sprite
{
public:
	Sprite();
	Sprite(string imagePath);
	Sprite(string imagePath, float _xPos, float _yPos);

	void update();
	void render();

	void setSpeed(float x);
	void changeSpeedBy(float x);

	void moveTo(float x, float y);
	void moveBy(float x, float y);

	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();

	void rotTo(float x);
	void rotBy(float x);

	void setScale(float x);
	void setScale(float x, float y);
private:
	Texture texture;
	float speed;
	float xPos;
	float yPos;
	float rot;
	float xScale;
	float yScale;
};

#endif