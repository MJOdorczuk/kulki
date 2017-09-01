#include "Ball.h"

Ball::Ball()
{
    this->position.setArrow(0,0,0);
    this->velocity.setArrow(0,0,0);
    this->mass = BASIC_VALUE;
    this->radius = BASIC_VALUE;
}

Ball::Ball(Arrow position, Arrow velocity, double mass, double radius)
{
    this->position = position;
    this->velocity = velocity;
    if(mass>0) this->mass = mass;
    else this->mass = BASIC_VALUE;
    if(radius>0) this->radius = radius;
    else this->radius = BASIC_VALUE;
}

Ball::Ball(double x, double y, double z, double vx, double vy, double vz, double mass, double radius)
{
    this->position.setArrow(x,y,z);
    this->velocity.setArrow(vx,vy,vz);
    if(mass>0) this->mass = mass;
    else this->mass = BASIC_VALUE;
    if(radius>0) this->radius = radius;
    else this->radius = BASIC_VALUE;
}

Ball::Ball(double x, double y, double z, double mass, double radius)
{
    this->position.setArrow(x,y,z);
    if(mass>0) this->mass = mass;
    else this->mass = BASIC_VALUE;
    if(radius>0) this->radius = radius;
    else this->radius = BASIC_VALUE;
    this->velocity.setArrow(0,0,0);
}

Ball::~Ball()
{
    //dtor
}

void Ball::setMass(double mass)
{
    if(mass<=0) this->mass = BASIC_VALUE;
    else this-> mass = mass;
}

void Ball::setRadius(double radius)
{
    if(radius>0) this->radius = radius;
    else radius = BASIC_VALUE;
}

double Ball::ifCollide(Ball *collider)
{
    Arrow posdif = this->getPosition() - collider->getPosition();
    Arrow veldif = this->getVelocity() - collider->getVelocity();
    double a = veldif.getLengthSquared();
    if(a == 0) return NEVER;
    double b = veldif.getX()*posdif.getX() + veldif.getY()*posdif.getY() + veldif.getZ()*posdif.getZ();
    double c = posdif.getLengthSquared() - this->radius*this->radius - collider->radius*collider->radius - 2*this->radius*collider->radius;
    double delta = b*b-a*c;
    if(delta < 0) return NEVER;
    else
    {
        delta = sqrt(delta);
        double t = (b-delta)/a;
        if(t >= 0) return t;
        else t += 2*delta/a;
        if(t >= 0) return t;
        else return NEVER;
    }
}

double Ball::ifCollide(Wall * collider)
{
    double div = this->velocity.getX()*collider->getNormal().getX()+this->velocity.getY()*collider->getNormal().getY()+this->velocity.getZ()*collider->getNormal().getX();
    if(div == 0)return NEVER;
    double t = -(this->position.getX()*collider->getNormal().getX()+this->position.getY()*collider->getNormal().getY()+this->position.getZ()*collider->getNormal().getZ()+collider->getConstant())/div;
    if(t >= 0) return t;
    else
    {
        t -= 2*collider->getConstant()/div;
        if(t >= 0) return t;
        else return NEVER;
    }
}

void Ball::collide(Ball * collider)
{
    Arrow posdif = this->getPosition() - collider->getPosition();
    posdif.makeUnit();
    posdif.projectOn(collider->getVelocity() - this->getVelocity());
    this->velocity += posdif*collider->getMass()/this->getMass();
    collider->velocity -= posdif*this->getMass()/collider->getMass();
}

void Ball::collide(Wall * collider)
{
    Arrow normal = collider->getNormal() * (-(collider->getNormal().getX()*this->getX() + collider->getNormal().getY()*this->getY() + collider->getNormal().getZ()*this->getZ() + collider->getConstant())/(collider->getNormal().getLengthSquared()));
    normal.makeUnit();
    this->velocity -= this->velocity.projectOn(normal) * 2;
}
