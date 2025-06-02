#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct No {
    char caractere;
    struct No* proximo;
} No;

void push(No** topo, char caractere) {
    No* novo = (No*)malloc(sizeof(No));
    novo->caractere = caractere;
    novo->proximo = *topo;
    *topo = novo;
}

char pop(No** topo) {
    if (*topo == NULL) {
        return '\0';
    }
    No* temp = *topo;
    char caractere = temp->caractere;
    *topo = (*topo)->proximo;
    free(temp);
    return caractere;
}

int ehPalindromo(char* palavra) {
    No* pilha = NULL;
    int i, len = strlen(palavra);
    
    // Empilhar todos os caracteres
    for (i = 0; i < len; i++) {
        push(&pilha, tolower(palavra[i]));
    }
    
    // Verificar desempilhando
    for (i = 0; i < len; i++) {
        if (tolower(palavra[i]) != pop(&pilha)) {
            return 0; // Não é palíndromo
        }
    }
    
    return 1; // É palíndromo
}

int main() {
    char palavra[100];
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    if (ehPalindromo(palavra)) {
        printf("\"%s\" é um palíndromo!\n", palavra);
    } else {
        printf("\"%s\" não é um palíndromo.\n", palavra);
    }
    
    return 0;
}