#include <stdio.h>
/*
Desenvolva um programa que conta quantos elementos distintos existem em um vetor.
*/

int ContadorDistinto(int vetor[], int n){
    int cont = 1;   

    for(int i = 1; i < n; i++){
        int j = 0;
        for(j = 0;j < i;j++){
            if(vetor[i] == vetor[j]){
                break;
            }
            if(i == j){
                cont++;
            }
        }
    }
    return cont;
}
int main() {
    int vetor[] = {30, 50, 30, 10, 20, 40};
    int n = sizeof(vetor)/sizeof(vetor[0]);
    printf("Número de elementos distintos: %d", ContadorDistinto(vetor, n));
    return 0;
}