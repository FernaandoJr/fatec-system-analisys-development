#include <stdio.h>

/*
Dois alienígenas crescem indefinidamente. Zerg tem 1,50m e
cresce 2cm por ano enquanto Splim tem 1,30m e cresce 3cm
por ano. Faça um programa que calcule quantos anos serão
necessários para que Splim seja maior que Zerg.
*/

int main () {
    float zerg = 1.50; // 2cm por ano
    float splim = 1.30; // 3cm por ano
    int qtd_ano = 0;

    while(splim <= zerg){
        zerg = zerg + 0.2;
        splim = splim + 0.3;
        qtd_ano++;
    }
    printf("\nAltura de Splim: %.1f",splim);
    printf("\nAltura de Zerg: %.1f",zerg);
    printf("\nQuantidade de anos: %d",qtd_ano);
    return 0;
}