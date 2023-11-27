#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Pedir dimensiones
    int fil , col, i, j;
    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d", &fil);
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &col);

    //numeros aleatorios e impresion de la matriz original
    int matrix[fil][col];
    srand(time(0));

    printf("\nMatriz original:\n");
    for (i = 0; i < fil; i++)
    {
        for (j = 0; j < col; j++)
        {
            matrix[i][j] = rand() % 101;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}