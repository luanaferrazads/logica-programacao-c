#include <stdio.h>
#define TAM_MAX 100
int main(){
    int vetor[TAM_MAX], iCont;
    int votos1 = 0;
    int votos2 = 0;
    int votos0 = 0;
    
    printf("Chapas disponiveis: 1, 2, nulo(0)\n");
    for(iCont = 0; iCont < TAM_MAX; iCont++){
        printf("%d voto: ", iCont+1);
        scanf("%d", &vetor[iCont]);
        if(vetor[iCont] == -1){
            break;
        }
        if(vetor[iCont] == 1){
            votos1++;
        }
        if(vetor[iCont] == 2){
            votos2++;
        }
        if(vetor[iCont] == 0){
            votos0++;
        }
    }
    printf("Numeros de votos na chapa1 = %d", votos1);
    printf("Numeros de votos na chapa2 = %d", votos2);
    printf("Numeros de votos nulos = %d", votos0);
    
    

    return 0;
}

