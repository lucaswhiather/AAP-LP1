/*
GERENCIADOR DE LIGAS ESPORTIVAS
VERSÃO:1.83

FEITO POR: 
EDUARDO AUGUSTO MAXIMO DE CARVALHO            EMAIL:DU-ATA@HOTMAIL.COM
GERALDO DONIZETTE BAPTISTA DE SOUZA           EMAIL:GERALDO.LEITO@HOTMAIL.COM
LUCAS WHIATHER ABRÃO DE SOUZA                 EMAIL:LUCASWAS@GMAIL.COM
*/

// lista códigos para caracteres especiais  http://www.asciitable.com/  converter de decimal para octal

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<string.h>
#include "lib\conio.c"

#define CIMA 72
#define BAIXO 80
#define DIREITA 77
#define ESQUERDA 75

float versao = 1.83;
char data[11] = {"09/12/2012"};

#include "variaveis.h" 
#include "func.h"

#include "menu_0.h"
#include "menu_cor.h"
#include "menu_1.h"
#include "menu_2.h"
#include "menu_3.h"
#include "menu_4.h"
#include "mostra_chave.h"
#include "chave.h"
#include "ponto_corrido.h"
#include "grupo.h"
#include "grupo_chave.h"
#include "grupo_jogos.h"


int main()
{
    save.menu=0;
    save.qtd_equip=0;
    save.tipo_disp=-1;
    save.cor_letra=15;
    save.cor_sel=4;
    save.cor_fundo=0;
    Preencher(0);
        
    _setcursortype(_NOCURSOR); // retira o cursor          
    printf("\n\n");
    printf("%s",LINHA);
    printf("\n                                                                              ");
    printf("\n                                                                              \n");
    Centraliza("\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273");
    printf("\n                      \272                                 \272");
    printf("\n                      \272 "); textcolor(BLUE); printf("GERENCIADOR DE LIGAS ESPORTIVAS"); textcolor(save.cor_letra);printf(" \272");
    printf("\n                      \272                                 \272\n");
    Centraliza("\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274");
    printf("\n                                    ");
    printf("\n                                   ");
    printf("\n                                                                               ");
    printf("\n                                                                               ");
    printf("\n                                                                               ");
    printf("\n                                                                               ");
    printf("\n                                                                               ");
    printf("\n Eduardo Augusto M\240ximo de Carvalho        EMAIL:du-ata@hotmail.com      ");      
    printf("\n Geraldo Donizette Baptista de Souza       EMAIL:geraldo.leito@hotmail.com     ");            
    printf("\n Lucas Whiather Abr\306o de Souza             EMAIL:lucaswas@gmail.com         ");            
    printf("\n\n");
    printf("%s",LINHA);       
    Centraliza("INICIAR");
    getch ();     

    while(CHECK==0)
    {              
        if(save.menu==-1)MenuCorLetras();
        else if(save.menu==-2)MenuCorSelecao();
        else if(save.menu==-3)MenuCorFundo();        
        else if(save.menu==0)Menu_0(); //Menu inicial                                     
        else if(save.menu==1)Menu_1(); //Quantidade de equipes                                                                            
        else if(save.menu==2)Menu_2(); //Tipo de disputa
        else if(save.menu==3)Menu_3(); //configuração de jogos entre as equipes
        else if(save.menu==4)Menu_4(); //definir nome das equipes  
        else if(save.menu==5)MostraChave(); //chave
        else if(save.menu==6)PontoCorrido(); //ponto corrido
        else if(save.menu==7)Grupo(); //grupo
        else if(save.menu==8)GrupoChave(); //mostra a chave dos grupos  
        else if(save.menu==9)GrupoJogos(); //mostra os jogos do grupo               
    }
    return 0;
} 
