#include <stdio.h>

/*
Leia dois valores para as variáveis A e B, efetuar a troca dos
valores de forma que A passe a ter o valor de B e B passe a ter
o valor de A.
*/

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