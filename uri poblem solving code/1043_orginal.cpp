#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,area,perimetro,s,new_s;
    scanf("%f %f %f",&a,&b,&c);

    if(a+b >c && b+c > a && a+c > b){
        printf("Perimetro = %.1f\n",a+b+c);

    }else{
       area = .5 * (a+b) * c;
         printf("Area = %.1f\n",area);
    }
    return 0;
}
