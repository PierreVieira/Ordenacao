#include <stdio.h>
#include "../Headers/ordena.h"

void printaVetor(int *vetor, int tamanho){
    int i;
    printf("{");
    for (i = 0; i < tamanho-1; ++i) {
        printf("%d, ", vetor[i]);
    }
    printf("%d}\n", vetor[i]);
}

int exibeMenu(){
    int opcao;
    printf("=============== MENU ==============\n");
    printf("[1] Bubble Sort\n");
    do{
        printf("-----------------------------------\n");
        printf("Escolha um algoritmo de ordenação: ");
        scanf("%d", &opcao);
    }while(opcao < 1 || opcao > 1);
    printf("===================================\n");
    return opcao;
}

void escolha(int *vetor, int tamanho){
    int op = exibeMenu();
    switch(op){
        case 1: bubbleSort(vetor, tamanho); break;
    }
}