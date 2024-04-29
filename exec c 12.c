/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float valor, porcentagemdistribuido, imposto;
    printf("qual o valor do automovel na fabrica: ");
    scanf("%f" , &valor);
    porcentagemdistribuido=(valor*0.28)+valor;
    imposto=(porcentagemdistribuido*0.45)+porcentagemdistribuido;
    printf("o valor do automovel é : %.2f\n " , imposto);
    

   

    return 0;
}
