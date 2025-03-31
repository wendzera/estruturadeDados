/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    // Criamos uma matriz 3x3 do tipo float
    // Cada linha representa um aluno
    // Cada coluna representa uma matéria
    float notas[3][3];

    // ---
    // Leitura dos dados (notas)
    // ---
    for (int i = 0; i < 3; i++) {
        // i representa o número do aluno (linha da matriz)
        printf("\nAluno %d:\n", i + 1);

        for (int j = 0; j < 3; j++) {
            // j representa a matéria (coluna da matriz)
            printf("Digite a nota da matéria %d: ", j + 1);
            scanf("%f", &notas[i][j]); // Armazena na posição [i][j]
        }
    }

    // Tabela explicativa dos loops
    // Loop | O que ele faz
    // for (int i = 0; i < 3; i++) | Percorre cada linha da matriz (cada aluno)
    // for (int j = 0; j < 3; j++) | Percorre cada coluna da linha atual (cada matéria)

    // ---
    // Exibindo o boletim (a matriz)
    // ---
    printf("\nBoletim completo:\n");

    for (int i = 0; i < 3; i++) {
        printf("\nAluno %d: ", i + 1);

        for (int j = 0; j < 3; j++) {
            // Exibe cada nota do aluno
            printf("%.1f ", notas[i][j]);
        }

        printf("\n"); // Quebra de linha ao final de cada aluno
    }

    // ---
    // Calculando e exibindo a média por aluno
    // ---
    printf("\nMédia de cada aluno:\n");

    for (int i = 0; i < 3; i++) {
        float soma = 0;

        for (int j = 0; j < 3; j++) {
            soma += notas[i][j]; // Soma todas as notas do aluno
        }

        float media = soma / 3.0;
        printf("Aluno %d: %.2f\n", i + 1, media);
    }

    return 0;
}