#include<stdio.h>

int main(){

    int a[20],i,j;
    int n,temp;
    scanf("%d",&n);

    for( i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }

        }
    }

     for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
