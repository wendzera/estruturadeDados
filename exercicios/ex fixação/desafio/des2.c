#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[40];
    float nota;
    struct Aluno* proximo;
} Aluno;

void inserirOrdenado(Aluno** inicio, char nome[], float nota) {
    Aluno* novo = (Aluno*)malloc(sizeof(Aluno));
    strcpy(novo->nome, nome);
    novo->nota = nota;
    
    // Caso a lista esteja vazia ou o novo nome seja menor que o primeiro
    if (*inicio == NULL || strcmp(nome, (*inicio)->nome) < 0) {
        novo->proximo = *inicio;
        *inicio = novo;
        return;
    }
    
    // Encontrar o ponto de inserção
    Aluno* atual = *inicio;
    while (atual->proximo != NULL && strcmp(atual->proximo->nome, nome) < 0) {
        atual = atual->proximo;
    }
    
    novo->proximo = atual->proximo;
    atual->proximo = novo;
}

void imprimirLista(Aluno* inicio) {
    Aluno* atual = inicio;
    printf("\nLista de Alunos:\n");
    printf("Nome\t\tNota\n");
    printf("----------------------\n");
    while (atual != NULL) {
        printf("%-15s\t%.2f\n", atual->nome, atual->nota);
        atual = atual->proximo;
    }
}

int main() {
    Aluno* lista = NULL;
    char nome[40];
    float nota;
    int opcao;
    
    do {
        printf("\nMenu:\n");
        printf("1. Inserir aluno\n");
        printf("2. Imprimir lista\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("Nome do aluno: ");
                scanf("%39s", nome);
                printf("Nota do aluno: ");
                scanf("%f", &nota);
                inserirOrdenado(&lista, nome, nota);
                break;
            case 2:
                imprimirLista(lista);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while(opcao != 0);
    
    return 0;
}