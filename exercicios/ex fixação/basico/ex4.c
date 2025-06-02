/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Produto {
    char nome[40];
    float preco;
};

int main() {
    struct Produto produtos[3];
    int i;
    
    for(i = 0; i < 3; i++) {
        printf("Digite o nome do produto %d: ", i+1);
        scanf("%39s", produtos[i].nome);
        
        printf("Digite o preço do produto %d: ", i+1);
        scanf("%f", &produtos[i].preco);
    }
    
    printf("\nProdutos cadastrados:\n");
    for(i = 0; i < 3; i++) {
        printf("Nome: %s - Preço: R$%.2f\n", produtos[i].nome, produtos[i].preco);
    }
    
    return 0;
}