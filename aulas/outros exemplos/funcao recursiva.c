/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//funcao recursiva para calcular fatorial
int fatorial(int n) {
    //caso base: se n for 0 ou 1, o fatorial é 1
    if(n == 0 || n == 1){
        return 1;
    }
    
    //chamada recursiva: n * fatorial(n-1)
    return n * fatorial(n - 1);
    
}

int main()
{
   int numero = 6;
   
   //chama a funcao recursiva
   printf("Fatorial de %d é %d\n", numero, fatorial(numero));
   
   return 0;
   
}   