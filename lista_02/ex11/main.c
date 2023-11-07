#include <stdio.h>

/*
Ler três números e imprimi-los em ordem crescente.
*/

int main() {
    float num1;
    float num2;
    float num3;
    printf("Digite 3 numeros:\n");
    scanf("%f %f %f", &num1, &num2, &num3);

    if(num1 < num2 && num1 < num3){
        if(num2 < num3){
            printf("%.f %.f %.f", num1,num2,num3);
        } else{
            printf("%.f %.f %.f", num1,num3,num2);
        }
    } else if(num2 < num3 && num2 < num1){
        if(num3 < num1){
            printf("%.f %.f %.f", num2,num3,num1);
        } else{
            printf("%.f %.f %.f", num2,num1,num3);
        }
    } else if(num3 < num1 && num3 < num2){
        if (num2 <num1){
            printf("%.f %.f %.f", num3,num2,num1);
        } else{
            printf("%d %d %d", num3,num1,num2);
        }
    }
    return 0;
}
