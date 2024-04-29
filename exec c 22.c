/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  char nome[50];
  int matricula;
  float lab;
  float semestral;
  float final;
  float notaFinal;
  char classificacao;


  printf("Digite os dados do estudante:\n");
  printf("Nome: ");
  scanf("%s", &nome);
  printf("Número de matrícula: ");
  scanf("%d", &matricula);
  printf("Nota do laboratório: ");
  scanf("%f", &lab);
  printf("Nota da avaliação semestral: ");
  scanf("%f", &semestral);
  printf("Nota do exame final: ");
  scanf("%f", &final);

  notaFinal = (lab * 2 + semestral * 3 + final * 5) / 10;

  if (notaFinal >= 8.1) {
    classificacao = 'A';
  } else if (notaFinal >= 7) {
    classificacao = 'B';
  } else if (notaFinal >= 6) {
    classificacao = 'C';
  } else if (notaFinal >= 5) {
    classificacao = 'D';
  } else {
    classificacao = 'R';
  }

  printf("\nNota final do estudante %s: %.2f", nome, notaFinal);
  printf("\nClassificação do estudante %s: %c", nome, classificacao);
  

    return 0;
}
