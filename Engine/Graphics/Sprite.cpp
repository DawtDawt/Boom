#include "Sprite.h"
#include "../Engine.h"


Sprite::Sprite()
{
	speed = 100;
	pos = Vector(0);
	rot = 0;
	scale = Vector(1);
	texture = Texture();
}

Sprite::Sprite(string imagePath)
{
	speed = 100;
	pos = Vector(0);
	rot = 0;
	scale = Vector(1);
	texture = Texture(imagePath);
}

Sprite::Sprite(string imagePath, Vector _pos)
{
	speed = 100;
	pos = Vector(_pos);
	rot = 0;
	scale = Vector(1);
	texture = Texture(imagePath);
}

void Sprite::update()
{
	
}

void Sprite::render()
{
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture.getID());
	glLoadIdentity();

	// translate -> rotate -> scale
	glTranslatef(pos.x, pos.y, 0);
	glRotatef(rot, 0, 0, 1);
	glScalef(scale.x, scale.y, 1);

	// rendering
	glColor4f(1, 1, 1, 1);
	glBegin(GL_QUADS);
	// bottom left
	glTexCoord2f(0, 0);		glVertex2i(0, 0);
	// bottom right
	glTexCoord2f(1, 0);		glVertex2i(texture.getWidth(), 0);
	// top right
	glTexCoord2f(1, 1);		glVertex2i(texture.getWidth(), texture.getHeight());
	// top left
	glTexCoord2f(0, 1);		glVertex2i(0, texture.getHeight());
	glEnd();

	glDisable(GL_TEXTURE_2D);
}

void Sprite::setSpeed(float x)
{
	speed = x;
}

void Sprite::changeSpeedBy(float x)
{
	speed += x;
}

void Sprite::moveTo(Vector _pos)
{
	pos = _pos;
}

void Sprite::moveBy(Vector _pos)
{

	pos += _pos * (float) Engine::getDt();
}

void Sprite::moveUp()
{
	pos += Vector(0, speed * Engine::getDt(), 0);
}

void Sprite::moveDown()
{
	pos -= Vector(0, speed * Engine::getDt(), 0);
}

void Sprite::moveLeft()
{
	pos -= Vector(speed * Engine::getDt(), 0, 0);
}

void Sprite::moveRight()
{
	pos += Vector(speed * Engine::getDt(), 0, 0);
}

void Sprite::rotTo(float x)
{
	rot = x;
}

void Sprite::rotBy(float x)
{
	rot += x * Engine::getDt();
}

void Sprite::setScale(float x)
{
	scale = Vector(x, x, 1);
}

void Sprite::setScale(Vector _scale)
{
	scale = _scale;
}