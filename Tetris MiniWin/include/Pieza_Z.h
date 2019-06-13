#ifndef PIEZA_Z_H
#define PIEZA_Z_H
#include "../miniwin.h"
using namespace miniwin;

class Pieza_Z:public Tetromino
{
    public:
        Pieza_Z(int _x,int _y):Tetromino(_x,_y){}

        void pintar(){
            color(VERDE);
            cuadrado(x  , y);
            cuadrado(x-1,y-1);
            cuadrado(x  ,y-1);
            cuadrado(x+1,y  );
        }
        void rotar_derecha(){
            color(VERDE);
            cuadrado(x,y);
            swap_der(x,y);
            x--;y--;
            cuadrado(x,y);
            x++;
            cuadrado(x,y);
            x++;y++;
            cuadrado(x,y);
        }
    protected:

    private:
};

#endif // PIEZA_Z_H
