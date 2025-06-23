#include <stdio.h>
int main(){
    int numero, sucessor;
    printf("Informe um número de apenas 1 algarismo:\n");
    scanf("%i", &numero);
    
    sucessor = numero + 1;
    
    printf("O sucessor do número informado é:%i", sucessor);

};