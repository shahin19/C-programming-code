#include<stdio.h>

int main()
{
    float salary,new_salary;
    scanf("%f",&salary);

    if(salary >=0.00 && salary <= 400.00)
    {
        new_salary = salary * 0.15;
        salary += new_salary;
        printf("Novo salario: %0.2f\n",salary);
        printf("Reajuste ganho: %0.2f\n",new_salary);
        printf("Em percentual: 15 %%\n");

    }else if(salary > 400.00 && salary <= 800.00)
    {
        new_salary = salary * 0.12;
        salary += new_salary;
        printf("Novo salario: %0.2f\n",salary);
        printf("Reajuste ganho: %0.2f\n",new_salary);
        printf("Em percentual: 12 %%\n");
    }else if(salary > 800.00 && salary <= 1200.00){
         new_salary = salary*0.1;
        salary += new_salary;
        printf("Novo salario: %0.2f\n",salary);
        printf("Reajuste ganho: %0.2f\n",new_salary);
        printf("Em percentual: 10 %%\n");
    }else if(salary > 1200.00 && salary <= 2000.00){
        new_salary = salary*0.07;
        salary += new_salary;
        printf("Novo salario: %0.2f\n",salary);
        printf("Reajuste ganho: %0.2f\n",new_salary);
        printf("Em percentual: 7 %%\n");
    }else if(salary > 2000.00){
        new_salary = salary * 0.04;
        salary += new_salary;
        printf("Novo salario: %0.2f\n",salary);
        printf("Reajuste ganho: %0.2f\n",new_salary);
        printf("Em percentual: 4 %%\n");
    }
    return 0;

}
