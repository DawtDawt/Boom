#ifndef BOOM_VECTOR
#define BOOM_VECTOR

class Vector
{
public:
	Vector();
	Vector(const Vector& other);
	Vector(float _x);
	Vector(float _x, float _y, float _z);

	Vector& operator=(const Vector& other);
	Vector operator+(const Vector& other);
	Vector operator-(const Vector& other);
	Vector operator*(const Vector& other);
	Vector& operator+=(const Vector& other);
	Vector& operator-=(const Vector& other);
	Vector& operator*=(const Vector& other);

	Vector operator+(float _x);
	Vector operator-(float _x);
	Vector operator*(float _x);
	Vector& operator+=(float _x);
	Vector& operator-=(float _x);
	Vector& operator*=(float _x);

	bool operator==(const Vector& other);
	bool operator!=(const Vector& other);

	float x;
	float y;
	float z;
};

#endif