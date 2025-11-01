/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-10-31
Descrição: exemplo deslocamento de bit a direita
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    unsigned int a = 20;              // 10100
    printf("a >> 2 = %d\n", a >> 2); // Saída: 5 (00101)
}