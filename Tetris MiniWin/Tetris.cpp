#include "miniwin.h"
#include <cstdlib>
#include "Tetromino.h"
#include "Pieza_I.h"
#include "Pieza_J.h"
#include "Pieza_L.h"
#include "Pieza_O.h"
#include "Pieza_S.h"
#include "Pieza_T.h"
#include "Pieza_Z.h"

//using namespace miniwin;

const int TAM = 25;
const int FILAS = 20;
const int COLUMNAS = 10;

void cuadrado(int x,int y){
            rectangulo_lleno(1 + x*TAM,
                             1 + y*TAM,
                             x * TAM + TAM,
                             y * TAM + TAM);
}

typedef int Tablero[COLUMNAS][FILAS];

void tablero_vacia(Tablero &T){
    for(int i=0;i<COLUMNAS;i++ ){
        for(int j=0;j<FILAS;j++)
        T[i][j]=BLANCO;/// Casilla vacia
    }
}
void tablero_pinta(const Tablero &T){
    for(int i=0;i<COLUMNAS;i++ ){
        for(int j=0;j<FILAS;j++){
        color(T[i][j]);
        cuadrado(i,j);
        }
    }
}
void tablero_incrustar(Tablero &T,Tetromino P){
    int ox=P.getX();
    int oy=P.getY();
    T[ox][oy]=P.getColor();
    for(int i=0;i<3;i++)
        T[ox+P.perif[i].getX()][oy+P.perif[i].getY()]=P.getColor();
}
bool tablero_colision(const Tablero &T, Tetromino P){
    int ox=P.getX();
    int oy=P.getY();
    ///Comprobacion de limites
    for(int i=0;i<3;i++){
        if (ox+P.perif[i].getX()<0 || oy+P.perif[i].getY()>=COLUMNAS)
            return true;
        if (oy+P.perif[i].getY()<0 || oy+P.perif[i].getY()>=FILAS)
            return true;
        if (T[ox+P.perif[i].getX()][oy+P.perif[i].getY()] != NEGRO)
            return true;
    }
    return false;
}
void pieza_nueva(Tetromino P){

}

int main(){

    vredimensiona(TAM*COLUMNAS,TAM*FILAS);


    Tablero T;
    tablero_vacia(T);
    //tablero_pinta(T);

    //Tetromino Pieza_Z;
    int x=4;
    int y=5;
    Pieza_Z P(x,y);
    P.pintar();
    refresca();

    int t=tecla();
    while(t!=ESCAPE){
        if(t==ARRIBA){
            //Z.rotar_derecha(Z.perif);

            //tablero_pinta(T);
            //tablero_incrustar(T,Z);
            P.rotar_derecha(P.perif);
            borra();
            tablero_vacia(T);
            //tablero_pinta(T);

            P.pintar();
            refresca();
        }

        /*if(t==DERECHA){
            x++;
            borra();
            refresca();
            P.pintar();
            refresca();
        }
        else if(t==IZQUIERDA){x--;}
        else if(t==ABAJO){y++;}*/


        /*if(t!=NINGUNA){
            borra();
            Z.pintar();
            refresca();

        }*/


        /*if(tablero_colision(T,Z)){
            Z;
        }
        if(t=ESPACIO){
            tablero_incrustar(T,Z);
        }
        if(t=NINGUNA){
            borra();
            tablero_pinta(T);
            Z.pintar();
            refresca();
        }*/
       t=tecla();
    }
    //vcierra();
    return 0;
}
