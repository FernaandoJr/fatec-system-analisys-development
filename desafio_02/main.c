#include <stdio.h>
#include <stdlib.h>

int main () {
    int input;
    int random = rand()%1000 +1;
    int qtd = 1;

    do {
        printf(" Tentativa %d. Digite um numero de 1 a 1000 e irei te dizer se esta proximo ou nao: \n",qtd);
        scanf("%d",&input);
        qtd++;

        

    } while(input != random);



    return 0;
}