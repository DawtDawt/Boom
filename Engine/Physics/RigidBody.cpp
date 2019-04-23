#include "RigidBody.h"
#include "../Engine.h"

RigidBody::RigidBody()
{
	friction = 1;
	gravity = 0;
}

void RigidBody::initialize(float _friction, float _gravity, Vector* _pos, float* _rot, Vector* _scale, Vector* _size)
{
	friction = _friction;
	gravity = _gravity;
	
	pos = _pos;
	rot = _rot;
	scale = _scale;
	size = _size;
}

void RigidBody::update()
{
	velocity.x *= friction;
	velocity.y -= gravity;

	*pos += velocity * Engine::getDt();
}

void RigidBody::render(Vector c)
{
	glLoadIdentity();

	glTranslatef(pos->x, pos->y, pos->z);
	glRotatef(*rot, 0, 0, 1);
	glScalef(scale->x, scale->y, scale->z);

	glColor4f(c.x, c.y, c.z, 1);
	glBegin(GL_LINES);

	glVertex2f(0, 0);
	glVertex2f(size->x, 0);

	glVertex2f(size->x, 0);
	glVertex2f(size->x, size->y);

	glVertex2f(size->x, size->y);
	glVertex2f(0, size->y);

	glVertex2f(0, size->y);
	glVertex2f(0, 0);

	glEnd();
}

void RigidBody::addForce(Vector f)
{
	velocity += f;
}