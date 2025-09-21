#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, temp;
    printf("Digite quantos casos teste quer: ");
    scanf("%i", &x);
    int somas[x];
    
    for(int i=0;i<x;i++){
        int y, z;
        printf("\nDigite o primeiro numero: ");
        scanf("%i", &y);
        printf("Digite o segundo numero: ");
        scanf("%i", &z);
        if(z>y){
            temp=z;
            z=y;
            y=temp;
        }
        
        for(int j=z;j<y;j++){
            if(i%2!=0){
                somas[i]+=j;
            }
        }
    }
    printf("Valor das somas:\n");
    for(int i=0;i<x;i++){
        printf("%i\n", somas[i]);
    }
    return 0;
}