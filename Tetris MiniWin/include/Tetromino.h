#ifndef TETROMINO_H
#define TETROMINO_H
#include "../miniwin.h"
using namespace miniwin;

class Tetromino
{
    int TAM = 25;

    protected:
        int x;
        int y;
        int _color;
    public:
        Tetromino *perif;

        Tetromino(){x=0;y=0;}
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
        int getColor(){return _color;}
        void setX(int s){x=s;}
        void setY(int s){y=s;}
        virtual void pintar(void);


        Tetromino rotar_tetro(Tetromino m){
            Tetromino rotado(-m.getY(),m.getX());
            return rotado;
        }
        void rotar_derecha(Tetromino *perif){
            for(int i= 0;i<3;i++)
                perif[i]=rotar_tetro(perif[i]);
        }



};

#endif // TETROMINO_H
