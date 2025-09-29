#include <stdio.h>
int main(){
    int vetor1[10];
    int vetor2[10];
    int vetor3[10];
    int iCont;
    
    for(iCont = 0; iCont < 10; iCont++){
        printf("Informe o valor da posição %d do vetor 1: ", iCont);
        scanf("%d", &vetor1[iCont]);
    }
    
    for(iCont = 0; iCont < 10; iCont++){
        printf("Informe o valor da posição %d do vetor 2: ", iCont);
        scanf("%d", &vetor2[iCont]);
    }
    
    for(iCont = 0; iCont < 10; iCont++){
        if(vetor1[iCont] > vetor2[iCont]){
            vetor3[iCont] = vetor1[iCont];
        }else{
            vetor3[iCont] = vetor2[iCont];
        }
    }

    printf("Vetor 3: [");
    for(iCont = 0; iCont < 10; iCont++){
        printf(" %d ", vetor3[iCont]);
    }
    printf("]");
    
    return 0;
}
