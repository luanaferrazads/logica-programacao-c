#include <stdio.h>
int main(){
    int valor;
    int n100, n50, n20, n10, n5, n2, n1;
    printf("Insira o valor a ser sacado:\n");
    scanf("%i", &valor);
     
    n100 = valor / 100;
    valor = valor % 100;
    
    n50 = valor / 50;
    valor = valor % 50;
    
    n20 = valor / 20;
    valor = valor %20;
    
    n10 = valor / 10;
    valor = valor % 10;
    
    n5 = valor / 5;
    valor = valor % 5;
    
    n2 = valor / 2;
    valor = valor % 2;
    
    n1 = valor / 1;
     
    /*n100 = valor / 100;
    n50 = (valor % 100) / 50;
    n20 = ((valor % 100) % 50) / 20;
    n10 = (((valor % 100) % 50) % 20) / 10;
    n5 = ((((valor % 100) % 50) % 20) % 10) / 5;
    n2 = (((((valor % 100) % 50) % 20) % 10) % 5) / 2;
    n1 = ((((((valor % 100) % 50) % 20) % 10) % 5) % 2) / 1;*/
    
    printf("A distribuição das notas é:\n");
    printf("%i nota(s) de 100\n", n100);
    printf("%i nota(s) de 50\n", n50);
    printf("%i nota(s) de 20\n", n20);
    printf("%i nota(s) de 10\n", n10);
    printf("%i nota(s) de 5\n", n5);
    printf("%i nota(s) de 2\n", n2);
    printf("%i nota(s) de 1", n1);
    
    return 0;
};
