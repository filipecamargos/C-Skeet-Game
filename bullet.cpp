//Bullet CPP File

/************************************
This will take the fuction declared
on the Bullet Class file
*************************************/
#define BULLET_SPEED 10.0
#define M_PI 3.14

#include "bullet.h"
#include "uiDraw.h"
#include <cmath>

/**************************************
	Our Defalt Constructor
***************************************/
Bullet::Bullet()
{
	alive = true;
}

/**************************************
	Meant to fire the bullets on the pointed
	direction taking in consideration the angle determined 
***************************************/
void Bullet::fire(const Point &point, const float &angle)
{	
	this->point = point;

	float dx = BULLET_SPEED * (-cos(M_PI / 180.0 * angle));
	float dy = BULLET_SPEED * (sin(M_PI / 180.0 * angle));

	velocity.setDx(velocity.getDx() + dx);
	velocity.setDy(velocity.getDy() + dy);
}

/**************************************
	Meant to draw the object
***************************************/
void Bullet::draw() const
{
	drawDot(point);
}
