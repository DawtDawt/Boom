#ifndef BOOM_RIGIDBODY
#define BOOM_RIGITBODY

#include "../Math/Vector.h"

class RigidBody
{
public:
	RigidBody();

	void initialize(float _friction, float _gravity, Vector* _pos, float* _rot, Vector* _scale, Vector* _size);

	void update();
	void render(Vector c);

	void addForce(Vector f);
private:
	Vector* scale;
	float* rot;
	Vector* pos;
	Vector* size;

	float gravity;
	float friction;
	Vector velocity;
};


#endif