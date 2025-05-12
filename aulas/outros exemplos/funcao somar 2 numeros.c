/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//Define uma funcao chamada somar
//Recebe dois inteiros como parâmetros:a e b
//Retorna um inteiro (a soma)
int somar(int a, int b){
    return a + b;//retirna a soma
}


int main()
{
   int x = 10, y = 5; //declara duas variaveis
   int resultado;
   
   //chama a funcao somar passando x e y
   resultado = somar(x, y);
   
   //imprime o resultado da soma
   printf("Resultado da soma: %d\n", resultado);
   
   return 0;
   
}   
