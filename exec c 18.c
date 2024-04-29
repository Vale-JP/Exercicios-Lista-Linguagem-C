/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   char nome[50];
    char genero;

    printf("informe o seu nome: ");
    scanf("%s", nome);

    printf("informe seu genero (H/M): ");
    scanf(" %c", &genero);

    if (genero == 'H' || genero == 'H') {
        
        printf("nome: %s, genero: homem\n", nome);
    } else if (genero == 'M' || genero == 'M') {
        
        printf("nome: %s, genero: mulher\n", nome);
    } else {
        printf("Nome e genero informado\n");
    }

    
    
   
  
    
    

    return 0;
}
