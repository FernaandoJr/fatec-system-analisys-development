#include <stdio.h>

int main() {
    int n1,n2;
    int maior, menor;
    printf("Digite dois numeros: \n");
    scanf("%d%d",&n1,&n2);
    if(n1 > n2){
        maior = n1 / 2;
        menor = n2 * 2;
    } else{
        maior = n2 / 2;
        menor = n1 * 2;
    }
    printf("\nMetade do maior: %d\n",maior);
    printf("Dobro do menor: %d",menor);

    return 0;
}