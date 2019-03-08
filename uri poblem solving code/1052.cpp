#include<stdio.h>

int main()
{
      int i=0,count=0;
      float a[6];
       while(1){
        scanf("%f",&a[i]);
        if(a[i]>0){count++;}
        i++;
        if(i==6)
            break;
       }
       printf("%d valores positivos\n",count);
    return 0;
}
