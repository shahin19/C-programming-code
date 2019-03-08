#include<stdio.h>

int main()
{
    int a[4];
    int i,count=0,j=0;/// count is for hightest number

    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
        if(a[i]>count){
            count=a[i];
            j=i+1;/// this is for position
        }
    }
    printf("%d\n",count);
    printf("%d\n",j);


    return 0;
}
