//tough CPP
#include "tough.h"
#include "uiDraw.h"

//When the bird is hit
Tough::Tough(const Point& point) : Bird(point)
{
	hp = 3; // The initial condition of the Tough bird

	//This set the coditions for the velocity determined and direction
	if (point.getX() >= 0)
	{
		velocity.setDx(velocity.getDx() - 2);
	}
	else if (point.getX() < 0)
	{
		velocity.setDx(velocity.getDx() - 2);
	}

	velocity.setDy(velocity.getDy() - 3);
}

//Ched to see if was hit and killed
int Tough::hit()
{	
	hp--; //Reduce the points on the bird 
	if (hp == 0) // When the bird gets hit three times it is set to 0 so it kills
	{
		kill();
		return 3; //extra 2 points on the last hit
	}
	return 1;
}

//draw the Tough bird
void Tough::draw()
{
	drawToughBird(point, 20, hp);
}