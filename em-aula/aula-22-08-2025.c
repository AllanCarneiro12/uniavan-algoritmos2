/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-08-22
Descrição: Codigo que faça uma matriz de 3x5 e aleatorize
os numeros dentro dele, depoi imprima como uma matriz
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LINHAS 3
#define COLUNAS 5

void main ()
{
    system("cls");
    setlocale( LC_ALL, "Portuguese");
    srand(time(NULL));

    int mat[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            mat[i][j] = rand() % (LINHAS * COLUNAS) + 1;
        }
    }
    for (int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}