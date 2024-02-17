#include <stdio.h>

/*
Implemente um programa que:
• Solicite ao usuário um numero inteiro.
• Converta esse numero inteiro em um float.
• Multiplique o float resultante por 0.5.
• Converta o resultado de volta para um inteiro (truncando a parte decimal),
• Exiba o valor final ao usuário
*/

int main () {
    int num_int;
    float num_float, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num_int);

    num_float = (float)num_int;

    resultado = num_float * .5;

    resultado = (int)resultado;

    printf("\nValor do resultado final: %f\n",resultado);    
    return 0;
}