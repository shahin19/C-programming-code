#include<stdio.h>

int main()
{
    int t1,t2,t3,t4,hours,minutes,m,n;
    scanf("%d %d %d %d",&t1,&t2,&t3,&t4);
       m=t3*60+t4;
       n=t1*60+t2;
    if(m>n){
       minutes = m-n;
    }else if(n>m){
       minutes = n-m;
    }else if(m==n){
       minutes = m-n;
    }

     hours=minutes/60;
     minutes=minutes%60;

     if(hours==0 && minutes==0){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
     }else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hours,minutes);
     }


    return 0;
}
