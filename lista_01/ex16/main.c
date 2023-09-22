#include <stdio.h>

int main () {
    float   tempo,
            vel_media,
            distancia,
            litros;

    printf("Digite o tempo da viagem em minutos: ");
    scanf("%f", &tempo);
    printf("Digite a velocidade média em km/h: ");
    scanf("%f", &vel_media);
    
    tempo = tempo / 60;

    distancia = tempo * vel_media;
    litros = distancia / 12;

    printf("Quantidade de litros gasto na viagem: %f",litros);
    return 0;
}