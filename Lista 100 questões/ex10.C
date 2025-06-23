#include <stdio.h>
int main(){
   int numOriginal, numConvertido;
   int dig1, dig2, dig3, dig0;
   int base;
   
   base = 2;
   printf("Informe um número de base 10:\\>");
   scanf("%d", &numOriginal);
   dig0 = numOriginal % base;
   numOriginal = numOriginal / base;
   
   dig1 = numOriginal % base;
   numOriginal = numOriginal / base;
   
   dig2 = numOriginal % base;
   numOriginal = numOriginal / base;
   
   dig3 = numOriginal % base;
   numOriginal = numOriginal / base;
   
   numConvertido = dig3 * 1000 + 
                   dig2 * 100 +
                   dig1 * 10 +
                   dig0;
                   
    printf("O numero informado em formato binário é = %i", numConvertido);
};
/*#include <stdio.h>
int main(){
   int numero, b1, b2, b3, b4;
   printf("Informe um número de 0 à 15:\n");
   scanf("%i", &numero);
   
   b1 = numero % 2;
   b2 = (numero / 2) % 2;
   b3 = ((numero /2) / 2) % 2;
   b4 = (((numero /2) / 2) / 2) % 2;
   
   printf("O numero informado em binário = %i%i%i%i\n", b1, b2, b3, b4);
};*/

