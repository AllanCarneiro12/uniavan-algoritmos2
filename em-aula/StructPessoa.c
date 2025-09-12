/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-09-12
Descrição: struct pessoa
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa {
    char nome[50];
    int idade;
};

void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    struct pessoa p;
    
    printf("digite o nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    
    printf("digite a idade: ");
    scanf("%d", &p.idade);

    printf("nome: %sidade: %d", p.nome, p.idade);
    
}