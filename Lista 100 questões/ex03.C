#include <stdio.h>

void main(){
     float raio;
     float area;
     float perimetro;
     float pi = 3.14;

     printf("Informe o valor do raio do círculo:\n");
     scanf("%f", &raio);

     area = (pi * raio) * (pi * raio);
     perimetro = 2 * (pi * raio);

     printf("O valor da área do círculo é %.2f e o valor do perímetro do círculo é %.2f", area, perimetro);

};