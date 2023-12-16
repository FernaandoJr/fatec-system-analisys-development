#include <stdio.h>

/*
Efetuar o cálculo da quantidade de litros de combustível gastos
em uma viagem, sabendo-se que o carro faz 12km por litro.
Deverão ser fornecidos o tempo gasto na viagem e a
velocidade média.

▪ Distância = 𝑡𝑒𝑚𝑝𝑜 × 𝑣𝑒𝑙𝑜𝑐𝑖𝑑𝑎𝑑𝑒
▪ Litros = 𝑑𝑖𝑠𝑡â𝑛𝑐𝑖𝑎 ÷ 12
*/

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