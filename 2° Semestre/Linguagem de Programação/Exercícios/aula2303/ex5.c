#include <stdio.h>
/*
Implemente um programa que inverte a ordem dos elementos em um vetor.
*/
int main() {
    int vetor[5] = {9821,911,91,193,61};
    for (int i = 5-1; i >= 0; i--) {
        printf("%d\n",vetor[i]);
    }
    return 0;
}