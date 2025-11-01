/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-10-31
Descrição: exemplo not
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    unsigned int a = 12; // 00001100
    printf("~a = %d\n", ~a); // Resultado depende do tamanho do tipo
}