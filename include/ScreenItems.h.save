#ifndef SCREENITEMS_H
#define SCREENITEMS_H
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

using namespace sf;

class ScreenItem
{
    private:

        ////////
        //
        // VARIABLES
        //
        ////////

        ////
        //
        // PositionX and positionY are informations about set position of upper left corner of the item
        //
        ////
        unsigned short positionX, positionY;

        ////
        //
        // Width and height are informations about set width and hight of the item
        //
        ////
        unsigned short width, height;

    public:
        ScreenItem(unsigned short x, unsigned short y, unsigned short width, unsigned short height);
        virtual ~ScreenItem();
        unsigned short onClick();
        unsigned short getMiddleX(){return positionX+width/2;};
        unsigned short getMiddleY(){return positionY+height/2;};
        unsigned short getX(){return positionX;};
        unsigned short getY(){return positionY;};
        unsigned short getWidth(){return width;};
        unsigned short getHeight(){return height;};
    protected:

};

class Button: public ScreenItem
{
    private:
        virtual bool OnClickListener() = 0;
    public:
        Button(unsigned short x, unsigned short y, unsigned short width, unsigned short height):ScreenItem(x,y,width,height){}
        virtual ~Button();

};

#endif // SCREENITEMS_H
