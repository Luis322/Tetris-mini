#ifndef TETROMINO_H
#define TETROMINO_H
#include "../miniwin.h"
using namespace miniwin;

class Tetromino
{
    int TAM = 25;

    public:
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
        int getX(){return x;}
        int getY(){return y;}
        void pintar();
        /*virtual void pintar(Tetromino *perif){
            cuadrado(x,y);
            for(int i=0;i<3;i++)
                cuadrado(perif[i])
        }*/
        void rotar_derecha();
        /*void swap_der(int &x, int &y){
            int m=x;
            x=y;
            y=m*-1;
        }*/


    protected:
        int x;
        int y;
    private:
};

#endif // TETROMINO_H
