#include <stdio.h>
int main(){
    int numero1, numero2;
    int divisor;
    int soma1, soma2;
    
    printf("Informe o primeiro numero:\n");
    scanf("%d", &numero1);
    
    printf("Informe o segundo numero:\n");
    scanf("%d", &numero2);
    
    soma1 = soma2 = 0;
    
    for(divisor = 1; divisor < numero1; divisor++){
        if(numero1 % divisor == 0){
            soma1 += divisor;
        }
    }   
    for(divisor = 1; divisor < numero2; divisor++){
            if(numero2 % divisor == 0){
                soma2 += divisor;
            }
    }
    
    if((soma1 == numero2)&&(soma2 == numero1)){
        printf("%d e %d são numeros amigos.", numero1, numero2);
    }else{
        printf("%d e %d NÃO são numeros amigos.", numero1, numero2);
    }
    
    return 0;
}
