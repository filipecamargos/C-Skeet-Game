//FlyingObjec CPP File

/***********************************
	This file will take all the fuctions
	that were declared on the flyingObj
	class
***********************************/

#include "flyingObj.h"
//Default Constructor
FlyingObj::FlyingObj() : point(0, 0), velocity(0, 0)
{
	alive = true;
}
//No Default Constructor
FlyingObj::FlyingObj(const Point &point)
{
	setPoint(point);
	alive = true;
	velocity.setDx(0);
	velocity.setDy(0);
}
/***************************************
	This fuction set the Point
****************************************/
void FlyingObj::setPoint(const Point &point)
{
	this->point = point;
}

/***************************************
	This fuction set velocity
****************************************/
void FlyingObj::setVelocity(const Velocity &velocity)
{
	this->velocity = velocity;
}

/********************************************
	This fuction is set to kill the object
********************************************/
void FlyingObj::kill()
{
	alive = false;
}

/****************************************
	This fuction make the object advance
*****************************************/
void FlyingObj::advance()
{
	point.setX(point.getX() + velocity.getDx());
	point.setY(point.getY() + velocity.getDy());
}