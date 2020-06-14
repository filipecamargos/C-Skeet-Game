//Standard CPP

#include "standard.h"
#include "uiDraw.h"

// Set all the initial conditions for the 
//Standard Bird
Standard::Standard(const Point& point) : Bird(point)
{	
	//This part will set the codition for my Y cordinates
	// On game there is a radom number genarete for where the bird will start
	if (point.getY() >= 0) 
	{
		velocity.setDy(velocity.getDy() - 3);
	}
	else if (point.getY() < 0)
	{
		velocity.setDy(velocity.getDy() + 3);
	}
	velocity.setDx(velocity.getDx() + 3);

}
//When the bird is hit so the player makes one point
int Standard::hit()
{
	kill();
	return 1;
}

//draw the bird
void Standard::draw()
{
	drawCircle(point, 15);
}
