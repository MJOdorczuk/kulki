#include "ScreenItems.h"

ScreenItem::ScreenItem(unsigned short x, unsigned short y, unsigned short width, unsigned short height)
{
    this->positionX=x;
    this->positionY=y;
    this->width=width;
    this->height=height;
}

ScreenItem::~ScreenItem()
{
    //dtor
}
