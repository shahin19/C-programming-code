#include<stdio.h>

int main()
{
    int n,i,num,count=0,countNOt=0;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(num>=10 && num<=20){
            count++;
        }else{
            countNOt++;
        }
    }
    printf("%d in\n",count);
    printf("%d out\n",countNOt);
    return 0;
}

