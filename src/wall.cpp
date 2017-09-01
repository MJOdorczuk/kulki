#include "wall.h"

Wall::Wall()
{
    this->normal.setArrow(1,1,1);
    this->constant = 0;
}

Wall::~Wall()
{
    //dtor
}

void Wall::setNormal(Arrow normal)
{
    normal.makeUnit();
    if(normal.getLength() != 0) this->normal = normal;
}

void Wall::setWall(Arrow normal, double constant)
{
    normal.makeUnit();
    if(normal.getLength() != 0)
    {
        this->constant = constant;
        this->normal = normal;
    }
}

Wall::Wall(Arrow normal, double constant)
{
    normal.makeUnit();
    if(normal.getLength() != 0)
    {
        this->constant = constant;
        this->normal = normal;
    }
    else
    {
        this->normal.setArrow(1,1,1);
        this->constant = 0;
    }
}

Wall::Wall(Arrow normal, Arrow point)
{
    normal.makeUnit();
    if(normal.getLength() == 0)
    {
        this->normal.setArrow(1,1,1);
        this->constant = 0;
    }
    else
    {
        this->constant = -(normal.getX()*point.getX() + normal.getY()*point.getY() + normal.getZ()*point.getZ());
        this->normal = normal;
    }
}

Wall::Wall(Arrow p1, Arrow p2, Arrow p3)
{
    Arrow vector1 = p2 - p1;
    Arrow vector2 = p3 - p2;
    Arrow normal = vector1*vector2;
    if(normal.getLength() == 0)
    {
        this->normal.setArrow(1,1,1);
        this->constant = 0;
    }
    else
    {
        this->constant = -(normal.getX()*p1.getX() + normal.getY()*p1.getY() + normal.getZ()*p1.getZ());
        this->normal = normal;
    }
}
