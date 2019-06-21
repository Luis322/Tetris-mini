#ifndef PIEZA_Z_H
#define PIEZA_Z_H
#include "../miniwin.h"
using namespace miniwin;
#include <iostream>
using namespace std;
class Pieza_Z:public Tetromino
{
    Tetromino *perif_Z;
    public:
        Pieza_Z(int _x,int _y):Tetromino(_x,_y){
            perif_Z=new Tetromino[3]{{-1,-1},{0,-1},{1,0}};
        }

        void pintar(){
            color(VERDE);
            cuadrado(x  ,y );
            cuadrado(x-1,y-1);
            cuadrado(x  ,y-1);
            cuadrado(x+1,y  );
            for(int i=0;i<3;i++)
                int a,b;
                a=perif_Z[i].getX();
                b=perif_Z[i].getY();
                cuadrado(a,b);
        }
        void rotar_derecha(){
            color(VERDE);
            cuadrado(y*-1,x);
            cuadrado(y*-1-1,x-1);
            cout<<"("<<x<<","<<y<<")"<<endl;
            cuadrado(y*-1-1,x);
            cuadrado(y*-1,x+1);
        }
        void arrayPerifericos(){};
    protected:

    private:
};

#endif // PIEZA_Z_H
