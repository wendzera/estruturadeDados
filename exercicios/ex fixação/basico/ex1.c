/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int vetor[5];
    int i;
    
    printf("Digite 5 números inteiros:\n");
    for(i = 0; i < 5; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nNúmeros digitados:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}