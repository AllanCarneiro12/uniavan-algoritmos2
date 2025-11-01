/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-10-31
Descrição: exemplo OR
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    unsigned int a = 12; // 1100
    unsigned int b = 10; // 1010
    printf("a | b = %d\n", a | b); // Saída: 14 (1110)

}