#include <stdio.h>
int main(){
    int iCont;
    int vetor1[10];
    int vetor2[10];
    
    for(iCont = 0; iCont < 10; iCont++){
        printf("Informe o valor da posição %d: ", iCont);
        scanf("%d", &vetor1[iCont]);
        vetor2[iCont] = vetor1[iCont];
    }
    
    printf("vetor 2: [");
    for(iCont = 0; iCont < 10; iCont++){
        printf("%d ", vetor2[iCont]);
    }
    printf("]");
    return 0;
}

