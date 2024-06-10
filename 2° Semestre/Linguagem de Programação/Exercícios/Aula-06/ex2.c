#include <stdio.h>

/*
Escreva uma função que converta temperaturas de Celsius para Fahrenheit e
outra para converter de Fahrenheit para Celsius.
*/

int main (int argc, char *argv[]) {
    int input;
    double valor;
    
    printf("\n1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");

    printf("Escolha uma das opcoes: ");
    scanf("%d", &input);
    
    switch(input){
        case 1:
            printf("Digite uma temperatura em Celsius: ");
            scanf("%lf", &valor);
            printf("Resultado: %0.2f F\n", CelToFah(valor));
            break;
        case 2:
            printf("Digite uma temperatura em Fahrenheits: ");
            scanf("%lf", &valor);
            printf("Resultado: %0.2f C\n",  FahToCel(valor));
            break;
        default:
            printf("Tente novamente!\n");
            break;
    }
    return 0;
}

