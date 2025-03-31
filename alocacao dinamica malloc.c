/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas = 3, colunas = 3;
    int **matriz;
    
    // Alocação dinâmica de memória para matriz 3x3
    matriz = (int **)malloc(linhas * sizeof(int *));
    for(int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }
    
    // Preenchendo a matriz
    printf("Digite os valores da matriz 3x3:\n");
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Exibindo a matriz
    printf("Matriz digitada:\n");
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Liberando a memória alocada
    for(int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}