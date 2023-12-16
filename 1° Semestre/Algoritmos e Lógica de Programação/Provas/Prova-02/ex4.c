#include <stdio.h>

/*
Faça um programa que dado um número positivo ele faça uma contagem regressiva do número até zero. 
Faça o programa garantir que o número seja positivo.
*/

int main () {
    int cont;
    int n = 1;
    int control = 1;

    while(control > 0){
    printf("\nDigite um numero positivo: \n");
    scanf("%d",&n);

    if(n > 0){
        for (n; n >= 0; n--) {
            printf("%d ",n);
            control = -1;
        }
    }
    }
    return 0;
}