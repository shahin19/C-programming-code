#include<stdio.h>

int main()
{
    int a,b,x1,x2,sum=0,i;
    scanf("%d %d",&x1,&x2);

    for(i=x2+1;i<x1;i++){
        if(i%2==1||i%2==-1){
            sum+=i;
        }
    }
    printf("%d\n",sum);

    return 0;
}
