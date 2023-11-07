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

int main () {
    int n;
    int row = 0;
    int col = 0;
    printf("Digite um numero impar dentro de 2 a 20: ");
    scanf("%d",&n);
    
        if(n % 2 == 0 || n < 2 || n > 20){
            printf("Numero invalido");
        } else{

            while (col < n){
                int row = 0;
                for (row; row < n; row++) {
                    printf("#");
                }
                printf("\n");
                col++;
            }

        }
    return 0;
    }
