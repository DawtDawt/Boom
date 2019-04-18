#include "Engine/Engine.h"
#include "Engine/Graphics/Sprite.h"

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

	Engine engine;
	engine.initialize((char*) "Boom!");

	Sprite testSprite = Sprite("Assets/Art/Plane.png", 150, 150);

	while (true)
	{
		engine.update();
		testSprite.update();

		engine.beginRender();
		testSprite.render();
		engine.endRender();
	}

	return 0;
}
