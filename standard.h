//Standard Bird
//This will be one of the type of the birds
//It will inherit the caractheristics from the bird class

#ifndef STANDARD_H
#define STANDARD_H

#include "bird.h"

class Standard : public Bird
{
public:
	Standard(const Point& point);
	int hit();
	void draw();

};

#endif //STANDARD_H