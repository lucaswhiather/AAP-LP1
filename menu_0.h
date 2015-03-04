#ifndef _MENU_0_H_

void Menu_0()
{
    textbackground(save.cor_fundo);
    textcolor(save.cor_letra);
    if(OPC<1) OPC=4;
    if(OPC>4) OPC=1;

    system("cls");
    printf("\n\n");
    printf("%s",LINHA);
    printf("\n                       GERENCIADOR DE LIGAS ESPOTIVAS");
    printf("\n\n\n\n\n");

    ItemDoMenu(1,"Iniciar",1);                
    printf("\n                                                       Utilizes as teclas \n");
    ItemDoMenu(2,"Carregar",1);  printf("                   %c\n",30);           
    printf("                                                            %c     %c\n",17,16);
    ItemDoMenu(3,"Opc\344es",1); printf("                    %c",31);           
    printf("\n                                                      para selecionar e aperte\n");
    ItemDoMenu(4,"Sair",1); printf("            enter para escolher");                     
    printf("\n\n\n\n\n\n");
    printf(" Versao:%.2f       data:%s\n",versao,data);
    printf("%s",LINHA);      
   
    if (MSGE==1)
    {
        if(OPC2<1) OPC2=4;
        if(OPC2>4) OPC2=1;
                  
        printf("  ");//espaço
        ItemSubMenu(1,"COR DAS LETRAS");
        printf("     ");//espaço
        ItemSubMenu(2,"COR DE SELE\200\307O");
        printf("     ");//espaço
        ItemSubMenu(3,"COR DE FUNDO");
        printf("     ");//espaço
        ItemSubMenu(4,"VOLTAR");
                                                
        TeclaEsquerdaDireita();
                
        if (TECLA==13) // tecla enter
        {
            if (OPC2==1){save.menu=-1; OPC=0;} // cor das letras
            if (OPC2==2){save.menu=-2; OPC=0;} // cor de seleção
            if (OPC2==3){save.menu=-3; OPC=0;} //cor de fundo
            if (OPC2==4){OPC2=0; MSGE=0;}  //sair                   
        }            
    }
    else if(MSGE==2)CarregarDados();
    else if(MSGE==3)DeletarDados();          
    else
    {
        TeclaCimaBaixo();           
        if (TECLA==13) //tecla enter
        {
            if(OPC==1){save.menu=1; OPC=1;} //iniciar
            if(OPC==2){MSGE=2;} //carregar
            if(OPC==3){MSGE=1;}  //opções
            if(OPC==4) exit(0);  //sair                           
        } 
    }                                   
} // FIM DO MENU PRINCIPAL

#endif
