#include <stdio.h>
int main(){
    int numero;
    int divisor;
    int divisores;
    
    for(numero = 2; numero <= 100; numero++){
        divisor = 1;
        divisores = 0;
        while(divisor <= numero){
            if((numero % divisor) == 0){
                divisores++;
            }
            divisor++;
        }
        
        if(divisores <= 2){
            printf("%d ", numero);
        }
    }
    
    return 0;
}
/*
#include <stdio.h>
int main(){
    int num, divisor, divisores;
    
    for(num = 2; num <= 100; num++){
        divisores = 0;    
        for(divisor = 1; divisor <= num; divisor++){
            if(num % divisor == 0){
                divisores++;
            }
        }
        
        if(divisores == 2){
            printf("%d ", num);
        }
    }
    
    return 0;
}
*/
