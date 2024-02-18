#include <stdio.h>
#define PI 3.14159265358979323846

/*
Desenvolva um programa que solicite ao usuário o raio de um circulo e
calcule a area e o perimetro do circulo. Use as formulas discutidas
anteriormente e exiba os resultados.
*/

int main () {
    double raio, area, perimetro;

    printf("Digite o valor de um raio de um circulo: ");
    scanf("%lf",&raio);

    area = PI * raio * raio;
    perimetro = 2* PI * raio;

    printf("\nÁrea do círculo de raio %lf: %lf\n", raio, area);
    printf("Perímetro do círculo de raio %lf: %lf\n", raio, perimetro);

    return 0;
}