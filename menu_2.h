#ifndef _MENU_2_H_

void Menu_2()
{
    textbackground(save.cor_fundo);
    textcolor(save.cor_letra);    
    if(OPC<1) OPC=5;
    if(OPC>5) OPC=1;            
    system("cls");
    printf("\n\n");
    printf("%s",LINHA);
    printf("\n                                TIPO DE DISPUTA"); 
    printf("\n\n\n\n  ");
                                            
    ItemDoMenu(1,"Configurar",0);            
    printf("\n\n  ");                                
    ItemDoMenu(2,"Salvar",0);           
    printf("\n\n  ");                                
    ItemDoMenu(3,"Avan\207ar",0);            
    printf("\n\n  ");                                
    ItemDoMenu(4,"Voltar",0);            
    printf("\n\n  ");                               
    ItemDoMenu(5,"Sair",0);            
    printf("\n\n\n\n");            
                        
    if (save.qtd_equip>0)
    printf("         Equipes: %i ",save.qtd_equip);
    if (save.tipo_disp>-1)
    printf("     Disputa: %s ",DISPUTA[save.tipo_disp]);
    printf("\n\n");
    printf("%s",LINHA);
            
    if(MSGE==1) //------------------------SUB MENU PARA ESCOLHER TIPO DISPUTA---------------------------------
    {
        if(save.tipo_disp==-1){AUX2=0; AUX3=0; AUX4=0;}
        if(save.qtd_equip<=32){AUX2=1;} //chave
        if(save.qtd_equip%2==0){AUX3=1;} //ponto corrido
        if(((save.qtd_equip/4)>1)&&(save.qtd_equip%4==0)){AUX4=1;} //grupo
        
        
        if((AUX2==1)&&(AUX3==1)&&(AUX4==1))
        {
            if(OPC2<1)OPC2=3;
            if(OPC2>3)OPC2=1;
            
            printf("   ");
            ItemSubMenu(1,"CHAVE");
            printf("   ");
            ItemSubMenu(2,"GRUPO");
            printf("   ");
            ItemSubMenu(3,"PONTO CORRIDO");
            TeclaEsquerdaDireita();                                   
            
            if (TECLA==13) //tecla enter
            {
                if(OPC2==1){save.tipo_disp=0; MSGE=0; OPC=10;}//chave
                if(OPC2==2){save.tipo_disp=1; MSGE=0; OPC=10;}//grupo
                if(OPC2==3){save.tipo_disp=2; MSGE=0; OPC=10;} //ponto corrido                   
            }                     
        }
        
        else if((AUX2==1)&&(AUX3==1))
        {
            if(OPC2<1)OPC2=2;
            if(OPC2>2)OPC2=1;
            
            printf("   ");
            ItemSubMenu(1,"CHAVE");
            printf("   ");
            ItemSubMenu(2,"PONTO CORRIDO");
            TeclaEsquerdaDireita();                                   
            
            if (TECLA==13) //tecla enter
            {
                if(OPC2==1){save.tipo_disp=0; MSGE=0; OPC=10;}
                if(OPC2==2){save.tipo_disp=2; MSGE=0; OPC=10;}
                if(OPC2==3){save.tipo_disp=3; MSGE=0; OPC=10;}               
            }                                       
        }
        else if((AUX3==1)&&(AUX4==1))
        {
            if(OPC2<1)OPC2=2;
            if(OPC2>2)OPC2=1;
            
            printf("   ");
            ItemSubMenu(1,"GRUPO");
            printf("   ");
            ItemSubMenu(2,"PONTO CORRIDO");
            TeclaEsquerdaDireita();                                   
            
            if (TECLA==13) //tecla enter
            {
                if(OPC2==1){save.tipo_disp=1; MSGE=0; OPC=10;}
                if(OPC2==2){save.tipo_disp=2; MSGE=0; OPC=10;}
                if(OPC2==3){save.tipo_disp=3; MSGE=0; OPC=10;}               
            } 
        }
        
        else if(AUX2==1)
        {         
            printf("   ");
            ItemSubMenu(1,"CHAVE");
            TECLA=getch();                                    
            if (TECLA==13){save.tipo_disp=0; MSGE=0; OPC=10;}          
        }
        
        else if(AUX4==1)
        {         
            printf("   ");
            ItemSubMenu(1,"PONTO CORRIDO");
            TECLA=getch();                                     
            if (TECLA==13) //tecla enter
            {
                if(OPC2==1){save.tipo_disp=2; MSGE=0; OPC=10;}
                if(OPC2==2){save.tipo_disp=3; MSGE=0; OPC=10;}              
            }                   
        }                                        
    } //----------------------------------------------------------------------------------------------------------
    else if (MSGE==2){}
    else if (MSGE==3)
    {                               
        printf("Configure antes de avan\207ar");
        MSGE=0;                
        fflush(stdin);
        TECLA = getch();
    }
    else if (MSGE==4) SairDoPrograma();
    else if (MSGE==5) SalvarDados();
    else
    TeclaCimaBaixo();
            
    if (TECLA==13) //tecla enter
    {
        if(OPC==1){MSGE=1; OPC2=1;} //configurar
        if(OPC==2){MSGE=5; OPC=1;} // salvar
        if(OPC==3) // avançar                   
        {
            if(save.tipo_disp>-1)                      
            {
                if(save.tipo_disp>1) save.menu=4;
                else save.menu=3;
            }
            else MSGE=3;
        }                                                                             
        if(OPC==4){save.menu=1; save.tipo_disp=-1;} //voltar
        if(OPC==5)MSGE=4; // sair                           
    }                                         
}

#endif
