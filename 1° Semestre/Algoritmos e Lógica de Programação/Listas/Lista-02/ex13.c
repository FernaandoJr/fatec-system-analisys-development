#include <stdio.h>

/*
Ler 5 números e imprimir o maior e o menor.
*/

int main() {
    float n1,n2,n3, n4,n5, maior, menor;

    printf("Digite 5 numeros:\n");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){ // N1 MAIOR
        maior = n1;

        if(n2 < n3 && n2 < n4 && n2 < n5){ //N1 MAIOR N2 MENOR
            menor = n2;
        } else if(n3 < n2 && n3 < n4 && n3 < n5){ //N1 MAIOR N3 MENOR
            menor = n3;
        } else if(n4 < n2 && n4 < n3 && n4 < n5){ //N1 MAIOR N4 MENOR
            menor = n4;
        } else{ //N1 MAIOR N5 MENOR
            menor = n5;
        }

    } else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5){
        maior = n2;

        if(n1 < n3 && n1 < n4 && n1 < n5){ //N2 MAIOR N1 MENOR
            menor = n1;
        } else if(n3 < n1 && n3 < n4 && n3 < n5){ //N2 MAIOR N3 MENOR
            menor = n3;
        } else if(n4 < n1 && n4 < n3 && n4 < n5){ //N2 MAIOR N4 MENOR
            menor = n4;
        } else{ //N2 MAIOR N5 MENOR
            menor = n5;
        }

    } else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5){
        maior = n3;

        if(n1 < n2 && n1 < n4 && n1 < n5){ //N3 MAIOR N1 MENOR
            menor = n1;
        } else if(n2 < n1 && n2 < n4 && n2 < n5){ //N3 MAIOR N2 MENOR
            menor = n3;
        } else if(n4 < n1 && n4 < n2 && n4 < n5){ //N3 MAIOR N4 MENOR
            menor = n4;
        } else{ //N3 MAIOR N5 MENOR
            menor = n5;
        }

    } else if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5){
        maior = n4;

        if(n1 < n2 && n1 < n3 && n1 < n5){ //N4 MAIOR N1 MENOR
            menor = n1;
        } else if(n2 < n1 && n2 < n3 && n2 < n5){ //N4 MAIOR N2 MENOR
            menor = n2;
        } else if(n3 < n1 && n3 < n2 && n3 < n5){ //N4 MAIOR N3 MENOR
            menor = n3;
        } else{ //N4 MAIOR N5 MENOR
            menor = n5;
        }

    } else if (n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4){
        maior = n5;

        if(n1 < n2 && n1 < n3 && n1 < n4){ //N5 MAIOR N1 MENOR
            menor = n1;
        } else if(n2 < n1 && n2 < n3 && n2 < n4){ //N5 MAIOR N2 MENOR
            menor = n2;
        } else if(n3 < n1 && n3 < n2 && n3 < n4){ //N5 MAIOR N3 MENOR
            menor = n3;
        } else{ //N5 MAIOR N4 MENOR
            menor = n4;
        }
    }
    
    printf("\nLista completa: %.f, %.f, %.f, %.f, %.f\n\n", n1,n2,n3,n4,n5);
    printf("Maior numero: %.f\n", maior);
    printf("Menor numero: %.f\n\n", menor);
    return 0;
}
