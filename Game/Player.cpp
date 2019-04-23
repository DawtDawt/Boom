#include "Player.h"

Player::Player()
{

}

Player::Player(Sprite _sprite)
{
	sprite = _sprite;
	rigidBody.initialize(0.8f, 0, sprite.getPos(), sprite.getRot(), sprite.getScale(), sprite.getSize());
}

void Player::update()
{
	sprite.update();
	rigidBody.update();
}

void Player::render()
{
	sprite.render();
	rigidBody.render(Vector(0, 0, 0));
}

Sprite& Player::getSprite()
{
	return sprite;
}

RigidBody& Player::getRigidBody()
{
	return rigidBody;
}