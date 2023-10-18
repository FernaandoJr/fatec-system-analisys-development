#include <stdio.h>

int main () {
    int n;
    int row = 0;
    int col = 0;
    printf("Digite um número impár dentro de 2 à 20: ");
    scanf("%d",&n);
    
        if(n % 2 == 0 || n < 2 || n > 20){
            printf("Número inválido");
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
