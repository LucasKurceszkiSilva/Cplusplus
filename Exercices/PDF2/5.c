#include <stdio.h>

int main(){
    int x;
    float a, b, c;
    printf("Voce quer calcular quantas vezes a media ponderada? ");
    scanf("%i", &x);
    float vet[x]; //nao parece funcionar em todo pc
    
    for(int i=0;i<x;i++){
        printf("digite as 3 notas:\n");
        scanf("%f", &a);
        scanf("%f", &b);
        scanf("%f", &c);
        vet[i]=(2.0*a+3.0*b+5.0*c)/10.0;
    }
    
    printf("Media de cada vez: ");
    for(int i=0;i<x;i++){
        printf("\n%.1f", vet[i]);
    }
    return 0;
}