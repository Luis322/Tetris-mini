#ifndef PIEZA_L_H
#define PIEZA_L_H
#include "../miniwin.h"
using namespace miniwin;

class Pieza_L:public Tetromino
{
    public:
        Pieza_L(int _x,int _y):Tetromino(_x,_y){}

        void pintar(){
            color(ROJO);
            cuadrado(x,y);
            cuadrado(x,y-1);
            cuadrado(x,y+1);
            cuadrado(x+1,y+1);
        }

    protected:

    private:
};

#endif // PIEZA_L_H
