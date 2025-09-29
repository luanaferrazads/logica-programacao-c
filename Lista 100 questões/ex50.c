#include <stdio.h>
int main(){
    int total, dado1, dado2;
    printf("Informe o valor da soma dos dois dados:\n");
    scanf("%d", &total);
    
    for (dado1 = 1; dado1 <= 6; dado1++) {
        for (dado2 = 1; dado2 <= 6; dado2++) {
            if (dado1 + dado2 == total) {
                printf("%d + %d = %d\n", dado1, dado2, total);
            }
        }
    }    
    return 0;
}

