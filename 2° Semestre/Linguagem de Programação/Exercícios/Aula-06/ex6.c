#include <stdio.h>
#include <math.h>

/*
Baseado no exemplo anterior sobre IMC, expanda o programa para calcular o
IMC de vårios individuos, usando funções para ler dados, calcular IMC e
imprimir resultados
*/

/**
 * Calculates the Body Mass Index (BMI) based on weight and height.
 * 
 * @param peso   A pointer to the weight of a person.
 * @param altura A pointer to the height of a person.
 * @return       The calculated BMI.
 */
float CalcularIMC(float *peso, float *altura){
    return (*peso / (pow(*altura,2)));
}


int main () {
    float pessoas[5][2];
    for (int i = 0; i < 5; i++) {
        printf("Digite o peso da pessoa %d (em kg): ", i+1);
        scanf("%f", &pessoas[i][0]);
        printf("Digite a altura da pessoa %d (em m): ", i+1);
        scanf("%f", &pessoas[i][1]);
    }
    for (int i = 0; i < 5; i++) {
        float imc = CalcularIMC(&pessoas[i][0], &pessoas[i][1]);
        if(imc < 18.5){
            printf("IMC da pessoa %d: %.2f\n", i+1, imc);
            printf("Estado: Abaixo do peso\n\n");
        } else if(imc >= 18.5 && imc <= 24.9){
            printf("IMC da pessoa %d: %.2f\n", i+1, imc);
            printf("Estado: Peso saudavel\n\n");
        } else if(imc >= 25 && imc <= 30){
            printf("IMC da pessoa %d: %.2f\n", i+1, imc);
            printf("Estado: Sobrepeso\n\n");
        } else if(imc >= 30.1 && imc <= 39.9){
            printf("IMC da pessoa %d: %.2f\n", i+1, imc);
            printf("Estado: Obeso\n\n");
        } else{
            printf("IMC da pessoa %d: %.2f\n", i+1, imc);
            printf("Estado: Obeso Morbido\n\n");
        }
    }
    return 0;
}