#include <stdio.h>
int main(){
    double vetor1[10];
    double vetor2[10];
    double vetor3[10];
    int iCont;
    
    for(iCont = 0; iCont < 10; iCont++){
        printf("Informe o valor da posição %d do vetor 1: ", iCont);
        scanf("%lf", &vetor1[iCont]);
    }
    
    for(iCont = 0; iCont < 10; iCont++){
        printf("Informe o valor da posição %d do vetor 2: ", iCont);
        scanf("%lf", &vetor2[iCont]);
    }
    
    for(iCont = 0; iCont < 10; iCont++){
        vetor3[iCont] = vetor1[iCont] + vetor2[iCont];
        printf("Posição %d : %.2f\n", iCont, vetor3[iCont]);
    }
    printf("Vetor3[");
    for(iCont = 0; iCont < 10; iCont++){
        vetor3[iCont] = vetor1[iCont] + vetor2[iCont];
        printf("%.2f ", vetor3[iCont]);
    }
    printf("]");
    return 0;
}

