#include <stdio.h>

struct Aluno {
    char nome[40];
    float nota1, nota2;
};

int main() {
    struct Aluno alunos[5];
    int i;
    
    for(i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Nome: ");
        scanf("%39s", alunos[i].nome);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
    }
    
    printf("\nAlunos com média >= 7.0:\n");
    for(i = 0; i < 5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2) / 2;
        if(media >= 7.0) {
            printf("%s\n", alunos[i].nome);
        }
    }
    
    return 0;
}