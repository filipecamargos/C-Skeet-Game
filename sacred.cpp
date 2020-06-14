//Sacred CPP

#include "sacred.h"
#include "uiDraw.h"

//Set the initail Conditions 
//Determined the moving of the bird
Sacred::Sacred(const Point& point) : Bird(point)
{
	//This part will set the codition for my Y cordinates
	// On game there is a radom number genarete for where the bird will start
	if (point.getY() >= 0)
	{
		velocity.setDy(velocity.getDy() - 1);
	}
	else if (point.getY() < 0)
	{
		velocity.setDy(velocity.getDy() + 1);
	}
	velocity.setDx(velocity.getDx() + 3);
}


//When the bird is hit  return 1
int Sacred::hit()
{	
	kill();
	return -10;
}

//draw the bird
void Sacred::draw()
{
	drawSacredBird(point, 15);
}
