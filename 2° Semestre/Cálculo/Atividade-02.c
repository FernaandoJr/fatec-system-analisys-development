#include <stdio.h>
#include <math.h>
/*
Nome: Fernando Divino de Moraes Júnior
Atividade: Fazer um algoritmo que entre com os valores dos coeficientes a, b e c de uma função quadrática e imprima,
na sequência, os seguintes resultados (ou mensagem de erro de inexistência do resultado):

Se gráfico possui parábola côncava para cima ou para baixo.
Zeros reais da função (no caso de não existir, apresentar uma mensagem de inexistência de zeros reais).
Valores do vértice da parábola.
*/
int main () {
    float a, b, c;
    float delta;
    double xv = 0,yv = 0;
    double x1 = 0,x2 = 0;
    printf("\nDigite os valores dos coeficientes a, b e c de uma função quadrática:\n");
    printf("Coeficiente a: ");
    scanf("%f", &a);
    printf("Coeficiente b: ");
    scanf("%f", &b);
    printf("Coeficiente c: ");
    scanf("%f", &c);

    delta = b*b - (4 * a * c);
    double raiz_delta = sqrtf(delta);
    xv = -( b / (2 * a));
    yv = -(delta / (4 * a));
    x1 = (-b + raiz_delta) / (2 * a);
    x2 = (-b - raiz_delta) / (2 * a);
    a > 0 ? printf("Parábola da função é côncava pra cima\n"): printf("Parábola da função é côncava pra baixo\n");
    if(x1 == x1 || x2 == x2){
        printf("X1: %.4f\n", x1);
        printf("X2: %.4f\n", x2);
    } else{
        printf("A fórmula escolhida não possue zeros reais!\n");
    }
    printf("X vértice: %.4f\n", xv);
    printf("Y vértice: %.4f\n", yv);
    return 0;
}
