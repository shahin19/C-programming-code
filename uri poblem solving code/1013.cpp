#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    int MariorAB;
    scanf("%d %d %d",&a,&b,&c);
    MariorAB = (a+b+abs(a-b))/2;
    MariorAB = (c+MariorAB+abs(c-MariorAB))/2;
    printf("%d eh o maio\n",MariorAB);
    return 0;
}
