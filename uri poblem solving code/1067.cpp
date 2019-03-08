#include<stdio.h>

int main()
{
    int i,n,count=0;
    scanf("%d",&n);


       for(i=n;;i++){
          if(i%2==1){
                printf("%d\n",i);
                count++;
          }
          if(count==6)break;
       }



    return 0;
}
