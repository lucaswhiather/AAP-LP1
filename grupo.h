#ifndef _GRUPO_H_

void MostraGrupo1(int a)
{
    int aux=0;
    if(a==2) aux=16;
    
    if(a==2)printf("\n\n     5\247 grupo\n");
    else printf("\n\n     1\247 grupo\n");
    printf(" \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262");
    printf("\n \262%s",save.nome_equip[save.pos[1+aux]]); Espaco(save.nome_equip[save.pos[1+aux]]); printf("\262");      
    printf("\n \262%s",save.nome_equip[save.pos[2+aux]]); Espaco(save.nome_equip[save.pos[2+aux]]); printf("\262");         
    printf("\n \262%s",save.nome_equip[save.pos[3+aux]]); Espaco(save.nome_equip[save.pos[3+aux]]); printf("\262");         
    printf("\n \262%s",save.nome_equip[save.pos[4+aux]]); Espaco(save.nome_equip[save.pos[4+aux]]); printf("\262");        
    printf("\n");
    printf(" \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262");    
}

void MostraGrupo2(int a)
{
    int aux=0;
    if(a==2) aux=16;
    
    if(a==2)printf("\n\n     5\247 grupo            6\247 grupo\n");
    else printf("\n\n     1\247 grupo            2\247 grupo\n");
    printf(" \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262   \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262");
    printf("\n \262%s",save.nome_equip[save.pos[1+aux]]); Espaco(save.nome_equip[save.pos[1+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[5+aux]]); Espaco(save.nome_equip[save.pos[5+aux]]); printf("\262");   
    printf("\n \262%s",save.nome_equip[save.pos[2+aux]]); Espaco(save.nome_equip[save.pos[2+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[6+aux]]); Espaco(save.nome_equip[save.pos[6+aux]]); printf("\262");      
    printf("\n \262%s",save.nome_equip[save.pos[3+aux]]); Espaco(save.nome_equip[save.pos[3+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[7+aux]]); Espaco(save.nome_equip[save.pos[7+aux]]); printf("\262");      
    printf("\n \262%s",save.nome_equip[save.pos[4+aux]]); Espaco(save.nome_equip[save.pos[4+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[8+aux]]); Espaco(save.nome_equip[save.pos[8+aux]]); printf("\262");      
    printf("\n");
    printf(" \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262   \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262");    
}

void MostraGrupo3(int a)
{
    int aux=0;
    if(a==2) aux=16;
    
    if(a==2) printf("\n\n     5\247 grupo            6\247 grupo             7\247 grupo\n");
    else printf("\n\n     1\247 grupo            2\247 grupo             3\247 grupo\n");
    printf(" \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262   \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262   \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262");
    printf("\n \262%s",save.nome_equip[save.pos[1+aux]]); Espaco(save.nome_equip[save.pos[1+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[5+aux]]); Espaco(save.nome_equip[save.pos[5+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[9+aux]]); Espaco(save.nome_equip[save.pos[9+aux]]);printf("\262");   
    printf("\n \262%s",save.nome_equip[save.pos[2+aux]]); Espaco(save.nome_equip[save.pos[2+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[6+aux]]); Espaco(save.nome_equip[save.pos[6+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[10+aux]]); Espaco(save.nome_equip[save.pos[10+aux]]);printf("\262");   
    printf("\n \262%s",save.nome_equip[save.pos[3+aux]]); Espaco(save.nome_equip[save.pos[3+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[7+aux]]); Espaco(save.nome_equip[save.pos[7+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[11+aux]]); Espaco(save.nome_equip[save.pos[11+aux]]);printf("\262");   
    printf("\n \262%s",save.nome_equip[save.pos[4+aux]]); Espaco(save.nome_equip[save.pos[4+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[8+aux]]); Espaco(save.nome_equip[save.pos[8+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[12+aux]]); Espaco(save.nome_equip[save.pos[12+aux]]);printf("\262");      
    printf("\n");
    printf(" \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262   \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262   \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262");    
}

void MostraGrupo4(int a)
{
    int aux=0;
    if(a==2) aux=16;
    
    if(a==2) printf("\n\n     5\247 grupo            6\247 grupo             7\247 grupo             8\247 grupo\n");
    else printf("\n\n     1\247 grupo            2\247 grupo             3\247 grupo             4\247 grupo\n");
    printf(" \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262   \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262   \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262   \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262");
    printf("\n \262%s",save.nome_equip[save.pos[1+aux]]); Espaco(save.nome_equip[save.pos[1+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[5+aux]]); Espaco(save.nome_equip[save.pos[5+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[9+aux]]); Espaco(save.nome_equip[save.pos[9+aux]]);printf("\262   \262%s",save.nome_equip[save.pos[13+aux]]); Espaco(save.nome_equip[save.pos[13+aux]]);printf("\262");
    printf("\n \262%s",save.nome_equip[save.pos[2+aux]]); Espaco(save.nome_equip[save.pos[2+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[6+aux]]); Espaco(save.nome_equip[save.pos[6+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[10+aux]]); Espaco(save.nome_equip[save.pos[10+aux]]);printf("\262   \262%s",save.nome_equip[save.pos[14+aux]]); Espaco(save.nome_equip[save.pos[14+aux]]);printf("\262");
    printf("\n \262%s",save.nome_equip[save.pos[3+aux]]); Espaco(save.nome_equip[save.pos[3+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[7+aux]]); Espaco(save.nome_equip[save.pos[7+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[11+aux]]); Espaco(save.nome_equip[save.pos[11+aux]]);printf("\262   \262%s",save.nome_equip[save.pos[15+aux]]); Espaco(save.nome_equip[save.pos[15+aux]]);printf("\262");
    printf("\n \262%s",save.nome_equip[save.pos[4+aux]]); Espaco(save.nome_equip[save.pos[4+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[8+aux]]); Espaco(save.nome_equip[save.pos[8+aux]]); printf("\262   \262%s",save.nome_equip[save.pos[12+aux]]); Espaco(save.nome_equip[save.pos[12+aux]]);printf("\262   \262%s",save.nome_equip[save.pos[16+aux]]); Espaco(save.nome_equip[save.pos[16+aux]]);printf("\262");    
    printf("\n");
    printf(" \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262   \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262   \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262   \262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262");    
}

void Grupo()
{
    int grupo=save.qtd_equip/4;
    
    if(grupo<5) DefinirTela(80,16);
    else DefinirTela(80,26);
    
    textbackground(save.cor_fundo);
    textcolor(save.cor_letra);
    system("cls");
    printf("\n\n");
    printf("%s\n",LINHA);
    Centraliza("GRUPO");                    
    
    switch(grupo)
    {
        case 1:MostraGrupo1(1); break;
        case 2:MostraGrupo2(1); break;
        case 3:MostraGrupo3(1); break;
        case 4:MostraGrupo4(1); break;
        case 5:MostraGrupo4(1); printf("\n\n"); MostraGrupo1(2); break;
        case 6:MostraGrupo4(1); printf("\n\n"); MostraGrupo2(2); break;
        case 7:MostraGrupo4(1); printf("\n\n"); MostraGrupo3(2); break;
        case 8:MostraGrupo4(1); printf("\n\n"); MostraGrupo4(2); break;
    }
        

    printf("\n%s",LINHA); 
   
    if(AUX5<save.qtd_equip)
    {
        _setcursortype(_NORMALCURSOR);
        printf("Digite o nome da %i equipe: ",AUX5+1);
        fflush(stdin);
        gets(save.nome_equip[AUX5+1]);
        AUX5++;
    }    
    else if(MSGE==0)
    {
        _setcursortype(_NOCURSOR);
        if(OPC2<1)OPC2=5;
        if(OPC2>5)OPC2=1;
    
        ItemSubMenu(1,"SALVAR");
        printf("   ");
        ItemSubMenu(2,"EDITAR");
        printf("   ");
        ItemSubMenu(3,"VER TABELA DE JOGOS");
        printf("   ");
        ItemSubMenu(4,"VER CHAVE");
        printf("   ");
        ItemSubMenu(5,"SAIR");
        
        TeclaEsquerdaDireita();
    
        if (TECLA==13) //tecla enter
        {
            if(OPC2==1){MSGE=1; OPC2=10;} //salvar
            if(OPC2==2)MSGE=5; // editar
            if(OPC2==3){save.menu=9;} // ver tabela de jogos                                  
            if(OPC2==4){TrocaNome(); save.menu=8; save.tipo_disp=0;}; //ver chave
            if(OPC2==5){MSGE=4; OPC2=10;} //sair
        }
    }
    else if(MSGE==1)SalvarDados();
    else if(MSGE==4)SairDoPrograma();
    else if(MSGE==5)
    {
        _setcursortype(_NORMALCURSOR);
        printf("Digite o grupo que esta a equipe: ");
        scanf("%i",&AUX7);
        MSGE=6; 
    } 
    else if(MSGE==6)
    {
        _setcursortype(_NORMALCURSOR);
        printf("Digite o numero da equipe(1,2,3,4): ");
        fflush(stdin);
        scanf("%i",&AUX8);
        MSGE=7;
    }
    else if(MSGE==7)
    {
        _setcursortype(_NORMALCURSOR);
        printf("Digite o nome da %i equipe do %i grupo: ",AUX8,AUX7);
        fflush(stdin);
        gets(save.nome_equip[save.pos[(AUX7-1)*4+AUX8]]); 
        MSGE=0;
    }
}

#endif
