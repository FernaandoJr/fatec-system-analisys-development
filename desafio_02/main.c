#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    /*
    Faça um programa que joga contra um humano. O programa conta
    quantos palpites o jogador precisou até adivinhar um número
    inteiro sorteado entre 1 e 1000, inclusive. Cada vez que o jogador
    erra, o programa diz quantas tentativas já foram feitas e dá uma
    dica. A dica informa se o número chutado é maior ou menor que o
    número sorteado. O jogo vai estreitando o intervalo de números
    possíveis conforme as tentativas vão sendo feitas. O programa
    ainda imprime uma avaliação do desempenho do jogador segundo
    a tabela descrita
*/

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