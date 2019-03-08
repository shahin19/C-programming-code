#include<stdio.h>

int main()
{
    int x,y,n,i=1;
    float result;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%d %d",&x,&y);
        if(y==0){printf("divisao impossivel\n");}
        else{
                result = x/(y*1.0);
          printf("%.1f\n",result);
        }
        i++;
    }
    return 0;

}
