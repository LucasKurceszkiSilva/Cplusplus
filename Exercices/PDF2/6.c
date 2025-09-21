#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, temp, soma=0;
    printf("Digite o primeiro numero: ");
    scanf("%i", &x);
    printf("Digite o segundo numero: ");
    scanf("%i", &y);
    if(y>x){
        temp=x;
        x=y;
        y=temp;
    }
    for(int i=y+1;i<x;i++){
        if(i%2!=0){
            soma+=i;
        }
    }
    printf("Soma dos impares entre eles: %i", soma);
    return 0;
}