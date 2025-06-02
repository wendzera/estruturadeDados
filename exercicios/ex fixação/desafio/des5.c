#include <stdio.h>
#include <stdlib.h>

typedef struct NoCircular {
    int valor;
    struct NoCircular* anterior;
    struct NoCircular* proximo;
} NoCircular;

NoCircular* criarNo(int valor) {
    NoCircular* novo = (NoCircular*)malloc(sizeof(NoCircular));
    novo->valor = valor;
    novo->anterior = novo;
    novo->proximo = novo;
    return novo;
}

void inserirFim(NoCircular** inicio, int valor) {
    NoCircular* novo = criarNo(valor);
    
    if (*inicio == NULL) {
        *inicio = novo;
        return;
    }
    
    NoCircular* ultimo = (*inicio)->anterior;
    
    novo->proximo = *inicio;
    novo->anterior = ultimo;
    ultimo->proximo = novo;
    (*inicio)->anterior = novo;
}

void removerPorValor(NoCircular** inicio, int valor) {
    if (*inicio == NULL) {
        printf("Lista vazia!\n");
        return;
    }
    
    NoCircular* atual = *inicio;
    do {
        if (atual->valor == valor) {
            if (atual == atual->proximo) { // Único nó
                free(atual);
                *inicio = NULL;
                return;
            }
            
            atual->anterior->proximo = atual->proximo;
            atual->proximo->anterior = atual->anterior;
            
            if (atual == *inicio) {
                *inicio = atual->proximo;
            }
            
            free(atual);
            printf("Valor %d removido.\n", valor);
            return;
        }
        atual = atual->proximo;
    } while (atual != *inicio);
    
    printf("Valor %d não encontrado.\n", valor);
}

void imprimirCircular(NoCircular* inicio) {
    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return;
    }
    
    NoCircular* atual = inicio;
    printf("Lista Circular: ");
    do {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    } while (atual != inicio);
    printf("\n");
}

int main() {
    NoCircular* lista = NULL;
    int opcao, valor;
    
    do {
        printf("\nMenu:\n");
        printf("1. Inserir no fim\n");
        printf("2. Remover por valor\n");
        printf("3. Imprimir lista\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("Valor a inserir: ");
                scanf("%d", &valor);
                inserirFim(&lista, valor);
                break;
            case 2:
                printf("Valor a remover: ");
                scanf("%d", &valor);
                removerPorValor(&lista, valor);
                break;
            case 3:
                imprimirCircular(lista);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while(opcao != 0);
    
    // Liberar memória
    if (lista != NULL) {
        NoCircular* atual = lista;
        NoCircular* temp;
        do {
            temp = atual;
            atual = atual->proximo;
            free(temp);
        } while (atual != lista);
    }
    
    return 0;
}