#include <stdio.h>
int main(){
    float numero;
    printf("Informe um numero:");
    scanf("%f", &numero);
    
    if(numero > 0){
        printf("POSITIVO");
    }else{
        printf("NEGATIVO");
    }
    return 0;
};
