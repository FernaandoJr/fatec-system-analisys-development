#include <stdio.h>
#include <math.h>

/*
Faça um programa que dado um número par positivo, 
o programa calcule a raiz quadrada do mesmo. 
O programa deve garantir que o número digitado seja par positivo 
antes de prosseguir o cálculo
*/

int main () {
    int n = 2;
    float raiz;
    int control = 1;

    while(control > 0){
    printf("\nDigite um numero par e positivo: \n");
    scanf("%d",&n);

    if(n > 0 && n % 2 ==0){
        raiz = sqrt(n);
        printf("%.2f",raiz);
        control = -1;
    }
    }
    return 0;
}