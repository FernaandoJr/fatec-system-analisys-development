#include <stdio.h>

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