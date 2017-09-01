#include <iostream>
#include <time.h>
#include "Arrow.h"

using namespace std;
//using namespace sf;

int main()
{
    return 0;
}
/*
int main()
{
    RenderWindow window(VideoMode(1920, 1080), "Sierpinski");
    CircleShape point(1);
    srand(time(NULL));
    int a=3;
    int b;
    int c=0;
    double d=2.1;
    double tab[a+1][2];
    point.setOutlineColor(Color(0,255,0));
    for(int i=0; i<a; ++i)
    {
        tab[i][0]=rand()%1800;
        tab[i][1]=rand()%1000;
        point.setPosition(tab[i][0],tab[i][1]);
        window.draw(point);
    }
    point.setOutlineColor(Color(255,0,0));
    tab[a][0]=(rand()%1920000)/1000;
    tab[a][1]=(rand()%1080000)/1000;
    window.draw(point);
    while(window.isOpen())
    {
        while (window.isOpen())
        {
            Event event;
            if(c==500000) window.display();
            while(c==500000)
            {

            }
            while (window.pollEvent(event))
            {
                if (event.type == Event::Closed)
                    window.close();
            }
            b=rand()%a;
            tab[a][0]=(tab[a][0]+tab[b][0])/double(d);
            tab[a][1]=(tab[a][1]+tab[b][1])/double(d);
            point.setPosition(tab[a][0],tab[a][1]);
            window.draw(point);
            //window.clear();
            //window.draw(shape);
            c++;
        }
    }
    return 0;
}*/
