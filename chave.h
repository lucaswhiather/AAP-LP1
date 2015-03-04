#ifndef _CHAVE_H_

void MostraChave()
{
    DefinirTela(80,9+(2*save.qtd_equip));
    textbackground(save.cor_fundo);
    textcolor(save.cor_letra);
    system("cls");
    printf("\n\n");
    printf("%s",LINHA);                
    printf("\n                                   CHAVE\n");
    switch(save.qtd_equip)
    {
        case 3:Chave3(); break;
        case 4:Chave4(); break;
        case 5:Chave5(); break;
        case 6:Chave6(); break;
        case 7:Chave7(); break;
        case 8:Chave8(); break;
        case 9:Chave9(); break;
        case 10:Chave10(); break;
        case 11:Chave11(); break;
        case 12:Chave12(); break;
        case 13:Chave13(); break;
        case 14:Chave14(); break;
        case 15:Chave15(); break;
        case 16:Chave16(); break;
        case 17:Chave17(); break;
        case 18:Chave18(); break;
        case 19:Chave19(); break;
        case 20:Chave20(); break;
        case 21:Chave21(); break;
        case 22:Chave22(); break;
        case 23:Chave23(); break;
        case 24:Chave24(); break;
        case 25:Chave25(); break;
        case 26:Chave26(); break;
        case 27:Chave27(); break;
        case 28:Chave28(); break;
        case 29:Chave29(); break;
        case 30:Chave30(); break;
        case 31:Chave31(); break;
        case 32:Chave32(); break; 
    }
    printf("\n\n%s",LINHA);
    
    if(MSGE==1)SalvarDados();
    else if(MSGE==2)SairDoPrograma();
    else if(AUX5<save.qtd_equip)
    {
        _setcursortype(_NORMALCURSOR);
        printf("Digite o nome da %i equipe: ",AUX5+1);
        fflush(stdin);
        gets(save.nome_equip[AUX5+1]);
        AUX5++;
    }
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
        printf("Digite o nome da %i equipe: ",AUX2);
        fflush(stdin);
        gets(save.nome_equip[AUX2]); 
        MSGE=0;
    }
    else if(MSGE==0)
    {
            _setcursortype(_NOCURSOR);
            if(OPC2<1)OPC2=3;
            if(OPC2>3)OPC2=1;
    
            ItemSubMenu(1,"SALVAR");
            printf("   ");
            ItemSubMenu(2,"EDITAR");
            printf("   ");
            ItemSubMenu(3,"SAIR");
            TeclaEsquerdaDireita();
    
            if (TECLA==13) //tecla enter
            {
                if(OPC2==1){MSGE=1; OPC2=10;} //salvar
                if(OPC2==2)MSGE=3; // editar                                  
                if(OPC2==3){MSGE=2; OPC2=10;} //sair
            }
    }    
}
#endif



