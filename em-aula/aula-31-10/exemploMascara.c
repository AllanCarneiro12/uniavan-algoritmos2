/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-10-31
Descrição: exemplo mascara de bits
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MASCARA 0x0F // 00001111

void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    unsigned int valor = 0xAB; // 10101011
    unsigned int resultado = valor & MASCARA;
    printf("Resultado: %X\n", resultado); // Saída: B
}