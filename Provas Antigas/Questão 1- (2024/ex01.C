#include <stdio.h>
int main(){
    float diaria, aumento, total; /*incremento*/
    int dataEntrada; /*dias*/
    printf("Informe a data de entrada:\n");
    scanf("%d", &dataEntrada);
    printf("Informe o valor da diaria:\n");
    scanf("%f", &diaria);
    printf("Informe o valor do aumento diario:\n");
    scanf("%f", &aumento);
    
    if(dataEntrada > 0 && dataEntrada <= 15){
        total = (32 - dataEntrada) * (diaria + ((dataEntrada - 1) * aumento));
        printf("O valor total é de R$%.2f\n", total);
        return 0;
    }else{
        total = (32 - dataEntrada) * (diaria + (14 * aumento));
        printf("O valor total é de R$%.2f\n", total);
        return 0;
    }
    return 0;
    
    /*dias = 32 - dataEntrada;
    incremento = dataEntrada - 1;
    
    if(dataEntrada > 0 && dataEntrada < 15){
        total = dias * (diaria + (incremento * aumento));
        printf ("O valor total é de R$%.2f\n", total);
    }else{
        total = dias * (diaria + (14 * aumento));
        printf ("O valor total é de R$%.2f\n", total);
    }*/
}