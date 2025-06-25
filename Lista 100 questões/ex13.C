#include <stdio.h>

void main(){
    float r1, r2, r3, req12, req123;
    printf("Informe em ohms os valores das resistências R1, R2, R3:\n");
    scanf("%f %f %f", &r1, &r2, &r3);
    
    req12 = (r1 * r2) / (r1 + r2);
    req123 = req12 + r3;
    
    printf("A resistência equivalente desse circuito é de %.2f ohms.", req123);
};
