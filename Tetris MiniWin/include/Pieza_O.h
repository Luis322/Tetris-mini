#ifndef PIEZA_O_H
#define PIEZA_O_H
#include "../miniwin.h"
using namespace miniwin;

class Pieza_O: public Tetromino
{
    public:
        Pieza_O(int _x,int _y):Tetromino(_x,_y){
            perif=new Tetromino[3]{{0,-1},{1,-1},{1,0}};
            _color = 6;
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

#endif // PIEZA_O_H
