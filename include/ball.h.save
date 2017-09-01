#ifndef BALL_H
#define BALL_H
#include "wall.h"

class Ball : public Collidable
{
    private:
        Arrow position;
        double mass;
        Arrow velocity;
        double radius;
        const double BASIC_VALUE = 1;
        const double NEVER = -1;
    public:
        /*ctor & dtor*/
        Ball();
        Ball(Arrow position, Arrow velocity, double mass, double radius);
        Ball(double x, double y, double z, double vx, double vy, double vz, double mass, double radius);
        Ball(double x, double y, double z, double mass, double radius);
        virtual ~Ball();
        /*getters and setters*/
        double getRadius(){return radius;}
        void setRadius(double radius);
        double getMass() { return mass; }
        void setMass(double val);
        Arrow getPosition(){return position;}
        double getX(){return position.getX();}
        double getY(){return position.getY();}
        double getZ(){return position.getZ();}
        void setPosition(Arrow position){this->position = position;}
        void setX(double x){this->position.setX(x);}
        void setY(double y){this->position.setY(y);}
        void setZ(double z){this->position.setZ(z);}
        Arrow getVelocity(){return velocity;}
        double getVelocityX(){return velocity.getX();}
        double getVelocityY(){return velocity.getY();}
        double getVelocityZ(){return velocity.getZ();}
        void setVelocity(Arrow velocity){this->velocity = velocity;}
        void setVelocityX(double x){this->velocity.setX(x);}
        void setVelocityY(double y){this->velocity.setY(y);}
        void setVelocityZ(double z){this->velocity.setZ(z);}
        /*triggered methods*/
        double ifCollide(Ball * collider);
        double ifCollide(Wall * collider);
        void makeMove(double t){this->position += this->velocity*t;}
        void collide(Ball * collider);
        void collide(Wall * collider);
    protected:

};

#endif // BALL_H
