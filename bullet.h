//Our Bullet Class

/*********************************************************
	This Class will the object Bullet 
	it will take points and velocity as heritage
	from the flyingobj class
***********************************************************/

#ifndef BULLET_H
#define BULLET_H

#include "flyingObj.h"
#include "uiDraw.h"
#include <cmath>

//Our Bullet object is a derived class of the FlyingObj
class Bullet : public FlyingObj
{
public:
	Bullet();
	void draw() const;
	void fire(const Point &point, const float &angle);
};




#endif // !BULLET_H
