#include <stdio.h>


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