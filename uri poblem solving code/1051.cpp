#include<stdio.h>

int main()
{
    float salary;
    float tax;

    scanf("%f",&salary);

    if(salary>=0.0 && salary<=2000.00){
        printf("Isento\n");
    }else if(salary>2000.00 && salary<=3000.00){
        tax = (salary-2000)*0.08;
        printf("R$ %0.2f\n",tax);
    }else if(salary>3000.00 && salary<=4500.00){
        salary= salary-3000;
        tax = 1000*0.08+ salary * 0.18;
        printf("R$ %0.2f\n",tax);
    }else if(salary>4500.00){
        salary = (salary-4500);
        tax = 1000*0.08+1500*0.18+ salary * 0.28;
        printf("R$ %0.2f\n",tax);
    }
    return 0;
}
