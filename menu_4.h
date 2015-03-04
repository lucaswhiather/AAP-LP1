#ifndef _MENU_4_H_

void Menu_4()
{
    textbackground(save.cor_fundo);
    textcolor(save.cor_letra);
    system("cls");
    DefinirTela(80,12+save.qtd_equip);
    printf("\n\n");
    printf("%s",LINHA);                
    printf("\n                             EQUIPES\n");
    for(X=1; X<=save.qtd_equip; X++)     
          if(AUX5+1>X)printf("\n %i- %s",X,save.nome_equip[X]);
              
    printf("\n\n  Equipes: %i    Disputa: %s",save.qtd_equip,DISPUTA[save.tipo_disp]);
    printf("\n\n");
    printf("%s",LINHA);
     
    if(MSGE==1)SalvarDados();
    else if(MSGE==2){}
    else if(MSGE==3)
    {
        _setcursortype(_NORMALCURSOR);
        printf("Digite o numero da equipe para editar: ");
        scanf("%i",&AUX2);
        MSGE=4; 
    } 
    else if(MSGE==4)
    {
        _setcursortype(_NORMALCURSOR);
        printf("Digite o nome da %i\246 equipe: ",AUX2);
        fflush(stdin);
        gets(save.nome_equip[AUX2]); 
        MSGE=0;
    }
    else if(MSGE==6)SairDoPrograma();
    else if(AUX5<save.qtd_equip)
    {
        _setcursortype(_NORMALCURSOR);
        printf("Digite o nome da %i\246 equipe: ",AUX5+1);
        fflush(stdin);
        gets(save.nome_equip[AUX5+1]);
        AUX5++;
    }
    else if(MSGE==0)
    {
        _setcursortype(_NOCURSOR);
        if(OPC2<1)OPC2=4;
        if(OPC2>4)OPC2=1;
    
        ItemSubMenu(1,"SALVAR");
        printf("   ");
        ItemSubMenu(2,"CONFIRMAR");
        printf("   ");
        ItemSubMenu(3,"EDITAR");
        printf("   ");
        ItemSubMenu(4,"SAIR");
        TeclaEsquerdaDireita();
    
        if (TECLA==13) //tecla enter
        {
            if(OPC2==1){MSGE=1; OPC2=10;} //salvar
            if(OPC2==2)
            {
                MSGE=0; 
                OPC=10; 
                Sorteio();
                if(save.tipo_disp==0) save.menu=5;
                else if(save.tipo_disp==1) save.menu=7;
                else {save.menu=6;Jogos(); MSGE=0; OPC2=0;}
            } // confirmar
            if(OPC2==3)MSGE=3; // editar                                  
            if(OPC2==4){MSGE=6; OPC2=10;} //Sair
        }
    }    
}

#endif
