#include <stdio.h>

int main() {
    // EXERCICIO 1
    int result;
    int n = 5;
    for (int i = 1; i < 10; ++i) {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    
    // EXERCÍCIO 2
    int result;
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    for (int i = 1; i < 10; ++i) {
        printf("%d x %d = %d\n",n,i,n*i);
    }

    return 0;
}