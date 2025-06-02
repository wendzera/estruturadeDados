/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Aluno {
    char nome[40];
    float nota;
};

int main() {
    struct Aluno aluno;
    
    printf("Digite o nome do aluno: ");
    scanf("%39s", aluno.nome);
    
    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);
    
    printf("\nDados do aluno:\n");
    printf("Nome: %s\nNota: %.2f\n", aluno.nome, aluno.nota);
    
    return 0;
}