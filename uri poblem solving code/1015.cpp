#include <stdio.h>

int main()
{
   int money;
   int quiotent;
   scanf("%d",&money);
   printf("%d\n",money);
   quiotent= money/100;
   money = money%100;
   printf("%d nota(s) de R$ 100,00\n",quiotent);

   quiotent= money/50;
   money = money%50;

   printf("%d nota(s) de R$ 50,00\n",quiotent);

   quiotent= money/20;
   money = money%20;
   printf("%d nota(s) de R$ 20,00\n",quiotent);

   quiotent= money/10;
   money = money%10;
   printf("%d nota(s) de R$ 10,00\n",quiotent);

   quiotent= money/5;
   money = money%5;
   printf("%d nota(s) de R$ 5,00\n",quiotent);

   quiotent= money/2;
   money = money%2;
   printf("%d nota(s) de R$ 2,00\n",quiotent);

   quiotent= money/1;
   money = money%1;
   printf("%d nota(s) de R$ 1,00\n",quiotent);


	return 0;
}
