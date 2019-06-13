#ifndef PIEZA_J_H
#define PIEZA_J_H
#include "../miniwin.h"
using namespace miniwin;

class Pieza_J:public Tetromino
{
    public:
        Pieza_J(int _x,int _y):Tetromino(_x,_y){}

        void pintar(){
            color(AZUL);
            cuadrado(x,y);
            cuadrado(x,y-1);
            cuadrado(x,y+1);
            cuadrado(x-1,y+1);
        }

    protected:

    private:
};

#endif // PIEZA_J_H
