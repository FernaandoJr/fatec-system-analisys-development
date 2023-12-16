#include <stdio.h>

/*
Faça um programa que coloque na tela a tabuada do 5 usando while.
*/

int main() {
    int result;
    int n = 5;
    for (int i = 1; i < 10; ++i) {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}