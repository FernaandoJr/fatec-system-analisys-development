#include <stdio.h>

/*
Imprimir o intervalo de 120 a 300
*/

int main () {
    int i = 120;

    while (i >= 120  &&  i <= 300) {
        printf("%d\n",i);
        i++;
    }
    return 0;
}