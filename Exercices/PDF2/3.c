#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, valor;
    printf("Digite quando comecou o jogo: ");
    scanf("%i", &x);
    printf("Digite quando acabou o jogo: ");
    scanf("%i", &y);
    valor=24+y-x;
    if(valor>24){
        valor-=24;
    }
    printf("\nTempo de jogo: %i horas", valor);
   
    return 0;
}