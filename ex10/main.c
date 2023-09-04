#include <stdio.h>

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