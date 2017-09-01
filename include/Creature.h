#ifndef CREATURE_H
#define CREATURE_H

class CreatureNod
{
private:
    double x, y;
    double mass;
    double viscosity;
    double velocityX, velocityY;
public:
    double getX(){return this->x;}
    double getY(){return this->y;}
    double getMass(){return this->mass;}
    double getViscosity(){return this->viscosity;}
    double getVelocityX(){return this->velocityX;}
    double getVelocityY(){return this->velocityY;}
    void setX(double x){this->x = x;}
    void setY(double y){this->y = y;}
    void setMass(double m){this->mass = m;}
    void setViscosity(double v){this->viscosity = v;}
    void setVelocityX(double vx){this->velocityX = vx;}
    void setVelocityY(double vy){this->velocityY = vy;}
};

class Creature
{
    public:
        Creature();
        virtual ~Creature();
    protected:
    private:
};

#endif // CREATURE_H
