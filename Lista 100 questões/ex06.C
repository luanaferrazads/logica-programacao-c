#include <stdio.h>
int main(){
    int numero1, numero2, quociente, resto;
    printf("Informe dois números inteiros:\n");
    scanf("%i %i", &numero1, &numero2);
    
    quociente = numero1 / numero2;
    resto = numero1 % numero2;
    
    printf("O quociente da divisão desses números é:%i.\n", quociente);
    printf("O resto da divisão desses números é:%i.\n", resto);

};