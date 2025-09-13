/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-09-12
Descrição: exemplo de vetor dentro do struct
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto
{
    int id;
    char nome[30];
    float preco;
};

void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    struct Produto produtos[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Produto %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &produtos[i].id);
        getchar();

        printf("Nome: ");
        fgets(produtos[i].nome, sizeof(produtos[i].nome), stdin);

        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
    }

    printf("\nlista de produtos:\n");

    for (int i = 0; i < 2; i++)
    {
        printf("Produto %d: %sPreco: R$%.2f\n", produtos[i].id, produtos[i].nome, produtos[i].preco);
    }
    
    
}