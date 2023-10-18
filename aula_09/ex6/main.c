#include <stdio.h>

int main() {
    // EXERCICIO 1
    printf("\n\n----- Exercício 1 -----\n\n");
    int n = 5;
    for (int i = 1; i < 10; ++i) {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    
    // EXERCÍCIO 2
    printf("\n\n----- Exercício 2 -----\n\n");
    printf("Digite um numero: ");
    scanf("%d",&n);
    for (int i = 1; i < 11; ++i) {
        printf("%d x %d = %d\n",n,i,n*i);
    }

    // EXERCÍCIO 3
    printf("\n----- Exercício 3 -----\n");
    int i = 2;
    int j = 1;
    for (i; i < 6; i++){
        int j = 1;
        printf("\n");
        for (j; j < 11; j++){
            printf("%d x %d = %d\n",i,j,j*i);
        }
    }
    return 0;
}