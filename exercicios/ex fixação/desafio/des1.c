#include <stdio.h>

void ordenarDecrescente(int vetor[], int tamanho) {
    int i, j, temp;
    
    for(i = 0; i < tamanho-1; i++) {
        for(j = i+1; j < tamanho; j++) {
            if(vetor[i] < vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int main() {
    int vetor[10];
    int i;
    
    printf("Digite 10 números inteiros:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    
    ordenarDecrescente(vetor, 10);
    
    printf("Vetor ordenado decrescente:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}