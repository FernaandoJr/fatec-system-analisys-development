#include <stdio.h>

int main() {
    float n1,n2,n3;
    float maior, menor;

    printf("Digite 3 numeros:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    if(n1 > n2 && n1 > n3){
        maior = n1;
        if(n2 < n3){
            menor = n2;
        } else{
            menor = n3;
        }
    } else if(n2 > n1 && n2 > n3){
        maior = n2;
        if(n1 < n3){
            menor = n1;
        } else{
            menor = n3;
        }
    } else if(n3 > n1 && n3 > n2){
        maior = n3;
        if(n1 < n2){
            menor = n1;
        } else{
            menor = n2;
        }
    }

    printf("Maior numero = %.f\n",maior);
    printf("Menor numero = %.f",menor);
    return 0;
}