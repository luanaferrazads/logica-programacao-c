#include <stdio.h>
#define MAX 1024
int main(){
    char str[MAX];
    char C; 
    int ocorrencia, iCont, jCont;
    
    printf("Informe a string:\n");
    fgets(str, MAX, stdin);
    
    printf("Informe o caractere a ser encontrado: \n");
    scanf("%c", &C);
    
    ocorrencia = 0;
    for(iCont = 0; str[iCont] != '\0'; iCont++){
        if(str[iCont] == C){
            ocorrencia++;
        }
    }
    
    printf("O caractere %c apareceu %d vezes na string", C, ocorrencia);
    return 0;
}

