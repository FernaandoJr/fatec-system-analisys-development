#include <stdio.h>

/*
Altere o programa anterior para aceitar a tabuada de qualquer número.
*/

int main() {
    int result;
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);

    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}