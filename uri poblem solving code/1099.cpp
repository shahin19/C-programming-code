#include<stdio.h>

int main()
{
    int a[100][2],i,j,k,sum=0,flag,temp=0;
    int n,x,y;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }

   for(i=0;i<n;i++){
        for(j=0;j<2;j++){
            if(j==0){
                x=a[i][j];
            }else{
                y=a[i][j];
            }
        }
         sum=0;

             if(x>y){
                temp=x;
                x=y;
                y=temp;
            }
        for(k=x,flag=0;k<y;k++){
           if(k%2==1&&flag!=0){
            sum+=k;
           }
           flag++;
        }
        printf("%d\n",sum);
   }

    return 0;
}
