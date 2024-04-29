/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
int consumo_medio, distancia_total, total_gasto;

    printf("Digite a distancia total percorrida pelo automovel: ");
    scanf("%d", &distancia_total);
    printf("Digite o total de combustivel gasto pelo automovel: ");
    scanf("%d", &total_gasto);
    
    printf("\no consumo medio de combustivel é: %d" , distancia_total / total_gasto );
    

    
    return 0;
}
