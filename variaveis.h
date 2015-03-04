#ifndef _VARIAVEIS_H_


struct reg_save{
       int cor_letra;
       int cor_sel;
       int cor_fundo;
       int menu;
       int qtd_equip; 
       int tipo_disp; 
       int aux5;
       char nome_equip[33][15];  
       int pos[33];
       int jogos[3][17][32];

};

struct reg_save save;


int TECLA;
int OPC=1;
int OPC2=1;
int MSGE=0;
int X;
int CHECK=0;
int AUX=0,AUX2=0,AUX3=0,AUX4=0,AUX5=0,AUX6=1,AUX7=0,AUX8=0;

char nome_aux[33][15];
char LINHA[100] = {"\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315"};
char DISPUTA[3][25] = {"CHAVE","GRUPO","PONTO CORRIDO"};

#endif
