#include <stdio.h>
int main(){
    float ms, kmh;
    printf("Informe a velocidade em m/s:\n");
    scanf("%f", &ms);
    
    kmh = ms * 3.6;
    
    printf("A velocidade de %.2fm/s equivale a %.2fkm/h", ms, kmh);
};
