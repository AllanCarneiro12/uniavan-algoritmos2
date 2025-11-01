/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-10-31
Descrição: exemplo 2 bit a bit
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    int a = 5;      // 0000...0101
    int b = a << 1; // 0000...1010
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
}