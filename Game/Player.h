#ifndef BOOM_PLAYER
#define BOOM_PLAYER

#include "../Engine/Graphics/Sprite.h"
#include "../Engine/Physics/RigidBody.h"

class Player
{
public:
	Player();
	Player(Sprite _sprite);

	void update();
	void render();

	Sprite& getSprite();
	RigidBody& getRigidBody();
private:
	Sprite sprite;
	RigidBody rigidBody;
};

#endif