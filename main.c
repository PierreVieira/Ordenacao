#include <stdio.h>
#include "Headers/auxiliar.h"
#define TAM 5

int main(){
    int sair;
    do{
        int vetor[TAM] = {5, 2, 1, 3, 4};
        printaVetor(vetor, TAM);
        escolha(vetor, TAM);
        printaVetor(vetor, TAM);
        sair = exibeMenuSaida();
    }while(!sair);
    return 0;
}
