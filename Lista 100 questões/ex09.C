#include <stdio.h>
int main(){
    float raio, altura, volume;
    float pi = 3.14;
    printf("Informe o valor do raio e da altura da lata de óleo:\n");
    scanf("%f %f", &raio, &altura);
    
    volume = pi * (raio * raio) * altura;
    
    printf("O volume da lata de óleo é: %.2f", volume);

};

