#include <stdio.h>

/*
Ler vários número e quando terminar mostrar quantos foram
entre 100 e 200. O programa termina quando número for zero.
*/

int main () {
    int n;
    int cont = 0;
    do {
        printf("\nDigite um numero (Digite 0 para sair): \n");
        scanf("%d", &n);
        if (n >= 100 && n <=200) {
            cont++;
        }
    } while(n != 0);
    printf("%d numeros foram dentro do intervalo de 100 a 200!",cont);
}