/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-08-15
Descrição: aula de hoje
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void incrementar (int x)
{
    x++;
    printf("Dentro da funcao x = %d\n", x);
}

void main ()
{
    system("cls");
    setlocale( LC_ALL, "Portuguese");
    int num = 5;
    printf("Antes da chamada da funcao: num = %d\n", num);
    incrementar(num);
    printf("Depois da chamada da funcao: num = %d\n", num);
}