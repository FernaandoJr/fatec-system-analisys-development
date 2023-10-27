#include <stdio.h>

int main () {
    int n;
    double result = 0.0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        result+= 1.0/i;
        printf("%lf ", result);
    }
    printf("Resultado: %f",result);
}