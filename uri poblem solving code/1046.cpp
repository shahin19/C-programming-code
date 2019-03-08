#include<stdio.h>

int main()
{
    int t1,t2,hours,minutes;
    scanf("%d %d",&t1,&t2);
    minutes = (t2*60)-(t1*60);

    hours=minutes/60;


     if(hours==0){
        printf("O JOGO DUROU 24 HORA(S)\n");
     }else if(hours>0){
        printf("O JOGO DUROU %d HORA(S)\n",hours);
     }else if(hours<0){
        printf("O JOGO DUROU 10 HORA(S)\n",hours+24);
     }


    return 0;
}
