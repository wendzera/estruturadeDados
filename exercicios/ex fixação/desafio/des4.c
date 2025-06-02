#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Paciente {
    char nome[40];
    int idade;
    struct Paciente* proximo;
} Paciente;

typedef struct Fila {
    Paciente* inicio;
    Paciente* fim;
} Fila;

void enqueue(Fila* fila, char nome[], int idade) {
    Paciente* novo = (Paciente*)malloc(sizeof(Paciente));
    strcpy(novo->nome, nome);
    novo->idade = idade;
    novo->proximo = NULL;
    
    if(idade >= 60) {
        // Inserir no início (prioridade)
        novo->proximo = fila->inicio;
        fila->inicio = novo;
        if(fila->fim == NULL) {
            fila->fim = novo;
        }
    } else {
        // Inserir no final
        if(fila->fim == NULL) {
            fila->inicio = fila->fim = novo;
        } else {
            fila->fim->proximo = novo;
            fila->fim = novo;
        }
    }
}

void imprimirFila(Fila* fila) {
    Paciente* atual = fila->inicio;
    printf("Ordem de atendimento:\n");
    while(atual != NULL) {
        printf("%s (%d anos)\n", atual->nome, atual->idade);
        atual = atual->proximo;
    }
}

int main() {
    Fila fila = {NULL, NULL};
    char nome[40];
    int idade, i;
    
    for(i = 0; i < 5; i++) {
        printf("Paciente %d:\n", i+1);
        printf("Nome: ");
        scanf("%39s", nome);
        printf("Idade: ");
        scanf("%d", &idade);
        enqueue(&fila, nome, idade);
    }
    
    imprimirFila(&fila);
    
    return 0;
}