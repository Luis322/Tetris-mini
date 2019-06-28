#ifndef PIEZA_S_H
#define PIEZA_S_H
#include "../miniwin.h"
using namespace miniwin;

class Pieza_S:public Tetromino
{
    public:
        Pieza_S(int _x,int _y):Tetromino(_x,_y){
            perif=new Tetromino[3]{{0,-1},{1,-1},{-1,0}};
            _color=4;
        }

        void pintar(){
            color(_color);
            cuadrado(x,y);
            for(int i=0;i<3;i++)
                cuadrado(x+perif[i].getX(),y+perif[i].getY());
        }

    protected:

    private:
};

#endif // PIEZA_S_H
