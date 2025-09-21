#include <stdio.h>

double fat(int x){
    if(x == 0 || x == 1) return 1.0;
    return x * fat(x - 1);
}

double pot(double x, int y){
    if(y == 0) return 1.0;
    double res = 1.0;
    for(int i = 0; i < y; i++) res *= x;
    return res;
}

int main(){
    double x;
    int qntd, sinal = 1;
    double soma = 0;

    printf("Quer calcular o cosseno de que valor (radianos)? ");
    scanf("%lf", &x);
    printf("Com quantos termos? ");
    scanf("%d", &qntd);

    for(int i = 0; i < qntd; i++){
        soma += sinal * pot(x, 2*i) / fat(2*i);
        sinal *= -1;
    }

    printf("Resultado da série: %f", soma);

    return 0;
}
