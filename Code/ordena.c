void bubbleSort(int *vetor, int tamanho){
    //Implementação usada no slide, não funciona para 100% dos casos
    int aux;
    for (int i = 0; i < tamanho-1; i++) {
        for (int j = 0; j < tamanho-1; j++) {
            if(vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }
}

void bubbleSort2(int *vetor, int tamanho){
    //Implementação X
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

void insertionSort(int *vetor, int tamanho){
    //Baseado na implementação do Ziviani. Não tá funcionando...
    int i, j, aux;
    for (i = 2; i < tamanho; i++) {
        aux = vetor[i];
        j = i - 1;
        vetor[0] = aux;
        while(aux < vetor[j]){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = aux;
    }
}

void insertionSort2(int *vetor, int tamanho){
    //Implementação X
    int i, j, aux;
    for (i = 0; i < tamanho; ++i) {
        aux = vetor[i];
        for (j = i; (j > 0) && (aux < vetor[j-1]); --j) {
            vetor[j] = vetor[j-1];
        }
        vetor[j] = aux;
    }
}

void selectionSort2(int *vetor, int tamanho){
    //Implementção X
    int i, j, menor, aux;
    //Procura o menor elemento em relação a "i"
    for (i = 0; i < tamanho-1; i++) {
        menor = i;
        for (j = i+1; j < tamanho; j++) {
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        //Trica os valores da posição atual com a "menor"
        if(i != menor){
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
    }
}