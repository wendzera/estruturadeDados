/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int encontrarMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    int i;
    
    for(i = 1; i < tamanho; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    
    return maior;
}

int main() {
    int vetor[6] = {10, 5, 8, 20, 3, 15};
    
    printf("O maior valor é: %d\n", encontrarMaior(vetor, 6));
    
    return 0;
}