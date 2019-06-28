#ifndef PIEZA_T_H
#define PIEZA_T_H
#include "../miniwin.h"
using namespace miniwin;

class Pieza_T:public Tetromino
{
    public:
        Pieza_T(int _x,int _y):Tetromino(_x,_y){
            perif=new Tetromino[3]{{1,0},{-1,0},{0,-1}};
            _color=5;
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

#endif // PIEZA_T_H
