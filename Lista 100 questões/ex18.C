#include <stdio.h>
int main(){
    int a, b, temporaria;
    printf("Informe um valor inteiro para atribuir a variável a:\n");
    scanf("%i", &a);
    printf("Informe um valor inteiro para atribuir a variável b:\n");
    scanf("%i", &b);
    
    printf("Valores antes da permutação: a = %i, b = %i\n", a, b);
    
    temporaria = a;
    a = b;
    b = temporaria;
    
    printf("o valor permutado da variável a: %i \n", a);
    printf("o valor permutado da variável b: %i", b);
    return 0;
};
