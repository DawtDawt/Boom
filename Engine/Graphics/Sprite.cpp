#include "Sprite.h"

Sprite::Sprite()
{
	xPos = 0;
	yPos = 0;
	texture = Texture();
}

Sprite::Sprite(string imagePath)
{
	xPos = 0;
	yPos = 0;
	texture = Texture(imagePath);
}

Sprite::Sprite(string imagePath, float _xPos, float _yPos)
{
	xPos = _xPos;
	yPos = _yPos;
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