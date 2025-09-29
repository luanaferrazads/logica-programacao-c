#include <stdio.h>
int main(){
    int iCont, maior, menor;
    int vetor[20];
    
    for(iCont = 0; iCont < 20; iCont++){
        printf("Informe o valor da %d° posição: ", iCont);
        scanf("%d", &vetor[iCont]);
    }
    
    maior = vetor[0];
    menor = vetor[0];
    for(iCont = 1; iCont < 20; iCont++){
        if(vetor[iCont] > maior)
            maior = vetor[iCont];
        if(vetor[iCont] < menor)
            menor = vetor[iCont];
    }
    
    printf("maior: %d, menor: %d", maior, menor);
        
        
    return 0;
}
