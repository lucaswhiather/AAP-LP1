#ifndef _MENU_1_H_

void Menu_1()
{
    textbackground(save.cor_fundo);
    textcolor(save.cor_letra);
    if(OPC<1) OPC=4;
    if(OPC>4) OPC=1;
             
    system("cls");
    printf("\n\n");
    printf("%s",LINHA);
    printf("\n                       QUANTIDADE DE EQUIPES QUE DISPUTAR%cO",198); // http://www.asciitable.com/
    printf("\n\n\n\n  ");
            
    ItemDoMenu(1,"Configurar",0);            
    printf("\n\n  ");                                
    ItemDoMenu(2,"Salvar",0);            
    printf("\n\n  ");                       
    ItemDoMenu(3,"Avan\207ar",0);
    printf("\n\n  ");            
    ItemDoMenu(4,"Sair",0);                                       
    printf("\n\n\n\n\n\n");

    if (save.qtd_equip>0)
    printf("         Equipes: %i ",save.qtd_equip);  
                
    printf("\n\n");
    printf("%s",LINHA);
                                                                 
    if(MSGE==1)
    {
        _setcursortype(_NORMALCURSOR);
        printf("Digite a quantidade de equipes: ");
        scanf("%i",&save.qtd_equip);                            
        MSGE=0;
        OPC=5;
        _setcursortype(_NOCURSOR);
        if((save.qtd_equip<3)||(save.qtd_equip>32)) 
        {
            save.qtd_equip=0;                                                                                                             
            MSGE=4;
        }           
    }
    else if(MSGE==2)SairDoPrograma();            
    else if(MSGE==3)
    {
        printf("Configure antes de avan\207ar");
        MSGE=0;
        fflush(stdin);
        TECLA = getch();
    }
    else if(MSGE==4)
    {
        printf("Minimo 3 e no maximo 32");
        fflush(stdin);
        TECLA = getch();
        MSGE=0;
    }
    else if(MSGE==5)SalvarDados(); 
    else TeclaCimaBaixo();          
             
    if (TECLA==13) //tecla enter
    {
        if(OPC==1)MSGE=1; //configurar
        if(OPC==2)MSGE=5; // salvar
        if(OPC==3) // avançar                   
        if(save.qtd_equip>=3){save.menu=2; OPC=1;}                      
        else MSGE=3;
                                                                               
        if(OPC==4)MSGE=2; // sair                           
    }                                       
}

#endif
