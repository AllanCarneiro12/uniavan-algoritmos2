/*
Nome: Allan Carneiro da Cunha Silveira, Isadora Voss Brugnera, Jenifer Beatriz Nunes Ribeiro
Data: 2025-10-17
Descrição: Cadastro produtos
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 5


typedef struct
{
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    Produto produtos[MAX_PRODUTOS];


    return 0;
}