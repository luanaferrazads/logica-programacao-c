#include <stdio.h>
int main(){
    int N;
    int divisor;
    int divisores = 0;
    
    printf("Informe um numero:\n");
    scanf("%d", &N);
    
    for(divisor = 1; divisor <= N; divisor++){
        if(N % divisor == 0){
            divisores++;
        }    
    }
    
    if(divisores <= 2){
        printf("PRIMO");
    }else{
        printf("NÃO É PRIMO");
    }
    
    return 0;
}
/*
#include <stdio.h>
int main(){
    int num, divisor, divisores;
    printf("Informe um número:\n");
    scanf("%d", &num);
        divisores = 0;    
        for(divisor = 1; divisor <= num; divisor++){
            if(num % divisor == 0){
                divisores++;
            }
        }
        
        if(divisores == 2){
            printf("É PRIMO");
        }else{
            printf("NÃO É PRIMO");
        }
    
    return 0;
}
*/
