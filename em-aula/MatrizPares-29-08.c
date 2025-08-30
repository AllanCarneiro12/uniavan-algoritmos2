/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-08-29
Descrição: contar numeros pares
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    int matriz[2][3] = {{5, 2, 7},
                        {3, 10, 6}};
    int qntPares=0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] % 2 == 0) qntPares++;
        }
    }

    printf("quantidade de pares: %d", qntPares);
}