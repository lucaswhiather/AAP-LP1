#ifndef _FUNC_H_

void DefinirTela(int larg,int alt) //essa função é para diminuir ou aumentar o console (altura,lagura)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT sr;
    COORD consoleSize;

    consoleSize.X = larg; consoleSize.Y = alt;

    sr.Top=sr.Left=0;
    sr.Right=larg-1; 
    sr.Bottom=alt-1;

    SetConsoleWindowInfo(console, TRUE, &sr);
    SetConsoleScreenBufferSize(console, consoleSize);
    SetConsoleWindowInfo(console, TRUE, &sr);
    SetConsoleScreenBufferSize(console, consoleSize);
}

void ItemDoMenu(int numero,char texto[10],int centr=0)
{
    int pos = (80-strlen(texto))/2;
    if(centr==1)
        for (int i=0; i<pos; i++) printf(" ");    
    if(numero==OPC)textbackground(save.cor_sel);
    printf("%s",texto);
    textbackground(save.cor_fundo);
}

void ItemSubMenu(int numero,char texto[10])
{
    if(numero==OPC2)textbackground(save.cor_sel);
    printf("%s",texto);
    textbackground(save.cor_fundo);
}

void TeclaEsquerdaDireita()
{     
     fflush(stdin); //limpa o buffer do teclado
     TECLA = getch();        
     if (TECLA==DIREITA) OPC2++; //seta para direita            
     if (TECLA==ESQUERDA) OPC2--;  //seta para esquerda
}

void TeclaCimaBaixo()
{
    fflush(stdin); //limpa o buffer do teclado
    TECLA = getch();            
    if (TECLA==BAIXO) OPC++; //seta para cima           
    if (TECLA==CIMA) OPC--;//seta para baixo     
}

void SairDoPrograma()
{
    if(OPC2>2)OPC2=1;
    if(OPC2<1)OPC2=2;
    
    printf("Tem certeza que quer sair do programa ?    ");
   
    ItemSubMenu(1,"SIM");
    printf("    ");
    ItemSubMenu(2,"NAO");
    
    TeclaEsquerdaDireita();
    
     if (TECLA==13) //tecla enter
     {
         if(OPC2==1)
         exit(0);
         
         MSGE=0;
         OPC=0;                          
     }
}
//-----------------------------------------------------------------------------------------

void SalvarDados()
{
    if(OPC2>2)OPC2=1;
    if(OPC2<1)OPC2=2;
    
        printf("Deseja salvar os dados ?     ");    
        ItemSubMenu(1,"SIM");
        printf("    ");
        ItemSubMenu(2,"NAO");
        TeclaEsquerdaDireita();
       
        if (TECLA==13) //tecla enter
        {
            if(OPC2==2){MSGE=0; OPC=5;}
            else
            {
                FILE *fpsave;
     
                fpsave = fopen("save.dat","wb");
    
                save.aux5=AUX5;
                
                fwrite(&save,sizeof(save),1,fpsave); 
                fclose(fpsave);
               
                MSGE=0;
                OPC=10;
            }        
        } 
 
}

void CarregarDados()
{
    if(OPC2<1)OPC2=3;
    if(OPC2>3)OPC2=1;
    
    printf("Carregar dados ? ");
    ItemSubMenu(1,"SIM");
    printf("    ");
    ItemSubMenu(2,"NAO");
    printf("    ");
    ItemSubMenu(3,"DELETAR");
    TeclaEsquerdaDireita();
    
    if (TECLA==13) //tecla enter
        {
            if(OPC2==2){MSGE=0; OPC=7;}
            if(OPC2==3){MSGE=3; OPC2=0;}
            if(OPC2==1)
            {
                FILE *fpsave;

                fpsave = fopen("save.dat","rb");
            
                fread(&save,sizeof(save),1,fpsave);
                                        
                AUX5=save.aux5;
                
                fclose(fpsave);        
                
                MSGE=0;
                OPC=10;                       
            }        
        } 
}

void DeletarDados()
{
    if(OPC2<1)OPC2=2;
    if(OPC2>2)OPC2=1;
     
    printf("Deletar dados salvos ? ");
    ItemSubMenu(1,"SIM");
    printf("   ");
    ItemSubMenu(2,"NAO");
    TeclaEsquerdaDireita();
    
    if (TECLA==13) //tecla enter
    {
        if(OPC2==2){MSGE=0; OPC=5;}
        else
        {
            remove("save.dat");   
            MSGE=0;
            OPC=10;    
        }        
    } 
}

