#ifndef TETROMINO_H
#define TETROMINO_H
#include "../miniwin.h"
using namespace miniwin;

class Tetromino
{
    int TAM = 25;

    public:
        Tetromino(){

        }
        Tetromino(int _x, int _y){
            x=_x;
            y=_y;
        }
        void cuadrado(int x,int y){
            rectangulo_lleno(1 + x*TAM,
                             1 + y*TAM,
                             x * TAM + TAM,
                             y * TAM + TAM);
        }
        virtual void pintar()=0;
        virtual void rotar_derecha()=0;
        void swap_der(int &x, int &y){
            int m=x;
            x=y;
            y=m*-1;
        }


    protected:
        int x;
        int y;
    private:
};

#endif // TETROMINO_H
