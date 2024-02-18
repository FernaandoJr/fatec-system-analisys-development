#include <stdio.h>

/*
Crie um programa que gere uma Progressão Aritmética (PA) com
uma razão especificada pelo usuário. A Série deve ter 10 termos e começar com o
número 1.
*/

int main () {
    int razao;
    int j = 1;
    printf("Digite uma razão que irá gerar uma Progressão Arítmética: ");
    scanf("%d",&razao);

    // Razão = 5 => 1 6 11 16 21 26 31 36 41 46 

    for(int i = 1; i <= 10*razao;i+=razao){
        printf("%d: \n",i);
    }
    return 0;
}