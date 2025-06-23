#include <stdio.h>
void main(){
     float lado, area, perimetro;
     printf("Informe o valor do lado do quadrado:\n");
     scanf("%f", &lado);
  
     area = lado * lado;
     perimetro = 4 * lado;

     printf("A área do quadrado é %.2f, e o perímetro do quadrado é %.2f", area, perimetro);
};