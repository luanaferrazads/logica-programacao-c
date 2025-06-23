#include <stdio.h>
void main(){
     float  lado1, lado2, lado3, perimetro;
     printf("Informe os valores dos 3 lados do triângulo:\n");
     scanf("%f %f %f", &lado1, &lado2, &lado3);

     perimetro = lado1 + lado2 + lado3;

     printf("O perímetro do triângulo é %.2f.", perimetro);
};