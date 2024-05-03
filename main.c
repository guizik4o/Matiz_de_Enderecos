#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    float matriz[3][3];

    for (int i = 0; i < 3; i++) {
    	for (int j = 0; j < 3; j++) {
       		matriz[i][j] = (i + j) * 1.5;
        }
    }
    printf("Enderecos das posicoes da matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Posicao [%d][%d]: %p\n", i, j, (void*)&matriz[i][j]);
        }
    }

    return 0;
}
