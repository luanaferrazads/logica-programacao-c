#include <stdio.h>
int main(){
    int iCont, maior, menor;
    int posMaior, posMenor;
    int vetor[20];
    
    for(iCont = 0; iCont < 20; iCont++){
        printf("Informe o valor da %d° posição: ", iCont);
        scanf("%d", &vetor[iCont]);
    }
    
    maior = vetor[0];
    menor = vetor[0];
    posMaior = 0;
    posMenor = 0;
    for(iCont = 1; iCont < 20; iCont++){
        if(vetor[iCont] > maior){
            maior = vetor[iCont];
            posMaior = iCont;
        }
        if(vetor[iCont] < menor){
            menor = vetor[iCont];
            posMenor = iCont;
        }
    }
    
    printf("maior: %d, na posição %d\n", maior, posMaior);
    printf("menor: %d, na posição %d", menor, posMenor);
        
        
    return 0;
}

