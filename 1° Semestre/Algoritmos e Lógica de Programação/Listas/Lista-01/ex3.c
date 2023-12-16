#include <stdio.h>

/*
Crie um programa que imprima a média aritmética entre os
números 8, 9 e 7.
*/

int main() {
    int n1 = 8;
    int n2 = 9;
    int n3 = 7;
    int media;

    media = (n1+n2+n3)/3;
    printf("A media aritmetica dos numeros %d + %d + %d = %d",n1,n2,n3,media);
    return 0;
}
