#ifndef PIEZA_L_H
#define PIEZA_L_H
#include "../miniwin.h"
using namespace miniwin;

class Pieza_L:public Tetromino
{
    public:
        Pieza_L(int _x,int _y):Tetromino(_x,_y){
            perif=new Tetromino[3]{{0,-1},{0,1},{1,1}};
            _color=1;
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

#endif // PIEZA_L_H
