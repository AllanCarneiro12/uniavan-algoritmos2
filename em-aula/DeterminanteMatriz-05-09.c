/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-09-05
Descrição: determinante da matriz
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int determinante2x2(int m[2][2])
{
    return m[0][0] * m[1][1] - m[1][0] * m[0][1];
}

void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    int matriz[2][2] = {{4, 6}, {3, 8}};
    printf("Determinante da matriz %d\n", determinante2x2(matriz));
}