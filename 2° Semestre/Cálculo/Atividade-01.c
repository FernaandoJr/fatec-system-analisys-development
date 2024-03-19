#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793
/*
Nomes: Fernando Divino de Moraes Junior e Luís Felipe Piasentini

Atividade: Fazer um algoritmo que entre com um valor de ângulo x em graus (no corpo do código) 
e imprima os seguintes resultados (ou mensagem de erro de inexistência do resultado):

seno do ângulo x
cosseno do ângulo x
tangente do ângulo x
*/


int main (int argc, char *argv[]) {
    double angulo_grau = 90; // <- DIGITE O ÂNGULO DESEJADO AQUI!
    double angulo_rad;
    double resultado_sen, resultado_cos, resultado_tan;
    angulo_rad = angulo_grau * (PI / 180.0);

    resultado_sen = sin(angulo_rad);
    resultado_cos = cos(angulo_rad);
    resultado_tan = tan(angulo_rad);

    if(angulo_grau == 90 || angulo_grau == 270){
        printf("\nSeno do Ângulo %.0lf°: %.4lf°\n",angulo_grau,resultado_sen);
        printf("Cosseno do Ângulo %.0lf°: %.4lf°\n",angulo_grau,resultado_cos);
        printf("Tangente do Ângulo %.0lf°: NÃO EXISTE!");
    } else{
        printf("\nSeno do Ângulo %.0lf°: %.4lf°\n",angulo_grau,resultado_sen);
        printf("Cosseno do Ângulo %.0lf°: %.4lf°\n",angulo_grau,resultado_cos);
        printf("Tangente do Ângulo %.0lf°: %.4lf°\n",angulo_grau,resultado_tan);
    }



    return 0;
}