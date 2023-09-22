#include <stdio.h>

int main() {
    float n1;
    float n2;
    float n3;
    float n4;
    float n5;
    float maior;
    float menor;

    printf("Digite 5 numeros:\n");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){
        maior = n1;

        if(n2 < n3 && n2 < n4 && n2 < n5){

        }

    } else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5){
        maior = n2;

    } else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5){
        maior = n3;

    } else if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5){
        maior = n4;

    } else if (n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4){
        maior = n5;

    }


    return 0;
}
