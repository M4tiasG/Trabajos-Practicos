#include <stdio.h>

void mostrarMatriz(int filas, int columnas, int matriz[filas][columnas]){
    int i,j;

    for (i=0; i<filas; i++){
        for (j=0; j<columnas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void transponer(int filas, int columnas, int matriz[filas][columnas]){
    int i,j;

    for (i=0;i<columnas ; i++){
        for (j=0; j<filas; j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
}

int main(){
    int matriz[][3]={
        {1,2,3},
        {4,5,6},
    };

    // sacar longitud de filas y columnas automaticamente
    int filas = sizeof(matriz) / sizeof(matriz[0]); //           24 bytes/12 bytes = 2
    int columnas = sizeof(matriz[0]) / sizeof(matriz[0][0]);//   12 bytes / 4 bytes = 3   

    mostrarMatriz(filas, columnas, matriz);
    printf("\n");
    transponer(filas, columnas, matriz);

    return 0;
}