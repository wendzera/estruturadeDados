/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* proximo;
} No;

typedef struct Fila {
    No* inicio;
    No* fim;
} Fila;

void enqueue(Fila* fila, int valor) {
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = NULL;
    
    if(fila->fim == NULL) {
        fila->inicio = fila->fim = novo;
    } else {
        fila->fim->proximo = novo;
        fila->fim = novo;
    }
}

int dequeue(Fila* fila) {
    if(fila->inicio == NULL) {
        printf("Fila vazia!\n");
        return -1;
    }
    
    No* temp = fila->inicio;
    int valor = temp->valor;
    fila->inicio = fila->inicio->proximo;
    
    if(fila->inicio == NULL) {
        fila->fim = NULL;
    }
    
    free(temp);
    return valor;
}

int main() {
    Fila fila = {NULL, NULL};
    
    enqueue(&fila, 10);
    enqueue(&fila, 20);
    enqueue(&fila, 30);
    
    printf("Dequeue: %d\n", dequeue(&fila));
    printf("Dequeue: %d\n", dequeue(&fila));
    printf("Dequeue: %d\n", dequeue(&fila));
    
    return 0;
}