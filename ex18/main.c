#include <stdio.h>

int main () {
    float a,b,c;

    printf("Digite um valor para A: ");
    scanf("%f", &a);
    printf("Digite um valor para B: ");
    scanf("%f", &b);

    c = a;
    a = b;
    b = c;
    printf("Valor de A: %.f\n",a);
    printf("Valor de B: %.f\n",b);
    return 0;
}