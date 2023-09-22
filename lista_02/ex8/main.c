#include <stdio.h>

int main() {
    float num;
    float num2;
    float result;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    result = num - num2;

    if (result >= 0){
        printf("primeiro numero e maior");
    } else{
        printf("segundo numero e maior");
    }

    return 0;
}
