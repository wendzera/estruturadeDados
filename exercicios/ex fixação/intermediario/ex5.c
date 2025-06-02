#include <stdio.h>
#include <stdlib.h>

typedef struct Cliente {
    int numero;
    struct Cliente* proximo;
} Cliente;

typedef struct Fila {
    Cliente* inicio;
    Cliente* fim;
} Fila;

void enqueue(Fila* fila, int numero) {
    Cliente* novo = (Cliente*)malloc(sizeof(Cliente));
    novo->numero = numero;
    novo->proximo = NULL;
    
    if (fila->fim == NULL) {
        fila->inicio = fila->fim = novo;
    } else {
        fila->fim->proximo = novo;
        fila->fim = novo;
    }
}

int dequeue(Fila* fila) {
    if (fila->inicio == NULL) {
        return -1; // Fila vazia
    }
    
    Cliente* temp = fila->inicio;
    int numero = temp->numero;
    fila->inicio = fila->inicio->proximo;
    
    if (fila->inicio == NULL) {
        fila->fim = NULL;
    }
    
    free(temp);
    return numero;
}

void atenderClientes(Fila* fila) {
    printf("Iniciando atendimento:\n");
    while (fila->inicio != NULL) {
        int cliente = dequeue(fila);
        printf("Atendendo cliente %d\n", cliente);
    }
    printf("Todos os clientes foram atendidos.\n");
}

int main() {
    Fila fila = {NULL, NULL};
    int i;
    
    // Adicionar 5 clientes à fila
    for (i = 1; i <= 5; i++) {
        enqueue(&fila, i);
        printf("Cliente %d chegou na fila.\n", i);
    }
    
    // Atender os clientes
    atenderClientes(&fila);
    
    return 0;
}