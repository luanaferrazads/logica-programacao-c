#include <stdio.h>
int main(){
    int idade, ano, meses, dias;
    printf("Informe a sua idade em dias:");
    scanf("%i", &idade);
    
    ano = idade / 365;
    meses = (idade % 365) / 30;
    dias = (idade % 365) % 30;
    
    printf("A sua idade é: %i anos, %i meses, %i dias .\n", ano, meses, dias);

};
