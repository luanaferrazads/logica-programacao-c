#include <stdio.h>
int main(){
    int numero, basePotencia, denominador, iCont, expoente;
    double soma;
    
    soma = 1.0;
    basePotencia = 3;
    
    printf("Informe o numero de termos:\n");
    scanf("%d", &numero);
    
    for(iCont = 1; iCont < numero; iCont++){
        denominador = 1;
        for(expoente = 1; expoente <= 3; expoente++){
            denominador *= basePotencia;
        }
        if(iCont %2 == 0){
            soma += 1.0 / denominador;
        }else{
            soma -= 1.0 / denominador;
        }
        basePotencia += 2;
    }
    
    printf("O valor de S para o número %d é %.5f", numero, soma);
        
    return 0;
}

