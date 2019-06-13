#ifndef PIEZA_T_H
#define PIEZA_T_H
#include "../miniwin.h"
using namespace miniwin;

class Pieza_T:public Tetromino
{
    public:
        Pieza_T(int _x,int _y):Tetromino(_x,_y){}

        void pintar(){
            color(MAGENTA);
            cuadrado(x,y);
            cuadrado(x+1,y);
            cuadrado(x-1,y);
            cuadrado(x,y-1);
        }

    protected:

    private:
};

#endif // PIEZA_T_H
