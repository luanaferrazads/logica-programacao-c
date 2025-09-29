#include <stdio.h>
int main(){
    int atual, primeiro, segundo, terceiro;
    int qtdeNumeros = 1000; 
    int iCont;
    
    printf("Informe o número:\n");
    scanf("%d", &atual);
    
    primeiro = 0;
    segundo = 0;
    terceiro = 0;
    
    for (iCont = 1; iCont < qtdeNumeros; iCont++) {
        primeiro = iCont;
        segundo = iCont + 1;
        terceiro = segundo + 1;
            if(atual == (primeiro * segundo * terceiro)){
                printf("É triangular");
            }
    }

    return 0;
}

