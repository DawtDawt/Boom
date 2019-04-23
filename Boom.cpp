#include "Engine/Engine.h"
#include "Engine/Graphics/Sprite.h"
#include "Engine/IO/Mouse.h"
#include "Engine/IO/Keyboard.h"

#include "Game/Player.h"

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

	Engine engine;
	engine.initialize((char*) "Boom!");

	Sprite testSprite = Sprite("Assets/Art/Plane.png", Vector(100, 100, 0));
	testSprite.setScale(0.5f);
	testSprite.setSpeed(300);

	Player player(testSprite);

	while (true)
	{
		engine.update();
		player.update();

		// testSprite.setPos((float)Mouse::getMouseX(), (float)Mouse::getMouseY());


		if (Mouse::isButtonPressed(GLFW_MOUSE_BUTTON_LEFT))
		{
			player.getSprite().rotBy(100);
		}

		if (Mouse::isButtonPressed(GLFW_MOUSE_BUTTON_RIGHT))
		{
			player.getSprite().rotBy(-100);
		}
		
		if (Mouse::isButtonPressed(GLFW_MOUSE_BUTTON_MIDDLE))
		{
			
		}
		
		if (Keyboard::isKeyPressed(GLFW_KEY_W))
		{
			player.getRigidBody().addForce(Vector(0, 20, 0));
		}

		if (Keyboard::isKeyPressed(GLFW_KEY_S))
		{
			player.getRigidBody().addForce(Vector(0, -20, 0));
		}

		if (Keyboard::isKeyPressed(GLFW_KEY_A))
		{
			player.getRigidBody().addForce(Vector(-100, 0, 0));
		}

		if (Keyboard::isKeyPressed(GLFW_KEY_D))
		{
			player.getRigidBody().addForce(Vector(100, 0, 0));
		}
		
		engine.beginRender();
		player.render();
		engine.endRender();
	}

	return 0;
}
