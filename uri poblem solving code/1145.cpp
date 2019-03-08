#include<stdio.h>

int main()
{
    int x,y,i,j,m=1;
    scanf("%d %d",&x,&y);

    for(i=1;i<=y/x;i++)
    {
        for(j=1;j<=x;j++){
            if(j==3){
                 printf("%d",m++);
            }else {
                printf("%d ",m++);
            }

        }
        printf("\n");

    }
    return 0;
}