void Sorteio()
{
    int verificador[save.qtd_equip];
    int sorte,Y;
    
    for (X=1; X<=save.qtd_equip; X++)
        verificador[X]= 0;
        
    srand ( time(NULL) ); // comando para deixar a a randomização mais precisa
    
    for(X=1; X<=save.qtd_equip;)
    {
        Y=X;
        while (X==Y)
       {
           sorte=rand() % save.qtd_equip+1;
           if (verificador[sorte]==0)        
           {
               verificador[sorte]=1;
               save.pos[sorte]= X;
               X++;   
           } 
       }             
    }
}

void Espaco(char espaco[])
{
    int Y;
    Y=15-strlen(espaco);
    
    if(save.tipo_disp==0) printf("\n");
    for(X=1; X<=Y; X++)
        printf(" ");
}

void Centraliza(char texto[]) //função para centralizar um texto na horizontal ("texto")
{
    int pos = (80-strlen(texto))/2;
    for (int i=0; i<pos; i++) 
        printf(" ");
    printf("%s",texto);    
}

//-----------------------------------------------------------ponto corrido---------------------------------------------------

void Preencher(int k) //essa função fas parte da função jogos e serve para preencher a matriz save.jogos com 0
{
    int aux=0; 
    int i,j;
    if(k==-1)aux=1;
    
    if(aux==1)
    {
         for(k=1; k<save.qtd_equip; k++)
             for(i=1; i<=2; i++)
                for(j=1; j<=save.qtd_equip/2; j++)
                    save.jogos[i][j][k]=0;            
    }
    else
        for(i=1; i<=2; i++)
            for(j=1; j<=save.qtd_equip/2; j++)
                save.jogos[i][j][k]=0;
}

void Jogos()
{    
    int sorte1,sorte2,aux1=0,aux2=0,aux3=1,aux4=0;
    int i,j,k,x,y,z,p,m;
    int verificador[save.qtd_equip];
    float tamanho=80/(save.qtd_equip-1);
    system("cls");
    for (x=1; x<=save.qtd_equip; x++)
        verificador[x]=0;
    printf("                                CARREGANDO\n\n");
    
    srand ( time(NULL) );
    for(k=1; k<save.qtd_equip;)
    {                
        
        for(p=1; p<=2; p++)
            for(m=1; m<=save.qtd_equip/2; m++)
                save.jogos[p][m][k]=0;
        
        for (x=1; x<=save.qtd_equip; x++)
            verificador[x]=0;
        
        for(j=1; j<=save.qtd_equip/2;)
        {
            aux3=1;
            sorte1=sorte2;
            while(sorte1==sorte2)
            {
                sorte1=rand() % save.qtd_equip+1;
                sorte2=rand() % save.qtd_equip+1;        
            }//fim while
                   
            if((verificador[sorte1]==0)&&(verificador[sorte2]==0))         
            {                    
                for(z=1; z<save.qtd_equip; z++)
                    for(y=1; y<=save.qtd_equip/2; y++)
                        {
                            if(((save.jogos[1][y][z]==sorte1)&&(save.jogos[2][y][z]==sorte2))||((save.jogos[1][y][z]==sorte2)&&(save.jogos[2][y][z]==sorte1)))
                            aux3=0;
                         }            
                if(aux3==1)
                {    
                    save.jogos[1][j][k]=sorte1;
                    save.jogos[2][j][k]=sorte2;
                    verificador[sorte1]=1;
                    verificador[sorte2]=1;
                    j++;
                    if(j>save.qtd_equip/2){k++; for(x=1; x<=tamanho; x++) printf("=");}                
                    aux4=1;
                }
                
                if(aux3==0)aux4++;
                if(aux4>15000){aux4=0; j=20;}                                                                       
            }
        } 
    } 
}

void MostraPontoCorrido(int a,int b)
{       
    printf("\n                      \262"); 
    Espaco(save.nome_equip[save.jogos[1][a][b]]); 
    printf("%s",save.nome_equip[save.jogos[1][a][b]]);
    printf(" X ");
    printf("%s",save.nome_equip[save.jogos[2][a][b]]);
    Espaco(save.nome_equip[save.jogos[2][a][b]]);
    printf("\262");
}

//---------------------------------------------------------------------------------------------------------------------------

