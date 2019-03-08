#include<stdio.h>

int main()
{
    int i=0,count=0;
    int a;

    while(i<5){
        scanf("%d",&a);
        if(a%2==0){
            count++;
        }
        i++;
    }
    printf("%d valores pares\n",count);
    return 0;
}
