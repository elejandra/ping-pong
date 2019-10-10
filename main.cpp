
#include <stdio.h>
#include <conio.h>
#include "libgame.h"
#include "pong.h"

using namespace std;



int main()
{   int cont=0, op_juego;
    OcultaCursor();
    pintar_marco();//margenes del juego

    MENU M;M.pintar_portada(op_juego);//la portada deñl juego
    JUGADOR A(6,15); A.pintar();//se crea la paleta de la izquierda
    JUGADOR B(74,15); B.pintar();//se crea la paleta de la derecha

    PELOTA P(38,14,1,1);
    char tecla;

    while(1){

        if(kbhit()){ //esta funcion detecta si se ha precionado una tecla, asi que si se preciona una tecla entra
            A.borrar(); B.borrar();
            tecla=getch();//asigna el valor de la tecla que se preciono a la variable tecla
            if( tecla=='q'&& A.RY()>5)A.Y(-1);
            else if( tecla=='a' && A.RY()<21)A.Y(1);
            if(tecla=='o' && B.RY()>5) B.Y(-1);
            else if(tecla=='l' && B.RY()<21) B.Y(1);
            A.pintar(); B.pintar();
        }

        if (!cont++) P.mover(A,B);
        if(cont>3) cont=0;
        pausa(10);
    }
    return 0;
}
