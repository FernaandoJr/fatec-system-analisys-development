#include <stdio.h>

/*
Sabendo que o perímetro de um círculo é calculado pela
fórmula: 2 × 𝜋 × 𝑟𝑎𝑖𝑜, e a área pela fórmula 𝜋 × 𝑟𝑎𝑖𝑜2, faça
um programa que dado o raio de um círculo ele calcule o
perímetro e a área deste.
*/

int main () {
    float r = 0;
    float perimetro = 0;
    float area = 0;
    printf("Digite um valor de um raio de um circulo: ");
    scanf("%f", &r);

    perimetro = 2 * 3.14 * r;
    area = 3.14 * (r*r);
    printf("Perimetro = %.2f \n", perimetro);
    printf("Area = %.2f", area);
    return 0;
}