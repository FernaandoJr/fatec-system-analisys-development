#include <stdio.h>
#include <math.h>


int main () {
    double a,b,c;
    double eq_plus, eq_neg;

    printf("Digite 3 numeros :\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    eq_plus = ((-b + sqrt((b*b) - 4 * a * c)) / 2 * a);
    eq_neg = ((-b - sqrt((b*b) - 4 * a * c)) / 2 * a);

    printf("Resultado com delta positivo: %lf\n\n", eq_plus);
    printf("Resultado com delta negativo: %lf\n\n", eq_neg);
    return 0;
}