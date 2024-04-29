/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float deposito, rendimento;
    printf("qual o valor do deposito: ");
    scanf("%f" , &deposito);
    
    printf("o valor após o rendimento é: %.2f\n " , deposito+(deposito*7/100));
    

    return 0;
}
