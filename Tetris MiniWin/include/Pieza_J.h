#ifndef PIEZA_J_H
#define PIEZA_J_H
#include "../miniwin.h"
using namespace miniwin;

class Pieza_J:public Tetromino
{
    public:
        Pieza_J(int _x,int _y):Tetromino(_x,_y){
            perif=new Tetromino[3]{{0,-1},{0,1},{-1,1}};
            _color=3;
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

#endif // PIEZA_J_H
