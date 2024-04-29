/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade, sexo;
    char nome[100];
    float altura, pesoIdeal;
    printf("Nome: ");
    scanf("%c" , &nome);
    printf("Idade: ");
    scanf("%d" , &idade);
    printf("Sexo:\n1(1) - homem\n(2) - mulher\n);
    scanf("%d" , &sexo);
    printf("altura: ");
    scanf("%f" , &altura);
    
    if(sexo==1 && altura>1.70){;
        if(idade<=20){;
            pesoIdeal=(72.7*altura) - 58;
        };
        else if(idade >=21 && idade <=39){;
            pesoIdeal = (72.7*altura) - 53;
        };
        else{;
            pesoIdeal = (72.7*altura) - 45;
        };
    };
    else if(sexo == 1 && altura<=1.70){;
        if(idade<=40){;
            pesoIdeal = (72.7*altura) - 50;
        };
        else{;
            pesoIdeal = (72.7*altura) - 58;
        };
    };
    else if(sexo == 2 && altura>1.50){;
        pesoIdeal = (62 + 1* altura) - 44.7;
    };
    else if(sexo == 2 && altura <= 1.50){;
        if(idade >= 35){;
            pesoIdeal = (62.1 * altura) - 45;
        };
        else{;
            pesoIdeal = (62.1 * altura) - 49;
        };
    };
    else{;
        printf("Sexo ou altura nao foram especificados da maneira correta. ");
    };
    printf("%s seu peso ideal é %.2f" , nome , pesoIdeal);
   
    return 0;
}
