#include <stdio.h>
int main(){
    float numero, modulo;
    printf("Informe um numero:\n");
    scanf("%f", &numero);
    
    if (numero > 0)
        modulo = numero;
    else if (numero == 0)
        modulo = 0;
    else if (numero < 0)
        modulo = 0 - numero;
        
    printf("O modulo do numero é: %.0f", modulo);

    return 0;
};
