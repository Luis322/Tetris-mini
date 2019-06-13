#ifndef PIEZA_I_H
#define PIEZA_I_H
#include "../miniwin.h"
using namespace miniwin;

class Pieza_I: public Tetromino
{
    public:
        Pieza_I(int _x,int _y):Tetromino(_x,_y){}

        void pintar(){
            color(BLANCO);
            cuadrado(x,y);
            cuadrado(x,y-1);
            cuadrado(x,y+1);
            cuadrado(x,y+2);
        }
    protected:

    private:
};

#endif // PIEZA_I_H
