#include <stdio.h>
#include <stdlib.h>

typedef struct NoPilha {
    int valor;
    struct NoPilha* proximo;
} NoPilha;

void push(NoPilha** topo, int valor) {
    NoPilha* novo = (NoPilha*)malloc(sizeof(NoPilha));
    novo->valor = valor;
    novo->proximo = *topo;
    *topo = novo;
}

int pop(NoPilha** topo, int* soma) {
    if (*topo == NULL) {
        return -1; // Pilha vazia
    }
    
    NoPilha* temp = *topo;
    int valor = temp->valor;
    *soma += valor; // Acumula o valor no somat�rio
    *topo = (*topo)->proximo;
    free(temp);
    
    return valor;
}

int main() {
    NoPilha* pilha = NULL;
    int i, numero, soma = 0;
    
    printf("Digite 5 n�meros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("N�mero %d: ", i+1);
        scanf("%d", &numero);
        push(&pilha, numero);
    }
    
    printf("\nDesempilhando e somando:\n");
    while (pilha != NULL) {
        int valor = pop(&pilha, &soma);
        printf("Valor retirado: %d (Soma parcial: %d)\n", valor, soma);
    }
    
    printf("\nSoma total dos valores: %d\n", soma);
    
    return 0;
}