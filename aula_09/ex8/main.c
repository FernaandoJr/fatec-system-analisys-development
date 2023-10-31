#include <stdio.h>

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
