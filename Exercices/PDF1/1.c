#include <stdio.h>

int main(){
    int k;
    float soma=0;
    printf("mostre quantos termos da serie harmonica voce quer calcular: ");
    scanf("%i",&k);
    for(int i=1;i<k;i++){
        soma+=1.0/i;
    }
    printf("Resultado: %f", soma);
    return 0;
}