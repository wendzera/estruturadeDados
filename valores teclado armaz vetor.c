/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int valores[3];//valor de 3 posicoes
    
    //le os 3 valores de usuario
    for(int i = 0; i < 3; i++){
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &valores[i]);//armazena no indice correspondente
    }
    
    //exibe os valores lidos
    for(int i = 0; i < 3; i++) {
        printf("valores [%d] = %d\n", i, valores[i]);
    }
    return 0;
} 