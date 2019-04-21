#include "Engine/Engine.h"
#include "Engine/Graphics/Sprite.h"
#include "Engine/IO/Mouse.h"
#include "Engine/IO/Keyboard.h"

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

	Engine engine;
	engine.initialize((char*) "Boom!");

	Sprite testSprite = Sprite("Assets/Art/Plane.png", 0, 0);
	testSprite.setScale(0.5f);
	testSprite.setSpeed(300);

	while (true)
	{
		engine.update();
		testSprite.update();

		// testSprite.setPos((float)Mouse::getMouseX(), (float)Mouse::getMouseY());


		if (Mouse::isButtonPressed(GLFW_MOUSE_BUTTON_LEFT))
		{
			testSprite.rotBy(100);
		}

		if (Mouse::isButtonPressed(GLFW_MOUSE_BUTTON_RIGHT))
		{
			testSprite.rotBy(-100);
		}
		
		if (Mouse::isButtonPressed(GLFW_MOUSE_BUTTON_MIDDLE))
		{
			
		}
		
		if (Keyboard::isKeyPressed(GLFW_KEY_W))
		{
			testSprite.moveUp();
		}

		if (Keyboard::isKeyPressed(GLFW_KEY_S))
		{
			testSprite.moveDown();
		}

		if (Keyboard::isKeyPressed(GLFW_KEY_A))
		{
			testSprite.moveLeft();
		}

		if (Keyboard::isKeyPressed(GLFW_KEY_D))
		{
			testSprite.moveRight();
		}
		
		engine.beginRender();
		testSprite.render();
		engine.endRender();
	}

	return 0;
}
