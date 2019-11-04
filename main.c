#include <stdio.h>
#include "ordena.h"
#include "auxiliar.h"
#define TAM 5

int main(){
    int vetor[TAM] = {5, 2, 1, 3, 4};
    bubbleSort(vetor, TAM);
    printaVetor(vetor, TAM);
    return 0;
}
