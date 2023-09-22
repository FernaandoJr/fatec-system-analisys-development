#include <stdio.h>

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