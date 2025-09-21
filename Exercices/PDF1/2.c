#include <stdio.h>
#include <math.h>

int main(){
    int k;
    float soma=0;
    printf("mostre quantos termos da serie voce quer calcular: ");
    scanf("%i",&k);
    for(int i=1;i<k;i++){
        soma+=pow((-1),i+1)/i;
    }
    printf("Resultado: %f", soma);
    return 0;
}