#include <stdio.h>
int main(){
    int vetor[15], inteiro, numVezes;
    int iCont;
    
    for(iCont = 0; iCont < 15; iCont++){
        printf("Informe o valor da %d° posição do vetor: ", iCont+1);
        scanf("%d", &vetor[iCont]);
    }
    printf("Informe o valor do inteiro que você deseja: ");
    scanf("%d", &inteiro);
    
    numVezes = 0;
    for(iCont = 0; iCont < 15; iCont++){
        if(vetor[iCont] == inteiro){
            numVezes++;
        }
    }
    
    printf("O numeros de vezes que o n° %d ocorre no vetor é: %d", inteiro, numVezes);
    return 0;
}

