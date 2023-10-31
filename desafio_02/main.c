#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int input;
    int random;
    int qtd = 1;
    srand ( time(NULL) );
    random = rand() % 1000 + 1;

    do {
        printf("Tentativa %d. Digite um numero de 1 a 1000 e irei te dizer se esta proximo ou nao: ",qtd);
        scanf("%d",&input);

        if(input < random){
            printf("\nMuito baixo\n");
        } else if (input > random) {
            printf("\nMuito alto\n");
        } else{
            printf("Voce acertou o numero %d em %d tentativas.\n",random,qtd);

            if(qtd >= 1 && qtd <=5){
                printf("Voce, como adivinhador, eh excelente!");
            } else if(qtd >= 6 && qtd <=7){
                printf("Voce, como adivinhador, eh bom!");  
            } else if(qtd >= 8 && qtd <=12){
                printf("Voce, como adivinhador, eh normal!");  
            } else if(qtd >= 13 && qtd <=14){
                printf("Voce, como adivinhador, eh bom!");  
            } else if (qtd >= 15){
                printf("Voce, como adivinhador, eh tragico!");  
            }
        }
        qtd++;
    } while(input != random);
    return 0;
}