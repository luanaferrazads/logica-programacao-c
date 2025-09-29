#include <stdio.h>
#define TAM_MAX 10
int main(){
    int iCont, inteiro, meio, PosicaoInicial, PosicaoFinal, ocorre;
    int vetor[TAM_MAX] = {1, 2, 3, 4, 5, 5, 5, 8, 9, 10};  
    
    printf("Informe o inteiro que você deseja encontrar: ");
    scanf("%d", &inteiro);
    
    ocorre = -1;
    PosicaoInicial = 0;
    PosicaoFinal = TAM_MAX - 1;
    
    /*busca binária*/
    for(iCont = 0; PosicaoInicial <= PosicaoFinal; iCont++){
        meio = (PosicaoInicial + PosicaoFinal) / 2;
        
        if(vetor[meio] == inteiro) {
            ocorre = meio;
            PosicaoFinal = meio - 1;
        }else if(vetor[meio] < inteiro){
            PosicaoInicial = meio + 1;
        }else{
            PosicaoFinal = meio - 1;
        }
        
    }
    
    if(ocorre == -1){
        printf("-1");
    }else{
        printf("Primeira posição: %d", ocorre);
    }
    
    
    return 0;
}
