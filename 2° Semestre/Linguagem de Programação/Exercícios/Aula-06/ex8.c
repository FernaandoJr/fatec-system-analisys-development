#include <stdio.h>
/*
Crie uma função que gere os primeiros n números da sequência de Fibonacci em
um vetor.

x   y   z
0   1   1   2   3   5   8   13  21  34  55  89
*/

int Fibonacci(int *vetor, int n){
    int pos1 = 0;
    int pos2 = 1;

    for(int i = 0; i < n;i++){
        int pos3 = pos1 + pos2;
        vetor[i] = pos3;
        pos1 = pos2;
        pos2 = pos3;
    }
}

int main() {
    int n = 20;
    int vetor[n];

    Fibonacci(vetor,n);

    printf("\nFibonacci com os primeiros %d numeros: \n",n);
    for(int i = 0; i < n;i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");

    return 0;
}
