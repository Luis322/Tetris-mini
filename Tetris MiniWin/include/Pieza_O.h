#ifndef PIEZA_O_H
#define PIEZA_O_H
#include "../miniwin.h"
using namespace miniwin;

class Pieza_O: public Tetromino
{
    public:
        Pieza_O(int _x,int _y):Tetromino(_x,_y){}

        void pintar(){
            color(CYAN);
            cuadrado(x,y);
            cuadrado(x,y-1);
            cuadrado(x+1,y-1);
            cuadrado(x+1,y);
        }
    protected:

    private:
};

#endif // PIEZA_O_H
