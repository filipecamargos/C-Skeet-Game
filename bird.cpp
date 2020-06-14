//Bird File

/*********************************************
	This will take the fuction declared on the 
	bird class file
**********************************************/

#include "bird.h"

/*************************************************
	Check when the bird get hits
**************************************************/
int Bird::hit()
{
	kill();
	return 1;
}
