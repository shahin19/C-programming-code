#include<stdio.h>

int main()
{
    //here x5 is in exam varible
    float x1,x2,x3,x4,x5,average;
    int wa=2,wb=3,wc=4,wd=1;
    scanf("%f %f %f %f",&x1,&x2,&x3,&x4);
    average = (x1*wa+x2*wb+x3*wc+x4*wd)/(wa+wb+wc+wd);
    if(average>=5.0 && average<=6.9){
        scanf("%f",&x5);
    }
    printf("Media: %.1f\n",average);


    if(average>=7.0){
        printf("Aluno aprovado.\n");
    }
    if(average<5.0){
        printf("Aluno reprovado.\n");
    }else if(average>=5.0 && average<=6.9){
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n",x5);
        average=(average+x5)/2;
        if(average>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",average);
        }else if(average<=4.9){
             printf("Aluno reprovado.\n");
        }

    }

    return 0;

}
