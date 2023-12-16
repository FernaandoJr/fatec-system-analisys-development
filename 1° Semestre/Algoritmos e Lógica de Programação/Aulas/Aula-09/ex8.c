#include <stdio.h>

/*
Faça um programa que lê um valor ímpar inteiro n, (2 < n < 20)
e imprima as figuras a seguir com n caracteres de lado ( os
exemplos mostram n = 5)

#####  ###  #         #   #     #  
#   # #   # ##       ##   #    # # 
#   # #   # ###     ### ##### #   #
#   # #   # ####   ####   #    # # 
#####  ###  ##### #####   #     #  
*/
int main() {
    int n;
    int linha;
    int coluna;
    int meio;
    int e;
    int d;

    do {
        do {
            printf("Digite o valor de n (impar entre 3 e 19): ");
            scanf("%d", &n);
        } while (n < 3 || n > 19);
    } while(n % 2 == 0);

    // primeira forma: quadrado
    for(linha = 0; linha < n; linha++)
    {
        if(linha == 0 || linha == (n-1))
        {
            for(coluna = 0; coluna < n; coluna++)
            {
                printf("#");
            }
        }
        else
        {
            printf("#");
            for(coluna = 0; coluna < (n - 2); coluna++)
            {
                printf(" ");
            }
            printf("#");
        }
        printf("\n");
    }
    printf("\n");

    // segunda forma: quadrado com cantos arredondados
    for(linha = 0; linha < n; linha++)
    {
        if(linha == 0 || linha == (n-1))
        {
            printf(" ");
            for(coluna = 0; coluna < (n-2); coluna++)
            {
                printf("#");
            }
            printf(" ");
        }
        else
        {
            printf("#");
            for(coluna = 0; coluna < (n - 2); coluna++)
            {
                printf(" ");
            }
            printf("#");
        }
        printf("\n");
    }
    printf("\n");

    // terceira forma: triangulo 1
    for(linha = 0; linha < n; linha++)
    {
        for(coluna = 0; coluna < (linha + 1); coluna ++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");

    // Quarta forma: triangulo 2
    for(linha = 0; linha < n; linha++)
    {
        for(coluna = 0; coluna < (n - 1 - linha); coluna++)
        {
            printf(" ");
        }
        for(coluna = 0; coluna < (linha + 1); coluna ++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");

    // Quinta forma: triangulo 3
    for(linha = 0; linha < n; linha++)
    {
        for(coluna = 0; coluna < linha; coluna++)
        {
            printf(" ");
        }
        for(coluna = 0; coluna < (n - linha); coluna ++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");

    // sexta forma: cruz
    meio = n / 2;
    for(linha = 0; linha < n; linha++){
        if(linha == meio){
            for(coluna = 0; coluna < n; coluna++){
                printf("#");
            }
            printf("\n");
        }
        else {
            for (coluna = 0; coluna < n; coluna++) {
                if (coluna == meio) {
                    printf("#");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    printf("\n");

    // setima forma: losango
    e = meio;
    d = meio;
    for(linha = 0; linha < n; linha++){
        for(coluna = 0; coluna < n; coluna++){
            if(coluna == e || coluna == d){
                printf("#");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        if(linha < meio){
            e--;
            d++;
        }
        else{
            e++;
            d--;
        }
    }
    printf("\n");

    return 0;
}
