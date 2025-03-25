/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    float notas[4]; //valor para 4 notas
    float soma = 0; //variavel para acumular as notas
    float media;
    
    //le as 4 notas
    for(int i = 0; i < 4; i++){
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]); //armazena no vetor
        soma += notas[i]; //soma a nota na variavel soma
    } 
    
    media = soma / 4; //calcula a media
    
    printf("Média das notas: %.2f\n", media);
    
    return 0;
}