#include <stdio.h>
/*
Crie um programa que permita ao usuårio inserir notas de estudantes em um
vetor. Use funções para calcular a média, a nota mais alta e a nota mais baixa.
*/

float CalcularMedia(float notas[]){
    float media = 0;
    for(int i = 0; i < 10 ;i++){
        media += notas[i];
    }
    return media / 10;
}

float MaisAlta(float notas[], int i, float maior, float nota){
    if(notas[i] > maior){
        maior = notas[i];
    }
    return maior;
}
float MaisBaixa(float notas[], int i, float menor, float nota){
    if(notas[i] < menor){
        menor = notas[i];
    }
    return menor;
}

int main() {
    float notas[10];
    float maior, menor;
    printf("Digite 10 notas\n");
    for(int i = 0; i < 10;i++){
        printf("Nota %d:", i+1);
        scanf("%f", &notas[i]);
        if(i == 0){
            menor = notas[i];
            maior = notas[i];
        }
        maior = MaisAlta(notas, i , maior, notas[i]);
        menor = MaisBaixa(notas, i , menor, notas[i]);
    }
    
    
    float media = CalcularMedia(notas);
    printf("Media: %.2f\n", media);
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    return 0;
}
