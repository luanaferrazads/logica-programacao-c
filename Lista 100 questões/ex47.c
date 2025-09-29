#include <stdio.h>
int main(){
    int  resto, dividendo, divisor;
    int quociente = 0;
    
    printf("Informe o dividendo e o divisor (inteiros e positivos):\n");
    scanf("%d %d", &dividendo, &divisor);
    
    while(dividendo >= divisor){
        dividendo = dividendo - divisor;
        quociente++;
    }   
    
    resto = dividendo;
    
    printf("resto = %d\n", resto);
 
    return 0;
}

/*#include <stdio.h>
int main(){
    int quociente, dividendo, divisor, resto;
    printf("Informe os valores de A e B:\n");
    scanf("%d %d", &dividendo, &divisor);
    for(quociente = 0; dividendo >= divisor; quociente++){
        dividendo =  dividendo - divisor;
        resto = dividendo;
    }
    
    printf("quociente: %d, resto: %d", quociente, resto);
    
    return 0;
}*/

