#include <stdio.h>
int main(){
    int numero1, numero2, numero3;
    printf("Informe 3 numeros:\n");
    scanf("%i %i %i", &numero1, &numero2, &numero3);

    if ((numero1 > numero2) && (numero1 >numero3))
        printf("Maior numero:%i", numero1);
    else if ((numero2 > numero1) && (numero2 >numero3))
        printf("Maior numero:%i", numero2);
    else if ((numero3 > numero1) && (numero3 >numero2))
        printf("Maior numero:%i", numero3);
    return 0;
};
