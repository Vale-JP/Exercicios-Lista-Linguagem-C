/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
char nome
int salario_fixo, total_de_vendas;
printf("informe o nome: ");
scanf("%c" , &nome);
printf("informe o salario fixo: ");
scanf("%d" , &salario_fixo);
printf("informe o total de vendas: ");
scanf("%d" , &total_de_vendas);

printf("o salario no final do mês é: %d" , salario_fixo+(total_de_vendas*0.15));

    return 0;
}
