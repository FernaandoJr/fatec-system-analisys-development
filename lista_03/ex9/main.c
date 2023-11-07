#include <stdio.h>

/*
Entrar com números e imprimir o triplo de cada um deles. O
programa termina quando digitar -999.
*/

int main () {
    int n;
    do {
        printf("\nDigite um numero: ");
        scanf("%d", &n);
        if (n == -999){break;}
        
        printf("\nResultado: %d",n *3);
    } while(n != -999);
}