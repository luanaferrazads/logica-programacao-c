#include <stdio.h>
#define N 256
int main(){
    char str[N];
    char str2[N];
    int iCont;
    int tamanho = 0;
    
    printf("Informe a string: \n");
    fgets(str, N, stdin);
    iCont = 0;
    while(str[iCont] != '\0' && str[iCont] != '\n'){
        tamanho++;
        iCont++;
    }
    
    for(iCont = 0; iCont < tamanho; iCont++){
        str2[iCont] = str[tamanho - 1 - iCont];
    }
    str2[tamanho] = '\0';
    printf("A string invertida: %s", str2);

    return 0;
}

