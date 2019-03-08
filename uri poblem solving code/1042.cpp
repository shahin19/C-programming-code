#include<stdio.h>

int main()
{
    int a[4],i,j,temp;
    int b[4];



    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        b[i]=a[i];
    }

    for(i=0;i<3;i++){
        for(j=0;j<3-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }

    for(i=0;i<3;i++){
        printf("%d\n",a[i]);
    }

    printf("\n");

    for(i=0;i<3;i++){
        printf("%d\n",b[i]);
    }

    return 0;
}
