#include <stdio.h>
int main() {
    int antant, ant, atual;         // Declarando as variáveis: dois anteriores (antant, ant) e o atual.
    int qtdeNumeros = 10;           // Quantos números da sequência queremos imprimir.
    int iCont;                      // Contador para o laço.

    antant = ant = 1;               // Inicializamos os dois primeiros números da sequência como 1.

    // Se for solicitado pelo menos um número:
    if (qtdeNumeros > 0)
        printf("%d ", antant);      // Imprime o primeiro número da sequência (1).

    // Se for solicitado pelo menos dois números:
    if (qtdeNumeros > 1)
        printf("%d ", ant);         // Imprime o segundo número da sequência (1).

    // Começamos o laço a partir da posição 2 (pois já imprimimos as duas primeiras manualmente).
    for (iCont = 2; iCont < qtdeNumeros; iCont++) {
        atual = antant + ant;       // O próximo número da sequência é a soma dos dois anteriores.
        printf("%d ", atual);       // Imprime o número atual.

        antant = ant;               // Atualiza o antepenúltimo número (ele passa a ser o anterior).
        ant = atual;                // Atualiza o último número (ele passa a ser o atual).
    }

    return 0;
}

