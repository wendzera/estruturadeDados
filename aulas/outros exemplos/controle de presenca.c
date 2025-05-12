/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    // Biblioteca para entrada e saída padrão
#include <ctype.h>    // Biblioteca para manipulação de caracteres (toupper)

int main() {
    // Vetor com nomes dos 3 alunos
    char alunos[3][20] = {"Ana", "Carlos", "Beatriz"};

    // Vetor com os 5 dias da semana
    char dias[5][10] = {"Seg", "Ter", "Qua", "Qui", "Sex"};

    // Matriz para armazenar as presenças: 3 linhas (alunos) x 5 colunas (dias)
    char presenca[3][5];

    // Leitura das presenças
    for (int i = 0; i < 3; i++) {
        // i representa o índice do aluno (linha)
        printf("\nPresencas para %s:\n", alunos[i]);

        for (int j = 0; j < 5; j++) {
            // j representa o índice do dia (coluna)
            char valor;

            do {
                printf("%s - Digite 'P' para Presente ou 'F' para Falta: ", dias[j]);
                scanf(" %c", &valor);    // Espaço antes do %c para evitar problemas com buffer

                valor = toupper(valor);    // Converte o caractere para maiúsculo (ex: 'p' -> 'P')

                if (valor == 'P' || valor == 'F') {
                    presenca[i][j] = valor;    // Armazena o valor válido na matriz
                } else {
                    printf("Entrada inválida! Use apenas P ou F.\n");
                }
            } while (valor != 'P' && valor != 'F'); // Repete até que a entrada seja válida
        }
    }

    // Exibição da tabela de presenças
    // ---
    printf("\n[ Tabela de Presencas ]:\n");

    // Cabeçalho da tabela: imprime os dias
    printf("Aluno    | ");
    for (int j = 0; j < 5; j++) {
        printf("%s ", dias[j]);
    }
    printf("\n");

    // Corpo da tabela: mostra cada linha com nome + presenças
    for (int i = 0; i < 3; i++) {
        printf("%-10s| ", alunos[i]);    // Imprime nome do aluno alinhado à esquerda
        for (int j = 0; j < 5; j++) {
            printf("%c   ", presenca[i][j]);    // Imprime cada presença ("P" ou "F")
        }
        printf("\n");
    }

    return 0; // Fim do programa
}