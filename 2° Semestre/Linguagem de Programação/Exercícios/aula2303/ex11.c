#include <stdio.h>

int main (int argc, char *argv[]) {
    int matriz1[3][3]= {{12,2,3},{4,5,6},{7,8,9}};
    int matriz2[3][3]= {{110,120,130},{140,115,106},{107,180,190}};
    int produto[3][3];
    printf("\rResultado:\n");
    for(int i = 0;i < 3;i++){
        for(int j = 0; j <3;j++){
            produto[i][j] = matriz1[i][j] * matriz2[i][j];
            printf("\t%d ", produto[i][j]);
        }
        printf("\n");
    }
    return 0;
}