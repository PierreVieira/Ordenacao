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
    printf("[2] Insertion Sort\n");
    printf("[3] Selection Sort\n");
    printf("[4] My implementation\n");
    do{
        printf("-----------------------------------\n");
        printf("Escolha um algoritmo de ordenação: ");
        scanf("%d", &opcao);
    }while(opcao < 1 || opcao > 4);
    printf("===================================\n");
    return opcao;
}

void escolha(int *vetor, int tamanho){
    int op = exibeMenu();
    switch(op){
        case 1: bubbleSort(vetor, tamanho); break;
        case 2: insertionSort2(vetor, tamanho); break;
        case 3: selectionSort2(vetor, tamanho); break;
        case 4: myImplementation(vetor, tamanho); break;
    }
}

int exibeMenuSaida(){
    int option;
    do{
        printf("Deseja sair?\n");
        printf("-------------------\n");
        printf("[0] Nao\n[1] Sim\n");
        printf("Resposta: ");
        scanf("%d", &option);
        printf("-------------------\n");
    }while(option != 0 && option != 1);
    return option;
}