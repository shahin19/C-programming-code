#include <stdio.h>

int main()
{
    int x;
    int y,m,d;
    scanf("%d",&x);

        y = x/365;
        x = x%365;

        m = x/30;
        d = x%30;


       printf("%d ano(s)\n",y);
       printf("%d ano(s)\n",m);
       printf("%d ano(s)\n",d);

	return 0;
}