void TrocaNome()
{
    int grupo=save.qtd_equip/4;
    int x;
    
    
    if(save.menu!=8)
    for(x=1; x<=32; x++)
        strcpy(nome_aux[x],save.nome_equip[x]);
    
    if(grupo==2)
    {
        strcpy(save.nome_equip[save.pos[1]],"1\247 do grupo 1"); 
        strcpy(save.nome_equip[save.pos[2]],"2\247 do grupo 2");
        strcpy(save.nome_equip[save.pos[3]],"1\247 do grupo 2");
        strcpy(save.nome_equip[save.pos[4]],"2\247 do grupo 1");   
    }
    else if(grupo==3)
    {
        strcpy(save.nome_equip[save.pos[1]],"1\247 do grupo 1"); 
        strcpy(save.nome_equip[save.pos[2]],"2\247 do grupo 2");
        strcpy(save.nome_equip[save.pos[3]],"1\247 do grupo 3");
        strcpy(save.nome_equip[save.pos[4]],"2\247 do grupo 1");  
        strcpy(save.nome_equip[save.pos[5]],"1\247 do grupo 2");
        strcpy(save.nome_equip[save.pos[6]],"2\247 do grupo 3"); 
    }
    else if(grupo==4)
    {
        strcpy(save.nome_equip[save.pos[1]],"1\247 do grupo 1"); 
        strcpy(save.nome_equip[save.pos[2]],"2\247 do grupo 2");
        strcpy(save.nome_equip[save.pos[3]],"1\247 do grupo 3");
        strcpy(save.nome_equip[save.pos[4]],"2\247 do grupo 4");  
        strcpy(save.nome_equip[save.pos[5]],"2\247 do grupo 1");
        strcpy(save.nome_equip[save.pos[6]],"1\247 do grupo 2");
        strcpy(save.nome_equip[save.pos[7]],"2\247 do grupo 3");
        strcpy(save.nome_equip[save.pos[8]],"1\247 do grupo 4"); 
    }
    else if(grupo==5)
    {
        strcpy(save.nome_equip[save.pos[1]],"1\247 do grupo 1"); 
        strcpy(save.nome_equip[save.pos[2]],"2\247 do grupo 2");
        strcpy(save.nome_equip[save.pos[3]],"1\247 do grupo 3");
        strcpy(save.nome_equip[save.pos[4]],"2\247 do grupo 4");  
        strcpy(save.nome_equip[save.pos[5]],"1\247 do grupo 5");
        strcpy(save.nome_equip[save.pos[6]],"2\247 do grupo 1");
        strcpy(save.nome_equip[save.pos[7]],"1\247 do grupo 2");
        strcpy(save.nome_equip[save.pos[8]],"2\247 do grupo 3");
        strcpy(save.nome_equip[save.pos[9]],"1\247 do grupo 4");
        strcpy(save.nome_equip[save.pos[10]],"2\247 do grupo 5"); 
    }
    else if(grupo==6)
    {
        strcpy(save.nome_equip[save.pos[1]],"1\247 do grupo 1"); 
        strcpy(save.nome_equip[save.pos[2]],"2\247 do grupo 2");
        strcpy(save.nome_equip[save.pos[3]],"1\247 do grupo 3");
        strcpy(save.nome_equip[save.pos[4]],"2\247 do grupo 4");  
        strcpy(save.nome_equip[save.pos[5]],"1\247 do grupo 5");
        strcpy(save.nome_equip[save.pos[6]],"2\247 do grupo 6");
        strcpy(save.nome_equip[save.pos[7]],"2\247 do grupo 1");
        strcpy(save.nome_equip[save.pos[8]],"1\247 do grupo 2");
        strcpy(save.nome_equip[save.pos[9]],"2\247 do grupo 3");
        strcpy(save.nome_equip[save.pos[10]],"1\247 do grupo 4"); 
        strcpy(save.nome_equip[save.pos[11]],"2\247 do grupo 5");
        strcpy(save.nome_equip[save.pos[12]],"1\247 do grupo 6");
    }
    else if(grupo==7)
    {
        strcpy(save.nome_equip[save.pos[1]],"1\247 do grupo 1"); 
        strcpy(save.nome_equip[save.pos[2]],"2\247 do grupo 2");
        strcpy(save.nome_equip[save.pos[3]],"1\247 do grupo 3");
        strcpy(save.nome_equip[save.pos[4]],"2\247 do grupo 4");  
        strcpy(save.nome_equip[save.pos[5]],"1\247 do grupo 5");
        strcpy(save.nome_equip[save.pos[6]],"2\247 do grupo 6");
        strcpy(save.nome_equip[save.pos[7]],"1\247 do grupo 7");
        strcpy(save.nome_equip[save.pos[8]],"2\247 do grupo 1");
        strcpy(save.nome_equip[save.pos[9]],"1\247 do grupo 2");
        strcpy(save.nome_equip[save.pos[10]],"2\247 do grupo 3"); 
        strcpy(save.nome_equip[save.pos[11]],"1\247 do grupo 4");
        strcpy(save.nome_equip[save.pos[12]],"2\247 do grupo 5");
        strcpy(save.nome_equip[save.pos[13]],"1\247 do grupo 6");
        strcpy(save.nome_equip[save.pos[14]],"2\247 do grupo 7");
    }
    else if(grupo==8)
    {
        strcpy(save.nome_equip[save.pos[1]],"1\247 do grupo 1"); 
        strcpy(save.nome_equip[save.pos[2]],"2\247 do grupo 2");
        strcpy(save.nome_equip[save.pos[3]],"1\247 do grupo 3");
        strcpy(save.nome_equip[save.pos[4]],"2\247 do grupo 4");  
        strcpy(save.nome_equip[save.pos[5]],"1\247 do grupo 5");
        strcpy(save.nome_equip[save.pos[6]],"2\247 do grupo 6");
        strcpy(save.nome_equip[save.pos[7]],"1\247 do grupo 7");
        strcpy(save.nome_equip[save.pos[8]],"2\247 do grupo 8");
        strcpy(save.nome_equip[save.pos[9]],"2\247 do grupo 1");
        strcpy(save.nome_equip[save.pos[10]],"1\247 do grupo 2"); 
        strcpy(save.nome_equip[save.pos[11]],"2\247 do grupo 3");
        strcpy(save.nome_equip[save.pos[12]],"1\247 do grupo 4");
        strcpy(save.nome_equip[save.pos[13]],"2\247 do grupo 5");
        strcpy(save.nome_equip[save.pos[14]],"1\247 do grupo 6");
        strcpy(save.nome_equip[save.pos[15]],"2\247 do grupo 7");
        strcpy(save.nome_equip[save.pos[16]],"1\247 do grupo 8");
    }
              
    if(save.menu==8)
        for(x=1; x<=32; x++)
            strcpy(save.nome_equip[x],nome_aux[x]);
}

