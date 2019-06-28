#ifndef PIEZA_Z_H
#define PIEZA_Z_H
#include "../miniwin.h"
using namespace miniwin;
#include <iostream>
using namespace std;
class Pieza_Z:public Tetromino
{
    public:
        Pieza_Z(int _x,int _y):Tetromino(_x,_y){
            perif=new Tetromino[3]{{-1,-1},{0,-1},{1,0}};
            _color=2;
        }

        void pintar(){
            color(_color);
            cuadrado(x,y);
            for(int i=0;i<3;i++)
                cuadrado(x+perif[i].getX(),y+perif[i].getY());
        }


};

#endif // PIEZA_Z_H
