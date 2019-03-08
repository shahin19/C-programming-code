#include<stdio.h>
#include<math.h>
int main()
{
    float num1;
    float fraction;
    int num2;
    int note;
    float note_fraction;
    scanf("%f",&num1);


    /// calculating for only decimal value

     note=num1/100.0;
     num1=fmod(num1,100.0);
     printf("NOTAS:\n");
     printf("%d nota(s) de R$ 100.00\n",note);

     note = num1/50.0;
     num1=fmod(num1,50.0);
     printf("%d nota(s) de R$ 50.00\n",note);

     note = num1/20;
      num1=fmod(num1,20.0);
     printf("%d nota(s) de R$ 20.00\n",note);

     note = num1/10.0;
      num1=fmod(num1,10.0);
     printf("%d nota(s) de R$ 10.00\n",note);

    note = num1/5.0;
    num1=fmod(num1,5.0);
    printf("%d nota(s) de R$ 5.00\n",note);

    note = num1/2.0;
     num1=fmod(num1,2.0);
    printf("%d nota(s) de R$ 2.00\n",note);

    ///calculaing for decimal point------------------>

    printf("MOEDAS:\n");
    note_fraction = num1/1.0;
    num1 = fmod(num1,1.0);
    printf("%d moeda(s) de R$ 1.00\n",(int)note_fraction);

    note_fraction = num1/0.50;
    num1 = fmod(num1,0.50);
    printf("%d moeda(s) de R$ 0.50\n",(int)note_fraction);


    note_fraction = num1/0.25;
    num1 = fmod(num1,0.25);
    printf("%d moeda(s) de R$ 0.25\n",(int)note_fraction);

    note_fraction = num1/ 0.10;
    num1 = fmod(num1, 0.10);
    printf("%d moeda(s) de R$ 0.10\n",(int)note_fraction);

    note_fraction = num1/0.05;
    num1 = fmod(num1,0.05);
    printf("%d moeda(s) de R$ 0.05\n",(int)note_fraction);

    note_fraction = num1/0.01;
    note_fraction = (note_fraction);
    printf("%d moeda(s) de R$ 0.01\n",(int)note_fraction);



    return 0;

}
