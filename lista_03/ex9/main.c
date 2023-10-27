#include <stdio.h>

int main () {
    int n;
    do {
        printf("\nDigite um numero: ");
        scanf("%d", &n);
        if (n == -999){break;}
        
        printf("\nResultado: %d",n *3);
    } while(n != -999);
}