#include <stdio.h>
int main(){
    int numero;
    int divisor;
    int soma;
    
    printf("Informe o  numero:\n");
    scanf("%d", &numero);
    
    soma = 0;
    
    for(divisor = 1; divisor < numero; divisor++){
        if(numero % divisor == 0){
            soma += divisor;
        }
    }   
    
    if(soma == numero){
        printf("%d é perfeito", numero);
    }else{
        printf("%d NÃO é perfeito", numero);
    }
    
    return 0;
}
