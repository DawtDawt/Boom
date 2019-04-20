#include "Texture.h"

Texture::Texture()
{
	id = -1;
	width = -1;
	height = -1;
}

Texture::Texture(int _id)
{
	id = _id;
	width = -1;
	height = -1;
	if (!getTextureParams())
	{
		cout << "Error loading image with ID" << endl;
	}
}

Texture::Texture(string path)
{
	id = SOIL_load_OGL_texture(path.c_str(), SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_MULTIPLY_ALPHA | SOIL_FLAG_INVERT_Y);
	width = -1;
	height = -1;
	if (!getTextureParams())
	{
		cout << "Error loading image: " << path << endl;
	}
}

bool Texture::getTextureParams()
{
	if (id > 0)
	{
		int miplevel = 0;
		glBindTexture(GL_TEXTURE_2D, id);
		glGetTexLevelParameteriv(GL_TEXTURE_2D, miplevel, GL_TEXTURE_WIDTH, &width);
		glGetTexLevelParameteriv(GL_TEXTURE_2D, miplevel, GL_TEXTURE_HEIGHT, &height);
		return true;
	}

	return false;
}

int Texture::getID()
{
	return id;
}

int Texture::getWidth()
{
	return width;
}

int Texture::getHeight()
{
	return height;
}