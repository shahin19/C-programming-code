#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	char b[20];
	char c[20];

    gets(a);
    gets(b);
    gets(c);

    if(strcmp(a,"vertebrado")==0){
    	if(strcmp(b,"ave")==0){
    		if(strcmp(c,"carnivoro")==0){
    				printf("aguia\n");
    		}else{
    				printf("pomba\n");
    		}
    	}
    	if(strcmp(b,"mamifero")==0){
    		if(strcmp(c,"onivoro")==0){
    			printf("homem\n");
    		}else{
    			printf("vaca\n");
    		}
    	}
    }

    if(strcmp(a,"invertebrado")==0){
    	if(strcmp(b,"inseto")==0){
    		if(strcmp(c,"hematofago")==0){
    			printf("pulga\n");
    		}else{
    			printf("lagarta\n");
    		}
    	}
    	if(strcmp(b,"anelideo")==0){
    		if(strcmp(c,"hematofago")==0){
    			printf("sanguessuga\n");
    		}else{
    			printf("minhoca\n");
    		}
    	}
    }
    return 0;

}
