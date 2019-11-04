#include <stdio.h>
void printaVetor(int *vetor, int tamanho){
    int i;
    printf("{");
    for (i = 0; i < tamanho-1; ++i) {
        printf("%d, ", vetor[i]);
    }
    printf("%d}\n", vetor[i]);
}
