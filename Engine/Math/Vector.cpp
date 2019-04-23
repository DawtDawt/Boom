#include "Vector.h"

Vector::Vector()
{
	x = 0;
	y = 0;
	z = 0;
}

Vector::Vector(const Vector& other)
{
	x = other.x;
	y = other.y;
	z = other.z;
}

Vector::Vector(float _x)
{
	x = _x;
	y = _x;
	z = _x;
}

Vector::Vector(float _x, float _y, float _z)
{
	x = _x;
	y = _y;
	z = _z;
}

Vector& Vector::operator=(const Vector& other)
{
	x = other.x;
	y = other.y;
	z = other.z;

	return *this;
}

Vector Vector::operator+(const Vector& other)
{
	float a, b, c;
	a = x + other.x;
	b = y + other.y;
	c = z + other.z;
	return Vector(a, b, c);
}

Vector Vector::operator-(const Vector& other)
{
	float a, b, c;
	a = x - other.x;
	b = y - other.y;
	c = z - other.z;
	return Vector(a, b, c);
}

Vector Vector::operator*(const Vector& other)
{
	float a, b, c;
	a = x * other.x;
	b = y * other.y;
	c = z * other.z;
	return Vector(a, b, c);
}

Vector& Vector::operator+=(const Vector& other)
{
	x += other.x;
	y += other.y;
	z += other.z;
	
	return *this;
}

Vector& Vector::operator-=(const Vector& other)
{
	x -= other.x;
	y -= other.y;
	z -= other.z;

	return *this;
}

Vector& Vector::operator*=(const Vector& other)
{
	x *= other.x;
	y *= other.y;
	z *= other.z;

	return *this;
}

Vector Vector::operator+(float _x)
{
	float a, b, c;
	a = x + _x;
	b = y + _x;
	c = z + _x;
	return Vector(a, b, c);
}

Vector Vector::operator-(float _x)
{
	float a, b, c;
	a = x - _x;
	b = y - _x;
	c = z - _x;
	return Vector(a, b, c);
}

Vector Vector::operator*(float _x)
{
	float a, b, c;
	a = x * _x;
	b = y * _x;
	c = z * _x;
	return Vector(a, b, c);
}

Vector& Vector::operator+=(float _x)
{
	x += _x;
	y += _x;
	z += _x;

	return *this;
}

Vector& Vector::operator-=(float _x)
{
	x -= _x;
	y -= _x;
	z -= _x;

	return *this;
}

Vector& Vector::operator*=(float _x)
{
	x *= _x;
	y *= _x;
	z *= _x;

	return *this;
}

bool Vector::operator==(const Vector& other)
{
	return other.x == x && other.y == y && other.z == z;
}

bool Vector::operator!=(const Vector& other)
{
	return !operator==(other);
}