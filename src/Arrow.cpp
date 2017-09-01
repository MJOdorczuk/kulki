#include "Arrow.h"

Arrow::Arrow(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Arrow::Arrow()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Arrow::~Arrow()
{
    //dtor
}

Arrow Arrow::getUnit()
{
    Arrow result = *this;
    result.makeUnit();
    return result;
}

Arrow Arrow::getAxis()
{
    Arrow result = this->getUnit();
    if(result.x < 0) result.x = -result.x;
    if(result.y < 0) result.y = -result.y;
    if(result.z < 0) result.z = -result.z;
    return result;
}

void Arrow::setArrow(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Arrow Arrow::projectOn(Arrow with)
{
    Arrow result(this->x*with.getX(),this->y*with.getY(),this->z*with.getZ());
    return result;
}
