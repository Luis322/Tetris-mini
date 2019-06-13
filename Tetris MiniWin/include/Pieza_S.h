#ifndef PIEZA_S_H
#define PIEZA_S_H
#include "../miniwin.h"
using namespace miniwin;

class Pieza_S:public Tetromino
{
    public:
        Pieza_S(int _x,int _y):Tetromino(_x,_y){}

        void pintar(){
            color(AMARILLO);
            cuadrado(x,y);
            cuadrado(x,y-1);
            cuadrado(x+1,y-1);
            cuadrado(x-1,y);
        }

    protected:

    private:
};

#endif // PIEZA_S_H
