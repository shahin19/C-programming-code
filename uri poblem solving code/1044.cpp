#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    if(a>b){
        if(a%b==0){
        printf("Sao Multiplos\n");
        }else{
        printf("Nao sao Multiplos\n");
        }
    }else{
        if(b%a==0){
        printf("Sao Multiplos\n");
    }else{
        printf("Nao sao Multiplos\n");
    }
    }
   /// highlight this///
    /*if(a%b==0||b%a==0){

    }


    return 0;
}
