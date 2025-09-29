#include <stdio.h>
int main(){
    int iCont, pares;
    int vetor[10] ;
    
    pares = 0;
    for(iCont = 0; iCont < 10; iCont++){
        printf("Informe o valor da posição %d:", iCont);
        scanf("%d", &vetor[iCont]);
        if(vetor[iCont] % 2 == 0){
            pares++;
        }
    }
    printf("Total de numeros pares do vetor: %d", pares);
    return 0;
}
