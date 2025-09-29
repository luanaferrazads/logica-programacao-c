#include <stdio.h>
int main(){
    int termo1, termo2, atual;
    int qtdeTermos;
    int iCont;
    printf("Informe a qnt de termos(mínimo 3):\n");
    scanf("%d", &qtdeTermos);
    
    printf("Informe os dois primeiros termos:\n");
    scanf("%d %d", &termo1, &termo2);
    
    printf("%d %d ", termo1, termo2);
    
    for(iCont = 3; iCont <= qtdeTermos; iCont++){
        if(iCont % 2 == 0){
            atual = termo1 - termo2;
        }else{
            atual = termo1 + termo2;
        }
        printf("%d ", atual);
        termo1 = termo2;
        termo2 = atual;
    }
    return 0;
}

