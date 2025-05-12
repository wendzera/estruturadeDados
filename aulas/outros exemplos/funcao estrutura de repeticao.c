/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//funcao que calcula o fatorial usando repeticao
int fatorial(int n){
    int resultado = 1;//inicializacao com 1(neutro da multiplicacao)
    
    for(int i = 1; i <= n; i++){
        resultado *= 1;//multiplica resultado por i em cada passo
        
    }
    
    return resultado;//retorna o fatorial
}

int main()
{
    int numero = 5;
    
    //chama a funcao fatorial com numero 5
    printf("Fatorial de %d é %d\n", numero, fatorial(numero));
    
    return 0;
}   
