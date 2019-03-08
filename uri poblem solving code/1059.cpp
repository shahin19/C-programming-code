#include<stdio.h>

int main()
{
    int i=0,count=0;
    float a[10],sum=0;

    while(1){
        scanf("%f",&a[i]);
        if(a[i]>0){
        count++;
        sum+=a[i];
        }
        i++;
        if(i==6)
            break;
    }
    printf("%d valores positivos\n",count);
    printf("%.1f\n",sum/count);
    return 0;
}
