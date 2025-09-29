#include <stdio.h>
#define TAM_MAX 30

int main() {
    int vetor[TAM_MAX];
    int indice, tamAtual = 0, elementoAdd, posRemov, pos_add;
    int elemRemov, indice2, dupl;
    char opcao;

    do {
        printf("\nArray atual = [ ");
        for(indice = 0; indice < tamAtual; indice++){
            printf("%d ", vetor[indice]);
        }
        printf("] (Tamanho: %d)\n", tamAtual);  // 👈 Exibe tamanho atual antes do menu

        // Menu
        printf("\nEscolha uma das opções abaixo:\n");
        printf("a. Inserir um elemento no final do vetor\n");
        printf("b. Inserir um elemento em uma dada posição\n");
        printf("c. Remover um elemento de uma posição indicada\n");
        printf("d. Remover todos elementos iguais a um valor indicado\n");
        printf("e. Gerar um novo array sem duplicidades a partir deste array\n");
        printf("n. Encerrar\n");

        scanf(" %c", &opcao);  // Atenção ao espaço antes de %c

        switch(opcao) {
            case 'a':
                if (tamAtual >= TAM_MAX) {
                    printf("Vetor cheio!\n");
                    break;
                }
                printf("Insira o elemento a ser adicionado ao final do vetor: ");
                scanf("%d", &elementoAdd);
                vetor[tamAtual++] = elementoAdd;
                printf("Elemento inserido. Tamanho atual do vetor: %d\n", tamAtual); // 👈
                break;

            case 'b':
                if (tamAtual >= TAM_MAX) {
                    printf("Vetor cheio!\n");
                    break;
                }
                printf("Insira a posição (0 a %d) e o elemento: ", tamAtual);
                scanf("%d %d", &pos_add, &elementoAdd);
                if (pos_add < 0 || pos_add > tamAtual) {
                    printf("Posição inválida.\n");
                    break;
                }
                for(indice = tamAtual; indice > pos_add; indice--) {
                    vetor[indice] = vetor[indice - 1];
                }
                vetor[pos_add] = elementoAdd;
                tamAtual++;
                printf("Elemento inserido na posição %d. Tamanho atual do vetor: %d\n", pos_add, tamAtual); // 👈
                break;

            case 'c':
                printf("Insira a posição do elemento a ser removido (0 a %d): ", tamAtual - 1);
                scanf("%d", &posRemov);
                if(posRemov < 0 || posRemov >= tamAtual) {
                    printf("Posição inválida!\n");
                    break;
                }
                for(indice = posRemov; indice < tamAtual - 1; indice++) {
                    vetor[indice] = vetor[indice + 1];
                }
                tamAtual--;
                printf("Elemento removido da posição %d. Tamanho atual do vetor: %d\n", posRemov, tamAtual); // 👈
                break;

            case 'd':
                printf("Insira o elemento a ser removido: ");
                scanf("%d", &elemRemov);
                for(indice = 0; indice < tamAtual; indice++) {
                    if(vetor[indice] == elemRemov) {
                        for(indice2 = indice; indice2 < tamAtual - 1; indice2++) {
                            vetor[indice2] = vetor[indice2 + 1];
                        }
                        tamAtual--;
                        indice--; // reavaliar índice após remoção
                    }
                }
                printf("Todos os elementos iguais a %d foram removidos. Tamanho atual: %d\n", elemRemov, tamAtual); // 👈
                break;

            case 'e': {
                int novo[TAM_MAX];
                int tamNovo = 0, existe;
                for(indice = 0; indice < tamAtual; indice++) {
                    existe = 0;
                    for(indice2 = 0; indice2 < tamNovo; indice2++) {
                        if(novo[indice2] == vetor[indice]) {
                            existe = 1;
                            break;
                        }
                    }
                    if(!existe) {
                        novo[tamNovo++] = vetor[indice];
                    }
                }
                printf("Novo vetor sem duplicidades = [ ");
                for(indice = 0; indice < tamNovo; indice++) {
                    printf("%d ", novo[indice]);
                }
                printf("] (Tamanho: %d)\n", tamNovo); // 👈
                break;
            }

            case 'n':
                printf("Encerrando...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }

    } while(opcao != 'n');

    return 0;
}
