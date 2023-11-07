#include <stdio.h>

/*
Faça um programa que leia dois números, faça a soma deles e
mostre o resultado somente se ele for maior que 10.
*/

int main() {
    int n1;
    int n2;

    printf("Digite dois numeros (1, 2): ");
    scanf("%d%d", &n1,&n2);
    int sum = n1 + n2;

    if(sum > 10){
        printf("Resultado: %d",sum);
    } else{
        printf("Resultado entre a soma dos dois numeros não foi maior que 10");
    }
    
    return 0;
    }
