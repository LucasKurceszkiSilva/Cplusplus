#include <stdio.h>

int main(){
    double x, y;
    printf("Digite a sua coordenada x:");
    scanf("%f", &x);
    printf("Digite a sua coordenada y:");
    scanf("%f", &y);
    
    if(x==0.0){
        printf("Eixo Y");
    }else if(y==0.0){
        printf("Eixo X");
    }else{
        if(x>0.0){
            if(y>0.0){
                printf("Q1");
            }else{
                printf("Q4");
            }
        }else{
            if(y>0.0){
                printf("Q2");
            }else{
                printf("Q3");
            }
        }
    }
    return 0;
}