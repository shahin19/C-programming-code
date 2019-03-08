#include<stdio.h>

int main()
{
    float x,sum=0,average=0;
    int count=0;

    while(1){
       scanf("%f",&x);
       if(x>=0 && x<=10){
            sum+=x;
            count++;
       }else{
        printf("nota invalida\n");
       }
       if(count==2){printf("media = %.2f\n",sum/2);break;}

    }


    return 0;

}
