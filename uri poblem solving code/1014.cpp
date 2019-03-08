#include <stdio.h>
#include<math.h>
int main()
{
   double x1,y1;
   double x2,y2;
   double distance;
   /// reading values
   scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
   /// calculating distance
   ///distance = sqrt((x2-x1)*(x2-x1)+ (y2-y1)*(y2-y1));
   distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
   printf("%0.4lf\n",distance);

	return 0;
}
