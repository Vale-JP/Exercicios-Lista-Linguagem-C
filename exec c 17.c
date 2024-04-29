/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int idade;
   printf("informe a sua idade: ");
   scanf("%d" , &idade);
   if(idade<18){;
   printf("você é menor de idade %d" , idade);
   }else{
       printf("você é maior de idade %d" , idade);
   }
   

    return 0;
}
