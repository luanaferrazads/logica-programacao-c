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
    
    printf("quociente = %d\n", quociente);
 
    return 0;
}
