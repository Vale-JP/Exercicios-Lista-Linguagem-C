/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int ano, contaAte2000 = 0, totalCars = 0;
    float preco, desconto, precoFinal;
    char resposta;

    do {
        printf("Digite o ano do carro: ");
        scanf("%d", &ano);

        printf("Digite o preco do carro: ");
        scanf("%f", &preco);

        if (ano <= 2000) {
            contaAte2000++;
            desconto = preco * 0.12;
        } else {
            desconto = preco * 0.07;
        }

        precoFinal = preco - desconto;

        printf("Desconto: R$%.2f\n", desconto);
        printf("Preco final: R$%.2f\n", precoFinal);

    return 0;
    }
}    


