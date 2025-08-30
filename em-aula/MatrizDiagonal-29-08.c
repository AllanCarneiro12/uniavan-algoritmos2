/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-08-29
Descrição: imprimir a diagonal de uma matriz principal
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main ()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    int matriz[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", matriz[i][i]);
    }
}