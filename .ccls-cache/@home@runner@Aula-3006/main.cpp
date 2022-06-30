#include <stdio.h>
#include<stdlib.h>
void trocar (int *a, int *b);
int main (){
int a,b,aux;
   printf("\nDigite um valor para A: ");
   scanf("%i", &a);
   printf("\nDigite um valor para B: ");
   scanf("%i",&b);
    trocar(&a,&b);

    printf("\nA = %i",a);
    printf("\nB = %i",b);
  
}
void trocar (int *a, int *b){
     int aux;
     aux=*a;
     *a=*b;
     *b=aux;
    
}