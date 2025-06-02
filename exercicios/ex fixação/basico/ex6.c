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

void push(No** topo, int valor) {
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = *topo;
    *topo = novo;
}

int pop(No** topo) {
    if(*topo == NULL) {
        printf("Pilha vazia!\n");
        return -1;
    }
    
    No* temp = *topo;
    int valor = temp->valor;
    *topo = (*topo)->proximo;
    free(temp);
    
    return valor;
}

int main() {
    No* topo = NULL;
    
    push(&topo, 10);
    push(&topo, 20);
    push(&topo, 30);
    
    printf("Pop: %d\n", pop(&topo));
    printf("Pop: %d\n", pop(&topo));
    printf("Pop: %d\n", pop(&topo));
    
    return 0;
}