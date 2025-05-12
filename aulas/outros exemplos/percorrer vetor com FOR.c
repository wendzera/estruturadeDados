/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int numeros[5] = {2, 4, 6, 8, 10};
    
    //percorre o vetor de 0 até 4
    for(int i = 0; i < 5; i++){
        printf("numeros[%d] - %d\n", i, numeros[i]);
    }
    return 0;
}