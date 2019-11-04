void bubbleSort(int *vetor, int tamanho){
    //Esse algoritmo não funciona sempre, está no slide...
    int aux;
    for (int i = 0; i < tamanho-1; ++i) {
        for (int j = 0; j < tamanho-1; ++j) {
            if(vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }
}

void bubbleSort2(int *vetor, int tamanho){
    int i, continua, aux, fim = tamanho;
    do{
        continua = 0;
        for (i = 0; i < fim-1; ++i) {
            if(vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                continua = 1;
            }
        }
        fim--;
    }while(continua != 0);
}
