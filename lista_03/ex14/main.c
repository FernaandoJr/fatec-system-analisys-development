#include <stdio.h>

int main () {
    int input;
    int qtd = 0;
    int soma = 0;
    float media = 0.0;
    int maior = 0, menor;


    do {
        printf("Digite um numero: \n");
        scanf("%d",&input);

        if(input == 0){
            break;
        }

        qtd++;
        soma = soma + input;
        if(input > maior){
            maior = input;
        }
        if(input < menor){
            menor = input;
        }
    } while(input != 0);
    
    media = soma / qtd;

    printf("\nResultados: \n"
            "Quantidade de numeros: %d"
           "\nSoma total: %d"
           "\nMedia: %.2f"
           "\nMaior: %d"
           "\nMenor: %d",
           qtd,soma,media,maior,menor);

    return 0;
}