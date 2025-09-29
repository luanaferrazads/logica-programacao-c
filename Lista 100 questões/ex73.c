#include <stdio.h>
#define TAM_MAX 6
int main(){
    int vetor[TAM_MAX];
    int iCont, jCont, aux;
    float soma = 0;
    int moda; 
    int maxRepeticao = 0;
    float media, mediana;
    
    for(iCont = 0; iCont < TAM_MAX; iCont++){
        printf("Informe o valor da posição %d do vetor: ", iCont);
        scanf("%d", &vetor[iCont]);
        soma += vetor[iCont];
    }
    
    for(iCont = 0; iCont < TAM_MAX - 1; iCont++){
        for(jCont = 0; jCont < TAM_MAX - iCont - 1; jCont++){
            /* se for mudar para ordem decrescente: trocar > por < no if*/ 
            if(vetor[jCont] > vetor[jCont + 1]){
                aux = vetor[jCont];
                vetor[jCont] = vetor[jCont + 1];
                vetor[jCont + 1] =aux;
            }
        }
    }
    
    if(TAM_MAX % 2 == 0){
        mediana = (vetor[(TAM_MAX / 2) - 1] + vetor[TAM_MAX / 2]) / 2.0;
    }else{
        mediana = vetor[TAM_MAX / 2];
    }
    
    for(iCont = 0; iCont < TAM_MAX; iCont++) {
        int repeticoes = 0;
        for(jCont = 0; jCont < TAM_MAX; jCont++) {
            if(vetor[jCont] == vetor[iCont]) {
                repeticoes++;
            }
        }
        if(repeticoes > maxRepeticao) {
            maxRepeticao = repeticoes;
            moda = vetor[iCont];
        }
    }
    
    media = soma / TAM_MAX;
    
    printf("A moda dos elementos do array é: %d\n", moda);
    printf("A mediana dos elementos do array é: %.2f\n", mediana);
    printf("A media dos elementos do array é: %.2f\n", media);
    return 0;
}

