#include<stdio.h>
/// ----------problem 1036--------------------->
int main()
{
    int X,Y;
    float price[5]={4.0,4.50,5.0,2.0,1.50};
    scanf("%d %d",&X,&Y);
    printf("Total: R$ %.2f\n",price[X-1]*Y);
    return 0;
}
