#include <stdio.h>

int main () {
    float n1,n2,n3;

    printf("Digite 3 numeros :\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    if ((n2+n3) > n1 && (n1+n3) > n2 && (n2+n1) > n3){
        printf("Os 3 lados formam um triângulo!");
    } else {
        printf("Os 3 lados não formam um triângulo!");
    }
    return 0;
}