#include <stdio.h>

/*
Imprima os 100 primeiros pares.
*/

int main () {
    int cont = 1;
    for(cont; cont <= 200;){
        if(cont % 2 == 0){
            printf("%d\n", cont);
        }
        cont++;
    }
    return 0;
}