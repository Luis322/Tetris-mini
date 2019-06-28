#ifndef PIEZA_I_H
#define PIEZA_I_H
#include "../miniwin.h"
using namespace miniwin;

class Pieza_I: public Tetromino
{
    public:
        Pieza_I(int _x,int _y):Tetromino(_x,_y){
            perif=new Tetromino[3]{{0,-1},{0,1},{0,2}};
            _color = 7;
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

#endif // PIEZA_I_H
