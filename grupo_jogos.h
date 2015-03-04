#ifndef _GRUPO_JOGOS_H_

void GrupoJogos1(int aux)
{
    int aux2= (aux-1)*4;
    
    printf("             %i\247 Grupo\n",aux);
    Espaco(save.nome_equip[save.pos[1+aux2]]); printf("%s",save.nome_equip[save.pos[1+aux2]]); printf(" X ");printf("%s",save.nome_equip[save.pos[2+aux2]]); Espaco(save.nome_equip[save.pos[2+aux2]]); printf("\n");
    Espaco(save.nome_equip[save.pos[3+aux2]]); printf("%s",save.nome_equip[save.pos[3+aux2]]); printf(" X ");printf("%s",save.nome_equip[save.pos[4+aux2]]); Espaco(save.nome_equip[save.pos[4+aux2]]); printf("\n\n");
    
    Espaco(save.nome_equip[save.pos[1+aux2]]); printf("%s",save.nome_equip[save.pos[1+aux2]]); printf(" X ");printf("%s",save.nome_equip[save.pos[3+aux2]]); Espaco(save.nome_equip[save.pos[3+aux2]]); printf("\n");
    Espaco(save.nome_equip[save.pos[2+aux2]]); printf("%s",save.nome_equip[save.pos[2+aux2]]); printf(" X ");printf("%s",save.nome_equip[save.pos[4+aux2]]); Espaco(save.nome_equip[save.pos[4+aux2]]); printf("\n\n");

    Espaco(save.nome_equip[save.pos[1+aux2]]); printf("%s",save.nome_equip[save.pos[1+aux2]]); printf(" X ");printf("%s",save.nome_equip[save.pos[4+aux2]]); Espaco(save.nome_equip[save.pos[4+aux2]]); printf("\n");
    Espaco(save.nome_equip[save.pos[2+aux2]]); printf("%s",save.nome_equip[save.pos[2+aux2]]); printf(" X ");printf("%s",save.nome_equip[save.pos[3+aux2]]); Espaco(save.nome_equip[save.pos[3+aux2]]); printf("\n\n");
}

void GrupoJogos2(int aux1,int aux2)
{   
    
    int aux11= (aux1-1)*4;
    int aux22= (aux2-1)*4;
    
    printf("             %i\247 Grupo                               %i\247 Grupo\n",aux1,aux2);
    Espaco(save.nome_equip[save.pos[1+aux11]]); printf("%s",save.nome_equip[save.pos[1+aux11]]); printf(" X ");printf("%s",save.nome_equip[save.pos[2+aux11]]); Espaco(save.nome_equip[save.pos[2+aux11]]); printf("      "); Espaco(save.nome_equip[save.pos[1+aux22]]); printf("%s",save.nome_equip[save.pos[1+aux22]]); printf(" X ");printf("%s",save.nome_equip[save.pos[2+aux22]]); Espaco(save.nome_equip[save.pos[2+aux22]]); printf("\n");
    Espaco(save.nome_equip[save.pos[3+aux11]]); printf("%s",save.nome_equip[save.pos[3+aux11]]); printf(" X ");printf("%s",save.nome_equip[save.pos[4+aux11]]); Espaco(save.nome_equip[save.pos[4+aux11]]); printf("      "); Espaco(save.nome_equip[save.pos[3+aux22]]); printf("%s",save.nome_equip[save.pos[3+aux22]]); printf(" X ");printf("%s",save.nome_equip[save.pos[4+aux22]]); Espaco(save.nome_equip[save.pos[4+aux22]]); printf("\n\n");
    
    Espaco(save.nome_equip[save.pos[1+aux11]]); printf("%s",save.nome_equip[save.pos[1+aux11]]); printf(" X ");printf("%s",save.nome_equip[save.pos[3+aux11]]); Espaco(save.nome_equip[save.pos[3+aux11]]); printf("      "); Espaco(save.nome_equip[save.pos[1+aux22]]); printf("%s",save.nome_equip[save.pos[1+aux22]]); printf(" X ");printf("%s",save.nome_equip[save.pos[3+aux22]]); Espaco(save.nome_equip[save.pos[3+aux22]]); printf("\n");
    Espaco(save.nome_equip[save.pos[2+aux11]]); printf("%s",save.nome_equip[save.pos[2+aux11]]); printf(" X ");printf("%s",save.nome_equip[save.pos[4+aux11]]); Espaco(save.nome_equip[save.pos[4+aux11]]); printf("      "); Espaco(save.nome_equip[save.pos[2+aux22]]); printf("%s",save.nome_equip[save.pos[2+aux22]]); printf(" X ");printf("%s",save.nome_equip[save.pos[4+aux22]]); Espaco(save.nome_equip[save.pos[4+aux22]]); printf("\n\n");

    Espaco(save.nome_equip[save.pos[1+aux11]]); printf("%s",save.nome_equip[save.pos[1+aux11]]); printf(" X ");printf("%s",save.nome_equip[save.pos[4+aux11]]); Espaco(save.nome_equip[save.pos[4+aux11]]); printf("      "); Espaco(save.nome_equip[save.pos[1+aux22]]); printf("%s",save.nome_equip[save.pos[1+aux22]]); printf(" X ");printf("%s",save.nome_equip[save.pos[4+aux22]]); Espaco(save.nome_equip[save.pos[4+aux22]]); printf("\n");
    Espaco(save.nome_equip[save.pos[2+aux11]]); printf("%s",save.nome_equip[save.pos[2+aux11]]); printf(" X ");printf("%s",save.nome_equip[save.pos[3+aux11]]); Espaco(save.nome_equip[save.pos[3+aux11]]); printf("      "); Espaco(save.nome_equip[save.pos[2+aux22]]); printf("%s",save.nome_equip[save.pos[2+aux22]]); printf(" X ");printf("%s",save.nome_equip[save.pos[3+aux22]]); Espaco(save.nome_equip[save.pos[3+aux22]]); printf("\n\n");
}

