#include "miniwin.h"
#include "Tetromino.h"
#include "Pieza_I.h"
#include "Pieza_J.h"
#include "Pieza_L.h"
#include "Pieza_O.h"
#include "Pieza_S.h"
#include "Pieza_T.h"
#include "Pieza_Z.h"
using namespace miniwin;

const int TAM = 25;

int main(){
    vredimensiona(TAM*10,TAM*20);
    int x=3;
    int y=1;
    //x=x*-1;
    int t=tecla();
    while (t!=ESCAPE){
        if(t==ABAJO)           {y++;}
        else if(t==DERECHA)    {x++;}
        else if(t==IZQUIERDA)  {x--;}

        if(t!=NINGUNA){
            borra();
            Pieza_Z Z(x,y);
            Z.rotar_derecha();
            refresca();
        }
        t=tecla();
    }
    //Pieza_Z Z(x,y);
    //refresca();
    vcierra();
    return 0;
}
