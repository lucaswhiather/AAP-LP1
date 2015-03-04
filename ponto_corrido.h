#ifndef _PONTO_CORRIDO_H_

void PontoCorrido()
{
    int rodada=save.qtd_equip-1;
    DefinirTela(80,12+(save.qtd_equip/2));
    textbackground(save.cor_fundo);
    textcolor(save.cor_letra);
    system("cls");
    printf("\n\n");
    printf("%s\n",LINHA);
    Centraliza("PONTO CORRIDO");                    
    printf("\n\n                                   %i\246  rodada\n",AUX6);
    Centraliza("\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262");

        MostraPontoCorrido(1,AUX6);
        MostraPontoCorrido(2,AUX6);
        if(save.qtd_equip>=6)MostraPontoCorrido(3,AUX6);
        if(save.qtd_equip>=8)MostraPontoCorrido(4,AUX6);
        if(save.qtd_equip>=10)MostraPontoCorrido(5,AUX6);
        if(save.qtd_equip>=12)MostraPontoCorrido(6,AUX6);
        if(save.qtd_equip>=14)MostraPontoCorrido(7,AUX6);
        if(save.qtd_equip>=16)MostraPontoCorrido(8,AUX6);
        if(save.qtd_equip>=18)MostraPontoCorrido(9,AUX6);
        if(save.qtd_equip>=20)MostraPontoCorrido(10,AUX6);
        if(save.qtd_equip>=22)MostraPontoCorrido(11,AUX6);
        if(save.qtd_equip>=24)MostraPontoCorrido(12,AUX6);
        if(save.qtd_equip>=26)MostraPontoCorrido(13,AUX6);
        if(save.qtd_equip>=28)MostraPontoCorrido(14,AUX6);
        if(save.qtd_equip>=30)MostraPontoCorrido(15,AUX6);
        if(save.qtd_equip>=32)MostraPontoCorrido(16,AUX6);
    
    
    printf("\n");
    Centraliza("\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262");    
    printf("\n%s",LINHA); 
    if(MSGE==0)
    {
        if(OPC2<1)OPC2=4;
        if(OPC2>4)OPC2=1;
        printf("                           ");
        ItemSubMenu(1,"<<<");
        printf("   ");
        ItemSubMenu(2,"SALVAR");
        printf("   ");
        ItemSubMenu(3,"SAIR");
        printf("   ");
        ItemSubMenu(4,">>>");
        TeclaEsquerdaDireita();
        if (TECLA==13) //tecla enter
        {
            if(OPC2==1){AUX6--; if(AUX6<1)AUX6=save.qtd_equip-1;} //voltar
            if(OPC2==2) MSGE=2; //salvar 
            if(OPC2==3) MSGE=3; //sair                                
            if(OPC2==4){AUX6++; if(AUX6>save.qtd_equip-1)AUX6=1;} //avançar
        }
    }
    else if(MSGE==2)SalvarDados();
    else if(MSGE==3)SairDoPrograma();
}

#endif
