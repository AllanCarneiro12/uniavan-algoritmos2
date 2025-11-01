/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-10-31
Descrição: exemplo deslocamento de bit a esquerda
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    unsigned int a = 5;              // 0101
    printf("a << 1 = %d\n", a << 1); // Saída: 10 (1010)
}