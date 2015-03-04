#ifndef _GRUPO_CHAVE_H_


void GrupoChave()
{
    DefinirTela(80,8+save.qtd_equip);
    int grupo=save.qtd_equip/4;        
    system("cls");
    printf("\n\n");
    printf("%s\n",LINHA);
    Centraliza("GRUPO - CHAVE");  
    printf("\n");                      
    switch(grupo)
    {
        case 2:Chave4(); break;
        case 3:Chave6(); break;
        case 4:Chave8(); break;
        case 5:Chave10(); break;
        case 6:Chave12(); break;
        case 7:Chave14(); break;
        case 8:Chave16(); break;
    }
        
    printf("\n%s",LINHA); 
   
    if(MSGE==0)
    {
        if(OPC2<1)OPC2=3;
        if(OPC2>3)OPC2=1;
    
        ItemSubMenu(1,"VOLTAR");
        printf("   ");
        ItemSubMenu(2,"VER TABELA DE JOGOS");
        printf("   ");
        ItemSubMenu(3,"SAIR");
        
        TeclaEsquerdaDireita();
    
        if (TECLA==13) //tecla enter
        {
            if(OPC2==1){OPC2=10; TrocaNome(); save.menu=7; save.tipo_disp=1;} //voltar
            if(OPC2==2){OPC2=10; TrocaNome(); save.menu=9; save.tipo_disp=1;}; // ver tabela de jogos                                 
            if(OPC2==3)MSGE=4; //sair
        }
    }
    else if(MSGE==4)SairDoPrograma();
}

#endif