void GrupoJogos()
{
    int grupo=save.qtd_equip/4;        
    if(grupo<3) DefinirTela(80,20);
    else if(grupo<5) DefinirTela(80,31);
    else if(grupo<7) DefinirTela(80,42);
    else DefinirTela(80,53);
    
    system("cls");
    printf("\n\n");
    printf("%s\n",LINHA);
    Centraliza("GRUPO - JOGOS");  
    printf("\n\n");                      
    switch(grupo)
    {
        case 2:GrupoJogos2(1,2); break;
        case 3:GrupoJogos2(1,2); printf("\n"); GrupoJogos1(3); break;
        case 4:GrupoJogos2(1,2); printf("\n"); GrupoJogos2(3,4); break;
        case 5:GrupoJogos2(1,2); printf("\n"); GrupoJogos2(3,4); printf("\n"); GrupoJogos1(5); break;
        case 6:GrupoJogos2(1,2); printf("\n"); GrupoJogos2(3,4); printf("\n"); GrupoJogos2(5,6); break;
        case 7:GrupoJogos2(1,2); printf("\n"); GrupoJogos2(3,4); printf("\n"); GrupoJogos2(5,6); printf("\n"); GrupoJogos1(7);break; 
        case 8:GrupoJogos2(1,2); printf("\n"); GrupoJogos2(3,4); printf("\n"); GrupoJogos2(5,6); printf("\n"); GrupoJogos2(7,8); break;
    }
        
    printf("\n%s",LINHA); 
   
    if(MSGE==0)
    {
        if(OPC2<1)OPC2=3;
        if(OPC2>3)OPC2=1;
    
        ItemSubMenu(1,"VOLTAR");
        printf("   ");
        ItemSubMenu(2,"VER CHAVE");
        printf("   ");
        ItemSubMenu(3,"SAIR");
        
        TeclaEsquerdaDireita();
    
        if (TECLA==13) //tecla enter
        {
            if(OPC2==1){OPC2=10; save.menu=7;} //voltar
            if(OPC2==2){OPC2=10; TrocaNome(); save.menu=8; save.tipo_disp=0;}; // ver chave                                 
            if(OPC2==3)MSGE=4; //sair
        }
    }
    else if(MSGE==4)SairDoPrograma();
}

#endif
