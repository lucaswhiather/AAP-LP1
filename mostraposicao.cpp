#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lib\conio.c"

//--------------------variavevis globais-----------------------

int OPC = 1;
int TECLA;
int TIPO_MENU = 1;
int COR_LETRA = 15;
int COR_SELECAO = 4;
int COR_FUNDO = 0;


int main(){   
    
    textcolor(7);
    _setcursortype(_NOCURSOR); // retira o cursor
    for(int x = 1; x<=2080; x++)
        printf("\333");
    
    gotoxy(1,1);
    for(int y=1; y<=140; y++)
        printf("%i\n",y);
    
    getch();


}
