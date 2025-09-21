#include <stdio.h>
#include <math.h>

int main(){
    int k, sinal=1;
    char a;
    float soma=0;

    printf("Quer calcular PI usando  Gregory-Leibniz ou Nilakantha(g ou n):");
    scanf("%c",&a);
    printf("mostre quantos termos da serie voce quer calcular: ");
    scanf("%i",&k);

    if(a=='g'){
        for(int i = 0; i < k; i++){
        soma+=pow(-1, i)*(4.0/(2*i+1));
        }
    }else if(a=='n'){
        soma=3;
        for(int i = 1; i <= k; i++){
        soma += sinal * 4.0 / ((2.0*i)*(2.0*i+1)*(2.0*i+2));
        sinal *= -1;
        }
    }else{
        return 0;
    }
    printf("Resultado: %f", soma);
    return 0;
}