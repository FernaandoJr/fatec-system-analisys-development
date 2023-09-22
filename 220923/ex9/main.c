#include <stdio.h>

int main() {
    float num1;
    float num2;
    float result;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    result = num1 - num2;

    if (result >= 0){
        printf("%.f, %.f", num2, num1);
    } else{
        printf("%.f, %.f", num1, num2);
    }

    return 0;
}
