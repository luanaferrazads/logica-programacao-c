#include <stdio.h>
int main(){
    int iCont;
    int vetor[20];

    for(iCont = 0; iCont < 20; iCont++){
        vetor[iCont] = 0;
        printf("Posição %d : %d\n", iCont, vetor[iCont]);
    }
    return 0;
}
