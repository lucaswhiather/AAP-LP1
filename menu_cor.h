#ifndef _MENU_COR_H_

char COR[16][20] = {     //LISTA DE CORES//
        "PRETO",                //0
        "AZUL",                 //1
        "VERDE",                //2
        "VERDE-\265GUA",        //3
        "VERMELHO",             //4 
        "ROXO",                 //5
        "AMARELO",              //6
        "BRANCO",               //7 
        "CINZA",                //8
        "AZUL CLARO",           //9
        "VERDE CLARO",          //10
        "VERDE-\265GUA CLARO",  //11
        "VERMELHO CLARO",       //12
        "LIL\265S",             //13
        "AMARELO CLARO",        //14
        "BRANCO BRILHANTE"      //15
};                   

void MenuCorLetras() //------------------------------MENU COR DAS LETRAS------------------------------
{
    textbackground(save.cor_fundo);
    textcolor(save.cor_letra);                                                
    if(OPC<0) OPC=16;
    if(OPC>16) OPC=0;
                       
    system("cls");
    printf("\n\n");
    printf("%s",LINHA);
    printf("\n                                     COR DAS LETRAS");

    for(X=0; X<=15; X++)
    {                                      
        printf("\n");
        printf("    ");
        if (OPC==X) textbackground(save.cor_sel);
        textcolor(X);
        printf("%s",COR[X]);
        textcolor(save.cor_letra);
        textbackground(save.cor_fundo);
    }                       
                      
    printf("\n\n"); 
    printf("%s",LINHA); 
    printf("        "); 
    ItemDoMenu(16,"Voltar",0);     
            
    TeclaCimaBaixo();
        
    if (TECLA==13) //tecla enter
    {
        if(OPC==16){OPC=1; save.menu=0; MSGE=0;}
        else save.cor_letra=OPC;
    }                                                    
}

void MenuCorSelecao() //------------------------------MENU COR DE SELEÇÃO------------------------------
{                                           
    textbackground(save.cor_fundo);
    textcolor(save.cor_letra);
    if(OPC<0) OPC=16;
    if(OPC>16) OPC=0;
                       
    system("cls");
    printf("\n\n");
    printf("%s",LINHA);
    printf("\n                                     COR DE SELECAO");
            
    for(X=0; X<=15; X++)
    {                                      
        printf("\n");
        printf("    ");
        if (OPC==X) textbackground(save.cor_sel);
        textcolor(X);
        printf("%s",COR[X]);
        textcolor(save.cor_letra);
        textbackground(save.cor_fundo);
    }                     
                                 
    printf("\n\n");
    printf("%s",LINHA);       
    printf("        "); 
    ItemDoMenu(16,"Voltar",0);     
            
    TeclaCimaBaixo();
                    
    if (TECLA==13) //tecla enter
    {
        if(OPC==16){OPC=1; save.menu=0; MSGE=0;}
        else save.cor_sel=OPC;
    } 
                                                   
}//FIM DO MENU COR DE SELEÇÃO
        
void MenuCorFundo()//------------------------------MENU COR DE FUNDO------------------------------
{                                           
    textbackground(save.cor_fundo);
    textcolor(save.cor_letra);
    if(OPC<0) OPC=16;
    if(OPC>16) OPC=0;
                       
    system("cls");
    printf("\n\n");
    printf("%s",LINHA);
    printf("\n                                     COR DE FUNDO");
            
    for(X=0; X<=15; X++)
    {                                      
        printf("\n");
        printf("    ");
        if (OPC==X) textbackground(save.cor_sel);
        textcolor(X);
        printf("%s",COR[X]);
        textcolor(save.cor_letra);
        textbackground(save.cor_fundo);
    }                     
                            
    printf("\n\n"); 
    printf("%s",LINHA); 
    printf("        "); 
    ItemDoMenu(16,"Voltar",0);     
                 
    TeclaCimaBaixo();            
                  
    if (TECLA==13) //tecla enter
    {
        if(OPC==16){OPC=1; save.menu=0; MSGE=0;}
        else save.cor_fundo=OPC;
    } 
                                                   
}//FIME DO MENU COR DE FUNDO


#endif
