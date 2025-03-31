/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int matriz[2][2];
  int soma = 0;
  
  //leitura da matriz
  for (int i = 0; i < 2; i++) {
      for(int j = 0; j < 2; j++){
  printf("Digite o valor para [%d][%d]: ", i, j);
  scanf("%d", &matriz[i][j]);
  soma += matriz[i][j]; //acumula a soma dos elementos
  }
}

//exibe a soma
printf("Soma de todos os elementos: %d\n", soma);

return 0;
}