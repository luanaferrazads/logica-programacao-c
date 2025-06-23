#include <stdio.h>
int main(){
    int fahrenheit, celsius;
    printf("Informe a temperatura em fahrenheit:\n ");
    scanf("%i", & fahrenheit);
    
    celsius = (5 * (fahrenheit - 32)) / 9;

    printf("O valor de %iºF equivale a %iºC", fahrenheit, celsius);
};