void Manual()
{
    for(X=1; X<=32; X++)
        save.pos[X]=X;
    
    strcpy(save.nome_equip[1],"1\246 equipe"); 
    strcpy(save.nome_equip[2],"2\246 equipe");
    strcpy(save.nome_equip[3],"3\246 equipe");
    strcpy(save.nome_equip[4],"4\246 equipe");
    strcpy(save.nome_equip[5],"5\246 equipe");
    strcpy(save.nome_equip[6],"6\246 equipe");
    strcpy(save.nome_equip[7],"7\246 equipe");
    strcpy(save.nome_equip[8],"8\246 equipe");
    strcpy(save.nome_equip[9],"9\246 equipe");
    strcpy(save.nome_equip[10],"10\246 equipe");
    strcpy(save.nome_equip[11],"11\246 equipe");
    strcpy(save.nome_equip[12],"12\246 equipe");
    strcpy(save.nome_equip[13],"13\246 equipe");
    strcpy(save.nome_equip[14],"14\246 equipe");
    strcpy(save.nome_equip[15],"15\246 equipe");
    strcpy(save.nome_equip[16],"16\246 equipe");
    strcpy(save.nome_equip[17],"17\246 equipe");
    strcpy(save.nome_equip[18],"18\246 equipe");
    strcpy(save.nome_equip[19],"19\246 equipe");
    strcpy(save.nome_equip[20],"20\246 equipe");
    strcpy(save.nome_equip[21],"21\246 equipe");
    strcpy(save.nome_equip[22],"22\246 equipe");
    strcpy(save.nome_equip[23],"23\246 equipe");
    strcpy(save.nome_equip[24],"24\246 equipe");
    strcpy(save.nome_equip[25],"25\246 equipe");
    strcpy(save.nome_equip[26],"26\246 equipe");
    strcpy(save.nome_equip[27],"27\246 equipe");
    strcpy(save.nome_equip[28],"28\246 equipe");
    strcpy(save.nome_equip[29],"29\246 equipe");
    strcpy(save.nome_equip[30],"30\246 equipe");
    strcpy(save.nome_equip[31],"31\246 equipe");
    strcpy(save.nome_equip[32],"32\246 equipe");
}

//--------------------------------------------------------------------------------------------------
#endif
