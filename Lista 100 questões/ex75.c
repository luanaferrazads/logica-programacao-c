#include <stdio.h>
#define TAM_MAX 15
int main(){
    int vetor[TAM_MAX] = {5, 15, 6, 2, 8, 9, 7, 20, 6, 9, 30, 14, 19, 12, 3};
    int iCont, jCont, trocas, repeticao, aux;
    
    for(iCont = 0; iCont < TAM_MAX - 1; iCont++){
        trocas = 0;
        for(jCont = 0; jCont < TAM_MAX - iCont - 1; jCont++){
            /* se for mudar para ordem decrescente: trocar > por < no if*/ 
            if(vetor[jCont] > vetor[jCont + 1]){
                aux = vetor[jCont];
                vetor[jCont] = vetor[jCont + 1];
                vetor[jCont + 1] =aux;
                trocas++;
            }
        }
        if(trocas == 0){
            break;
        }
    }
    
    printf("Vetor ordenado: [");
    for(iCont = 0; iCont < TAM_MAX; iCont++){
        printf("%d ", vetor[iCont]);
    }
    printf("]");
    return 0;
}
