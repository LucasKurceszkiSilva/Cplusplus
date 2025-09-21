#include <stdio.h>
#include <math.h>

int main(){
    int k, fats=1;
    double soma=0, termo;

    printf("Quer calcular qual exponenciacao de 'e' ? ");
    scanf("%i",&k);
    
    for(int i=i;i<=20;i++){
        if (i == 0) {
            termo = 1;
        } else {
            fats *= i;
            termo = pow(k, i) / fats;
        }
        soma += termo;
    }
    
    printf("Resultado: %f", soma);
    return 0;
}