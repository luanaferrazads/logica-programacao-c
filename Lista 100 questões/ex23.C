#include <stdio.h>
int main(){
    int numero;
    printf("Informe um numero:");
    scanf("%i", &numero);
    
    if (numero % 2 == 0)
        printf("PAR");
    else
        printf("IMPAR");

    return 0;
}

