#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, temp, par=0, imp=0, neg=0, pos=0;
    printf("Digite quantos numeros voce quer ler: ");
    scanf("%i", &x);
   for(int i=0;i<x;i++){
       printf("Digite um numero: ");
       scanf("%i", &temp);
       if(temp%2==0){
           par++;
       }else{
           imp++;
       }
       if(i>=0){
           pos++;
       }else{
           neg++;
       }
   }
   printf("Pares: %i\nImpaeres: %i\nPositivos: %i\nNegativos: %i", par, imp, pos, neg);
    return 0;
}