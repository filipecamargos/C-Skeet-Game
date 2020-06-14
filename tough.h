//Tough
//It will inherit the caractheristics from the bird class

#ifndef TOUGH_H
#define TOUGH_H

#include "bird.h"

class Tough : public Bird
{
private:
	int hp;
public:
	Tough(const Point& point);
	int hit();
	void draw();

};

#endif // TOUGH