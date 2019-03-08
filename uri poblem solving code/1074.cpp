#include<stdio.h>

int main()
{
    int N,X[10000],count=0,i=0;
    scanf("%d",&N);

    while(i<N){
        scanf("%d",&X[i]);
        i++;
    }
    i=0;
    while(i<N)
    {   if((X[i] % 2 == 1)||( X[i]%2==-1)){
            if(X[i]<0){
                printf("ODD NEGATIVE\n");
            }else{
                printf("ODD POSITIVE\n");
            }

        }else if(X[i]%2==0){

            if(X[i]<0){
                printf("EVEN NEGATIVE\n");
            }else if(X[i]>0){
                    printf("EVEN POSITIVE\n");
            }
        }

        if(X[i]==0){
              printf("NULL\n");
        }
        i++;

    }


    return 0;
}
