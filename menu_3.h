#ifndef _MENU_3_H_

void Menu_3()
{
    textbackground(save.cor_fundo);
    textcolor(save.cor_letra);    
    if(OPC<1) OPC=2;
    if(OPC>2) OPC=1;            
    system("cls");
    printf("\n\n");
    printf("%s",LINHA);
    printf("\n\n\n\n\n\n\n  ");
    printf("Selecione o modo em que as equipes se enfrentar\306o\n\n    ");
    ItemDoMenu(1,"MANUAL",0);
    printf("\n\n    ");
    ItemDoMenu(2,"ALEATORIO",0);
    printf("\n\n\n\n\n\n\n\n");
    printf("%s",LINHA);
    TeclaCimaBaixo();
    
    if (TECLA==13) //tecla enter
    {
        if(OPC==1)
        {
            Manual();
            MSGE=0; 
            OPC=10; 
            if(save.tipo_disp==0) save.menu=5;
            else if(save.tipo_disp==1) save.menu=7;        
        } //manual
        if(OPC==2)
        {
            MSGE=0; 
            OPC=10; 
            save.menu=4;
        } // aleatorio                 
    }               
                                               
}

#endif
