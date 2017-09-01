#ifndef WALL_H
#define WALL_H
#include "Arrow.h"
#include "collidable.h"

class Wall : public Collidable
{
    private:
        Arrow normal;
        double constant;
    public:
        Wall();
        Wall(Arrow normal, double constant);
        Wall(Arrow normal, Arrow point);
        Wall(Arrow p1, Arrow p2, Arrow p3);
        virtual ~Wall();
        Arrow getNormal(){return this->normal;}
        void setNormal(Arrow normal);
        void setWall(Arrow normal, double constant);
        void setConstant(double constant){this->constant = constant;}
        double getConstant(){return this->constant;}
    protected:

};

#endif // WALL_H
