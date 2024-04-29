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
    int nota1, nota2, nota3;
    float media;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7) {
        printf("Nome do aluno: %s\n", nome);
        printf("Menção: Aprovado\n");
    } else if (media <= 5) {
        printf("Nome do aluno: %s\n", nome);
        printf("Menção: Reprovado\n");
    } else {
        printf("Nome do aluno: %s\n", nome);
        printf("Menção: Recuperação\n");
    }


    return 0;
}
