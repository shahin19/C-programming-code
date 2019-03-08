#include<stdio.h>

int main()
{
     int n,total_weight=0,i,j;
     float sum=0;

     int weight[3]={2,3,5};
     scanf("%d",&n);
     float a[n][3];
     float avg[n];


     for( i=0;i<n;i++){
            total_weight=0;
            sum=0;
        for(j=0;j<3;j++){
            scanf("%f",&a[i][j]);
           sum+=a[i][j]*weight[j];
           total_weight+=weight[j];
        }
         if(j==3){
            avg[i]=sum/total_weight;
         }

     }

     for(i=0;i<n;i++){
        printf("%.1f\n",avg[i]);
     }

    return 0;
}


