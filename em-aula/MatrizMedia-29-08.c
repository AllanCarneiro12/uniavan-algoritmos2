/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-08-29
Descrição: Media dos elementos de uma matriz
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main ()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int soma = 0;
    float media = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma += matriz[i][j];
        }
    }
    media = (float) soma / 9.0;

    printf("Media: %.2f", media);
}