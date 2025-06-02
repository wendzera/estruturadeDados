#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* proximo;
} No;

void inserirOrdenado(No** inicio, int valor) {
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    
    // Caso a lista esteja vazia ou o novo valor seja menor que o primeiro
    if (*inicio == NULL || (*inicio)->valor >= valor) {
        novo->proximo = *inicio;
        *inicio = novo;
        return;
    }
    
    // Encontrar o ponto de inserção
    No* atual = *inicio;
    while (atual->proximo != NULL && atual->proximo->valor < valor) {
        atual = atual->proximo;
    }
    
    novo->proximo = atual->proximo;
    atual->proximo = novo;
}

void imprimirLista(No* inicio) {
    No* atual = inicio;
    printf("Lista ordenada: ");
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");
}

int main() {
    No* inicio = NULL;
    
    inserirOrdenado(&inicio, 5);
    inserirOrdenado(&inicio, 2);
    inserirOrdenado(&inicio, 7);
    inserirOrdenado(&inicio, 3);
    inserirOrdenado(&inicio, 1);
    
    imprimirLista(inicio);
    
    return 0;
}