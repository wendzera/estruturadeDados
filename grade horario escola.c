/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    // Criamos uma matriz de strings [5][3], onde:
    // - 5 são os dias da semana (linhas)
    // - 3 são os horários/aulas por dia (colunas)
    char grade[5][3][30];  // 30 é o tamanho máximo de cada disciplina

    // Lista com os nomes dos dias para facilitar a exibição
    char dias[5][10] = {"Segunda", "Terca", "Quarta", "Quinta", "Sexta"};

    // ---
    // Leitura das disciplinas
    // ---
    for (int i = 0; i < 5; i++) { // i representa o dia da semana (linha)
        printf("\nDia: %s\n", dias[i]);

        for (int j = 0; j < 3; j++) { // j representa a aula (coluna)
            printf("Digite a disciplina da aula %d: ", j + 1);
            scanf("%29s", grade[i][j]); // Lê uma string com tamanho máximo 29
        }
    }

    // ---
    // Exibição da grade
    // ---
    printf("\nGrade de Horários:\n");

    for (int i = 0; i < 5; i++) {
        printf("\n%s:\n", dias[i]);

        for (int j = 0; j < 3; j++) {
            printf(" Aula %d: %s\n", j + 1, grade[i][j]);
        }
    }

    return 0;
}