#include <stdio.h>

/*
Implemente uma função recursiva que calcule o valor de uma base x elevada a um expoente y.
*/

int main () {
    int base;
    int exp;

    printf("Digite a base do numero: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &exp);

    printf("Resultado: %d", ElevarNumero(base, exp));

    return 0;
}

int ElevarNumero(int base, int exp){
    if(exp == 0) return 1;
    return base * ElevarNumero(base, exp - 1);

}