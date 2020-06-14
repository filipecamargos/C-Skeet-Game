//Class FlyngObject
/************************************
	Our flying object will be the base
	class for all the flaying obejects that
	is going to be in the game
*************************************/

#ifndef FLYINGOBJ_H
#define FLYINGOBJ_H

#include "point.h"
#include "velocity.h"

/*************************************************
This will be our base class for all the Flying items
**************************************************/
class FlyingObj
{
protected:
	Point point; //Coordinates X and Y
	Velocity velocity; //Determine the velocity moving on X and Y direction
	bool alive; //Check if the object is alvive

public:
	//Constructors
	FlyingObj();
	FlyingObj(const Point &point);

	//Geters and Setter related to Motion
	Point getPoint() const { return point; }
	Velocity getVelocity() const { return velocity; }
	void advance();
	void setPoint(const Point &point);
	void setVelocity(const Velocity &velocity);

	//Set the coditions related to the life of the object
	bool isAlive() const { return alive; }
	void kill();
	
};

#endif //FLYINGOBJ_H
