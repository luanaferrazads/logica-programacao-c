#include <stdio.h>
int main(){
    int a, b, c;
    int maior, maior2;
    printf("Insira tres numeros:\n");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a > b && a > c){
        maior = a;
        if(b > c){
            maior2 = b;
        }else if(c > b){
            maior2 = c;
        }
    }
    
    if(b > a && b > c){
        maior = b;
        if(a > c){
            maior2 = a;
        }else if(c > a){
            maior2 = c;
        }
    }
    
    if(c > a && c > b){
        maior = c;
        if(a > b){
            maior2 = a;
        }else if(b > a){
            maior2 = b;
        }
    }
    
    printf("A soma de %d e %d é de %d", maior, maior2, maior+maior2);
    
    return 0;
}
