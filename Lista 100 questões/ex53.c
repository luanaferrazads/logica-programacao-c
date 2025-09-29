#include <stdio.h>
int main(){
    int anos, habA, habB;
    habA = 5000000;
    habB = 7000000;
    anos = 0;
    
    while(habA <= habB){
        habA = habA + (habA * 0.03);
        habB = habB + (habB * 0.02);
        anos++;
    }
    
    printf("Levará %d anos para que a população de A ultrapasse a de B.", anos);
}
