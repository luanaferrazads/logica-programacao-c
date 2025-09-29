#include <stdio.h>
#define DIAS 30
int main(){
    int iCont, posMaior, posMenor;
    float vetor[DIAS],  maior, menor, mediaQuinzena1, mediaQuinzena2;
    float somaPrimeiros15dias, somaUltimos15dias;
    
    somaPrimeiros15dias = 0;
    somaUltimos15dias = 0;
    for(iCont = 0; iCont < DIAS; iCont++){
        printf("Informe o indice pluviometrico do %d° dia: ", iCont+1);
        scanf("%f", &vetor[iCont]);
            if(iCont < 15){
                somaPrimeiros15dias += vetor[iCont];
            }else{
                somaUltimos15dias += vetor[iCont];
            }
    }
    
    maior = vetor[0];
    menor = vetor[0];
    posMaior = 0;
    posMenor = 0;
    for(iCont = 1; iCont < DIAS; iCont++){
        if(vetor[iCont] > maior){
            maior = vetor[iCont];
            posMaior = iCont;
        }
        if(vetor[iCont] < menor){
            menor = vetor[iCont];
            posMenor = iCont;
        }
    }
    
    mediaQuinzena1 = somaPrimeiros15dias / 15;
    mediaQuinzena2 = somaUltimos15dias / 15;
    
    printf("Dia que mais choveu: %d, índice: %.2f\n", posMaior+1, maior);
    printf("Dia que menos choveu: %d, índice %.2f\n", posMenor+1, menor);
    printf("Média primeira quinzena: %.2f\n", mediaQuinzena1);
    printf("Média segunda quinzena: %.2f", mediaQuinzena2);
        
        
    return 0;
}

