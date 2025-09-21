#include <stdio.h>

int main(){
    double x, y, z, temp;
    printf("Digite o primeiro lado do triangulo: ");
    scanf("%lf", &x);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%lf", &y);
     printf("Digite o terceiro lado do triangulo: ");
    scanf("%lf", &z);
   
   if(x<z){
       temp=z;
       z=x;
       x=temp;
   }
   if(x<y){
       temp=y;
       y=x;
       x=temp;
   }
   if(y<z){
       temp=z;
       z=y;
       y=temp;
   }
   
   if(x>(y+z)){
        printf("NAO FORMA TRIANGULO");
   }else{
        if((x*x)==(y*y+z*z)){
           printf("TRIANGULO RETANGULO");
       }
       if((x*x)>(y*y+z*z)){
           printf("TRIANGULO OBSTUSANGULO");
       }
       if((x*x)<(y*y+z*z)){
           printf("TRIANGULO ACUTANGULO");
       }
       if(x==y && x==z && y==z){
            printf("TRIANGULO EQUILATERO");
       }else if(x==y || x==z || y==z){
            printf("TRIANGULO ISOCELES");
       }   
   }
    return 0;
}