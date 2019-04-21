#include "Sprite.h"


Sprite::Sprite()
{
	speed = 1;
	xPos = 0;
	yPos = 0;
	rot = 0;
	xScale = 1;
	yScale = 1;
	texture = Texture();
}

Sprite::Sprite(string imagePath)
{
	speed = 1;
	xPos = 0;
	yPos = 0;
	rot = 0;
	xScale = 1;
	yScale = 1;
	texture = Texture(imagePath);
}

Sprite::Sprite(string imagePath, float _xPos, float _yPos)
{
	speed = 1;
	xPos = _xPos;
	yPos = _yPos;
	rot = 0;
	xScale = 1;
	yScale = 1;
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
	glTranslatef(xPos, yPos, 0);
	glRotatef(rot, 0, 0, 1);
	glScalef(xScale, yScale, 1);

	// rendering
	glColor4f(1, 1, 1, 1);
	glBegin(GL_QUADS);
	// bottom left
	glTexCoord2f(0, 0);		glVertex2f(0, 0);
	// bottom right
	glTexCoord2f(1, 0);		glVertex2f((GLfloat)texture.getWidth(), 0);
	// top right
	glTexCoord2f(1, 1);		glVertex2f((GLfloat)texture.getWidth(), (GLfloat)texture.getHeight());
	// top left
	glTexCoord2f(0, 1);		glVertex2f(0, (GLfloat)texture.getHeight());
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

void Sprite::moveTo(float x, float y)
{
	xPos = x;
	yPos = y;
}

void Sprite::moveBy(float x, float y)
{
	xPos += x * Engine::getDt();
	yPos += y * Engine::getDt();
}

void Sprite::moveUp()
{
	yPos += speed * Engine::getDt();
}

void Sprite::moveDown()
{
	yPos -= speed * Engine::getDt();
}

void Sprite::moveLeft()
{
	xPos -= speed * Engine::getDt();
}

void Sprite::moveRight()
{
	xPos += speed * Engine::getDt();
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
	xScale = x;
	yScale = x;
}

void Sprite::setScale(float x, float y)
{
	xScale = x;
	yScale = y;
}