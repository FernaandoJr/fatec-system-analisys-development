#include <stdio.h>

/*
Crie um programa que solicite ao usuário o numero de rodas de um
veiculo e, usando a estrutura switch, determine se é uma bicicleta (2 rodas), carro
(4 rodas), ou "Outro tipo" para qualquer outro numero de rodas.
*/

int main () {
    int rodas;

    printf("Digite um número de rodas de um veículo: ");
    scanf("%d",&rodas);

    switch (rodas){
        case 2:
            printf("Tipo de veículo: Bicicleta");
            break;
        case 4:
            printf("Tipo de veículo: Carro");
            break;
        
        default:
            printf("Tipo de veículo: Outro tipo");
            break;
    }
    return 0;
}