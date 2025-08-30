/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-08-29
Descrição: faça uma matriz transposta
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main ()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    int matriz[2][3] = {{1,2,3},
                        {4,5,6}};
    int transposta[3][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposta[j][i] = matriz[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
}