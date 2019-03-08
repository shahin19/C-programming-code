#include<stdio.h>

int main()
{
    double A,B,C,temp;
    double arr[3];
    int i,j;
    for(i=0;i<3;i++){
        scanf("%lf",&arr[i]);
    }


    for(i=0;i<3-1;i++){
        for(j=0;j<3-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;

            }
        }
    }

    A=arr[0];
    B=arr[1];
    C=arr[2];


    if(A >= B + C){
        printf("NAO FORMA TRIANGUL\n");
    }
    else if(A*A == B*B + C*C){
        printf("TRIANGULO RETANGULO\n");
        }
     else if(A*A > B*B + C*C){
        printf("TRIANGULO OBTUSANGULO\n");
       }
     else if(A*A < B*B + C*C){
        printf("TRIANGULO ACUTANGULO\n");
       }


      if(A==B&&B==C){
        printf("TRIANGULO EQUILATERO\n");
       }
       else if((A==B)|| (A==C)||(B==C)){
        printf("TRIANGULO ISOSCELES\n");
       }


    return 0;
}
