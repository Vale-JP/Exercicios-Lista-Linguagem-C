/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float valorcompra;
    printf("qual o valor da compra: ");
    scanf("%f" , &valorcompra);
    printf("o valor da prestação é: %.2f\n" , valorcompra/5 );
 
    return 0;
}
