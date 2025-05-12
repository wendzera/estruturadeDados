/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int soma(int a, int b)
{
    int s = a + b;
    return s;
}
    int sub(int a, int b)
{
    int s = a - b;
    return s;
}
int main() {
int n1, n2, op, res;
int fim = 0;

while(fim==0)
{
    printf("\nDigite um valor: ");
    scanf("%d",&n1);
    printf("Digite um valor: ");
    scanf("%d",&n2);
    printf("\nEscolha a operação:\n1 - Adicao\n2 - Subtracao\n");
    scanf("%d",&op);

if(op == 1)
 {
    res = soma(n1,n2);
 }
if(op == 2)
  {
    res = sub(n1,n2);
  }
    printf("O resultado é: %d",res);
    printf("\n0 - Continuar\n1 - Parar\n");
    scanf("%d",&fim);
  }
    return 0;
}