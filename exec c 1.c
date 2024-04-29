/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 float num1, num2, result;

    printf("informe o primeiro numero: ");
    scanf("%f", &num1);

    printf("informe o segundo numero: ");
    scanf("%f", &num2);

    result = num1 + num2;

    printf("o resultado das somas é: %.2f\n", result);


    return 0;
}
