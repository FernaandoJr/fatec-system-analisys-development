#include <stdio.h>

int main() {
    float num1;
    float num2;
    float num3;
    printf("Digite 3 numeros:\n");
    scanf("%f %f %f", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3){
        printf("numero maior: %.f",num1);
    } else if(num2 > num1 && num2 > num3){
        printf("numero maior : %.f", num2);
    } else{
        printf("numero maior : %.f", num3);
    }
    return 0;
}
