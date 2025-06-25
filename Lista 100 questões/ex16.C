#include <stdio.h>
int main(){
    int c, d, u, numero, invertido;
    printf("Escreva um número com 3 algarismos:\n");
    scanf("%i", &numero);
    
    c = numero / 100;
    d = (numero % 100) / 10;
    u = (numero % 100) % 10;
    invertido = (u * 100) + (d * 10) + (c * 1);
   
    printf("numero  invertido = %i", invertido);
};
