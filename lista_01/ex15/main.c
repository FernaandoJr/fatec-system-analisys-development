#include <stdio.h>

/*
Para se calcular o volume de um cilindro usamos a seguinte
fórmula: 𝜋 × 𝑟𝑎𝑖𝑜2 × 𝑎𝑙𝑡𝑢𝑟𝑎, faça um programa que dado a
altura de uma lata e seu raio, calcule seu volume.
*/

int main () {
    float altura,raio,volume;
    printf("Digite um valor para a altura: ");
    scanf("%f", &altura);
    printf("Digite um valor para o raio: ");
    scanf("%f", &raio);

    volume = 3.14 * (raio*raio) * altura;

    printf("Volume é : %.2f", volume);
    return 0;
}