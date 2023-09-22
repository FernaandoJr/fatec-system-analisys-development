#include <stdio.h>

int main() {
    float num1;
    float num2;
    float num3;
    float maior;
    float intermed;
    float menor;

    printf("Digite 3 numeros:\n");
    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3){
        maior = num1;

        if(num2 > num3){ // 1° ALGORITMO
            intermed = num2;
            menor = num3;
        } else{
            intermed = num3;
            menor = num2;
        } // FINAL 1° ALGORITMO

    } else if(num2 > num1 && num2 > num3){
        maior = num2;

        if(num1 > num3){ // 2° ALGORITMO
            intermed = num1;
            menor = num3;
        } else{
            intermed = num3;
            menor = num1;
        } // FINAL 2° ALGORITMO

    } else{
        maior = num3;

        if(num1 > num2){ // 3° ALGORITMO
            intermed = num1;
            menor = num2;
        } else{
            intermed = num2;
            menor = num1;
        } // FINAL 3° ALGORITMO

    }
    printf("Maior numero: %.f\n",maior);
    printf("Maior intermediario: %.f\n",intermed);
    printf("Maior menor: %.f\n",menor);
    return 0;
}
