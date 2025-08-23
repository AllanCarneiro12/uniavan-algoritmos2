/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-08-22
Descrição: faça um codigo com uma matriz de 3x4 e substitua os valores negativos por 0
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINHAS 3
#define COLUNAS 4

void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    int mat[LINHAS][COLUNAS];

    for (int i = 0; LINHAS > i; i++)
    {
        for (int j = 0; COLUNAS > j; j++)
        {
            // printf("insira o valor\n");
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; LINHAS > i; i++)
    {
        for (int j = 0; COLUNAS > j; j++)
        {
            if (mat[i][j] < 0)
            {
                mat[i][j] = 0;
            }
        }
    }

    for (int i = 0; LINHAS > i; i++)
    {
        for (int j = 0; COLUNAS > j; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}