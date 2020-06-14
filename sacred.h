//Sacred
//This will be one of the type of the birds
//It will inherit the caractheristics from the bird class

#ifndef SACRED_H
#define SACRED_H

#include "bird.h"

class Sacred: public Bird
{
public:
	Sacred(const Point& point);
	int hit();
	void draw();

};

#endif //SACRED