#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;
    
    printf("Digite 10 números inteiros:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // Remover pares
    j = 0;
    for(i = 0; i < 10; i++) {
        if(vetor[i] % 2 != 0) {
            vetor[j] = vetor[i];
            j++;
        }
    }
    
    printf("Vetor sem números pares:\n");
    for(i = 0; i < j; i++) {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}