#include <stdio.h>

/*
Em um campeonato de arco e flecha tem-se equipes de três
atletas para cada estado. Crie um programa que leia a quantidade
de pontos obtidos por cada um deles e informe se a equipe foi
classificada de acordo com a seguinte especificação:

▪ Ler os pontos de cada jogador da equipe
▪ Mostrar os valores em ordem crescente
▪ Se a soma dos pontos for maior que 100, imprimir a média dos pontos,
senão imprimir desclassificada
*/


int main () {
    int a1,a2,a3;
    float media;

    printf("Digite os pontos dos atletas:\n");
    scanf("%d %d %d", &a1, &a2, &a3);

    media = (a1 + a2 + a3) / 3;

    printf("Ordem Crescente dos pontos: \n");
    if(a1 < a2 && a1 < a3){
        if(a2 < a3){
            printf("%d, %d, %d", a1,a2,a3);
        } else{
            printf("%d, %d, %d", a1,a3,a2);
        }
    } else if(a2 < a3 && a2 < a1){
        if(a3 < a1){
            printf("%d, %d, %d", a2,a3,a1);
        } else{
            printf("%d, %d, %d", a2,a1,a3);
        }
    } else if(a3 < a1 && a3 < a2){
        if (a2 <a1){
            printf("%d, %d, %d", a3,a2,a1);
        } else{
            printf("%d, %d, %d", a3,a1,a2);
        }
    }

    if((a1 + a2 + a3) > 100){
        printf("\n\nMédia dos pontos: %2.f\n\n",media);
        printf("Classificados\n\n");
    } else{
        printf("Desclassificados\n\n");
    }


    return 0;
}