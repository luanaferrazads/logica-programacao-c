#include <stdio.h>
int main(){
    int numero, iCont, potencia, expoente;
    double soma;
    
    soma = 0.0;
    
    printf("Informe o numero que você deseja encontrar o valor de S:\n");
    scanf("%d", &numero);
    
    for(iCont = 1; iCont <= numero; iCont++){
        potencia = 1;
        for(expoente = 1; expoente <= iCont; expoente++){
            potencia *= iCont;
        }
        soma += 1.0 / potencia;
    }
    
    printf("O valor de S para o número %d é %.5f", numero, soma);
        
    return 0;
}

