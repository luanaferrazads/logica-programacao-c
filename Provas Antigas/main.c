#include <stdio.h>

void main(){
     float base;
     float altura;
     float area;
     float perimetro;
     
     printf("Insira o valor da base do retângulo:\n");
     scanf("%f", &base);

     printf("Insira o valor da altura do retângulo:\n");
     scanf("%f", &altura);

     area = base * altura;
     perimetro = 2 * (base + altura);

     printf("O valor da área do retângulo é %.2f, e o valor do perímetro do retângulo é %.2f", area, perimetro);

};
