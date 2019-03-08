#include<stdio.h>


int main()
{
    int j=7,i,m,k;
    for(m=1;m<=9;m+=2){
            for(k=1;k<=3;k++){

                printf("I=%d J=%d\n",m,j);
                if(k==3)break;
                j--;
            }
            j+=4;
    }

    return 0;
}
