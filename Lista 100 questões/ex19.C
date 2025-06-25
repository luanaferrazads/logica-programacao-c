#include <stdio.h>
int main(){
    float x, a, b;
    printf("Considerando a formula de uma equacao do primeiro grau como: ax + b = 0\n");
    printf("Informe o valor de a e de b (considerando que a deve ser diferente de 0):\n");
    scanf("%f %f", &a, &b);
  
    x = -b / a;
    
    printf("A raiz da equação %.0fx + %.0f = 0 é x = %.0f \n", a, b, x);
    printf("A raiz da equação do primeiro grau é: %.0f", x);

    return 0;
}
