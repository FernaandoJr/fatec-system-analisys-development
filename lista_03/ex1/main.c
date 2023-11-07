#include <stdio.h>

/*
Usando estruturas de repetição, crie um programa aonde você
entra com 5 números e o programa imprima o quadrado de
cada um.
*/


int main () {
    int n;
    int count = 1;

    do {
        printf("\nDigite 5 numeros: ");
        scanf("%d",&n);

        printf("Quadrado do numero: %d\n",n*n);
        count++;
    } while(count < 6);



    
    

    return 0;
}