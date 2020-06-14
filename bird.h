//Bird Class
/*The bird class will be a based class
resposiable to provided the right information 
for all the derived bird class that will be inherit
its main caracteristc and atributs*/

#ifndef BIRD_H
#define BIRD_H

#include "flyingObj.h"

class Bird : public FlyingObj //Derived from the FlyingObj
{
public:
	Bird(const Point & point) : FlyingObj(point){}
	virtual int hit();
	virtual void draw() = 0;
};

#endif //BIRD_H
