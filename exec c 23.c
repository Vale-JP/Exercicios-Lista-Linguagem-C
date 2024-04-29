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
    int idade, grupo_risco;
    char categoria;
    
    printf("Informe o nome: ");
    scanf("%s" , nome);
    
    printf("Informe a idade:");
    scanf("%d" , &idade);
    
    if(idade <= 17 || idade > 70){
       printf("A sua idade esta fora da faixa.");
       return 0;
    }
    printf("Digite o seu grupo de risco (1,2,3): ");
    scanf("%d" , &grupo_risco);
    
    if (idade >= 17 && idade <= 30){
        if (grupo_risco == 1)
            categoria = 'A';
        else if (grupo_risco == 2)
            categoria = 'B';
        else
            categoria = 'C';
            
    } else if (idade >= 31 && idade <= 50){
        if (grupo_risco == 1)
            categoria = 'D';
        else if (grupo_risco == 2)
            categoria = 'E';
        else
            categoria = 'F';
        if (grupo_risco == 1)
            categoria = 'G';
        else if (grupo_risco == 2)
            categoria = 'H';
        else
            categoria = 'I';
    }
    // imprime os resultados
    printf("\nSeu nome: %s\n" , nome);
    printf("\nSua idade: %d\n" , idade);
    printf("\nCategoria de seguro: %c\n" , categoria);
   


    return 0;
}
