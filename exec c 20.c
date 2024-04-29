/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  char nome;
  char sexo;
  int idade;
  int saude;

  printf("Digite os dados da pessoa:\n");
  printf("Nome: ");
  scanf("%s", &nome);
  printf("Sexo (M/F): ");
  scanf(" %c", &sexo);
  printf("Idade: ");
  scanf("%d", &idade);
  printf("Saúde (1-saudável, 0-não saudável): ");
  scanf("%d", &saude);

  if(idade >= 18 && idade <= 25 && saude == 1) {
    printf("\nA pessoa está apta para o serviço militar obrigatório.");
  }else{
    printf("\nA pessoa não está apta para o serviço militar obrigatório.");
    
    
    
    
    return 0;
}
}
