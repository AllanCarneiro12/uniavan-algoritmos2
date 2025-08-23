/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-08-22
Descrição: crie uma matriz com dimensões e valores definidos pelo o usuário
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    int tamLinhas, tamColunas;
    printf("insira o numero de linhas\n");
    scanf("%d", &tamLinhas);
    printf("insira o numero de colunas\n");
    scanf("%d", &tamColunas);

    int mat[tamLinhas][tamColunas];

    for (int i = 0; tamLinhas > i; i++)
    {
        for (int j = 0; tamColunas > j; j++)
        {
            printf("insira o valor da posicao %dx%d\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; tamLinhas > i; i++)
    {
        for (int j = 0; tamColunas > j; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}