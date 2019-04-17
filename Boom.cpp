#include "Engine/Engine.h"

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

	Engine engine;
	engine.initialize((char*) "Boom!");

	while (true)
	{
		engine.update();
		engine.beginRender();
		engine.endRender();
	}

	return 0;
}
