#include <stdio.h>

/*
Faça um programa que leia dois números, faça a soma deles e
implemente a seguinte regra: se a soma for maior que 20 adicione
mais 8; se a soma for menor que 20 subtraia 5
*/

int main() {
    int n1;
    int n2;

    printf("Digite dois numeros (1, 2): ");
    scanf("%d%d", &n1,&n2);
    int sum = n1 + n2;

    if (sum > 20) {
        sum +=8;
    } else{
        sum -=5;
    }
    printf("Resultado: %d",sum);
    return 0;
    }
