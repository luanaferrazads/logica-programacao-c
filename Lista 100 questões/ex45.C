#include <stdio.h>
int main(){
    int contador = 1;
    int media;
    int soma = 0;
    int numero;
    
    while(contador <= 5){
        printf("Digite o %d° numero:\n", contador);
        scanf("%d", &numero);
        
        soma += numero;
        contador++;
    }

    media = soma / 5;
    printf("%d", media);
    
    return 0;
}

/*#include <stdio.h>
int main(){
    int icont, num, soma, media;
    
    soma = 0;
    media = 0;
    
    for(icont = 1; icont <= 5; icont++){
        printf("Informe o %d° numero:\n", icont);
        scanf("%d", &num);
        soma = soma + num;
        media = soma / icont;
    }
    
    printf("media: %d", media);

    return 0;
}*/


