/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//funcao que imprime os elementos de um vetor
void mostrarVetor(int v[], int tamanho) {
    for(int i = 0; i < tamanho; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
}

int main()
{
    int dados[5] = {1, 3, 5, 7, 9};
    
    //chamada da funcao e envio do vetor
    mostrarVetor(dados, 5);
    
    return 0;
}