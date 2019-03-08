#include<stdio.h>
#include<math.h>
int main()
{
   int n; int i=1;
   scanf("%d",&n);

   for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d^2 = %d\n",i,i*i);
        }

   }
    return 0;
}
