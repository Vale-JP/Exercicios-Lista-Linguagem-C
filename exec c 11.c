/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float custo, ganho, porcentagem;
    printf("preço de custo do produto: ");
    scanf("%f" , &custo);
    printf("porcentagem de ganho do produto: ");
    scanf("%f" , &porcentagem);
    
    printf("o valor da venda é: %.2f\n" , (porcentagem*custo)+custo);
    

    return 0;
}
