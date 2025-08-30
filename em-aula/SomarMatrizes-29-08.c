/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-08-29
Descrição: Somar duas matrizes
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    int matriz1[2][3] = {{5, 2, 7},
                        {3, 10, 6}};
    int matriz2[2][3] = {{8, 4, 9},
                        {2, 9, 5}};
    int matrizSomada[2][3];
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizSomada[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrizSomada[i][j]);
        }
        printf("\n");
    }
}