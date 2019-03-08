#include<stdio.h>

int main()
{
     int x;
     int password=2002;

     while(1){
        scanf("%d",&x);
        if(x==password){printf("Acesso Permitido\n");break;}
        else if(x!=password){printf("Senha Invalida\n");}
     }
    return 0;
}

