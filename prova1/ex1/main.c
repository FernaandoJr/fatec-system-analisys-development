#include <stdio.h>

int main() {
    int n, i = 0;
    int par = 0,impar = 0;
    while (i < 5){
        printf("Digite um numero: ");
        scanf("%d",&n);
        if(n % 2 == 0){
            par++;
        } else{
            impar++;
        }
        i++;
    }
    printf("\nQtd. de numeros pares: %d\n",par);
    printf("Qtd. de numeros impares: %d",impar);
    return 0;
}