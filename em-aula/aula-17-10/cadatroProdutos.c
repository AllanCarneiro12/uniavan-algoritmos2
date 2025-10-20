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
    int menu, encontrado = 0;
    int contador = 0;
    int codigo;

    while (menu != -1) {
        system("cls");
        printf("Cadastro de Produtos\n");
        printf("-------------------\n");

        printf("Menu:\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Listar Produtos\n");
        printf("3. Alterar estoque do Produto\n");
        printf("4. Remover Produto\n");
        printf("-1. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &menu);
        if (menu == -1) {
            break;
        }

        switch (menu) {
            case 1:
                // Cadastrar Produto
                printf("Digite o código do produto: ");
                scanf("%d", &produtos[contador].codigo);
                printf("Digite o nome do produto: ");
                scanf("%s", produtos[contador].nome);
                printf("Digite o preço do produto: ");
                scanf("%f", &produtos[contador].preco);
                printf("Digite a quantidade do produto: ");
                scanf("%d", &produtos[contador].quantidade);
                contador++;
                break;

            case 2:
                // Listar Produtos
                for (int i = 0; i < contador; i++) {
                    printf("Código: %d\n", produtos[i].codigo);
                    printf("Nome: %s\n", produtos[i].nome);
                    printf("Preço: %.2f\n", produtos[i].preco);
                    printf("Quantidade: %d\n", produtos[i].quantidade);
                    printf("-------------------\n");
                }
                system("pause");
                break;

            case 3:
                // Alterar estoque do Produto
                printf("Digite o código do produto a ser alterado: ");
                scanf("%d", &codigo);
                for (int i = 0; i < contador; i++) {
                    if (produtos[i].codigo == codigo) {
                        printf("Digite a nova quantidade: ");
                        scanf("%d", &produtos[i].quantidade);
                        encontrado = 1;
                        break;
                    }
                }
                if (!encontrado) {
                    printf("Produto não encontrado.\n");
                }
                system("pause");
                break;

            case 4:
                // Remover Produto
                printf("Digite o código do produto a ser removido: ");
                scanf("%d", &codigo);
                for (int i = 0; i < contador; i++) {
                    if (produtos[i].codigo == codigo) {
                        for (int j = i; j < contador - 1; j++) {
                            produtos[j] = produtos[j + 1];
                        }
                        contador--;
                        encontrado = 1;
                        break;
                    }
                }
                if (!encontrado) {
                    printf("Produto não encontrado.\n");
                }
                system("pause");
                break;

            default:
                printf("Opção inválida.\n");
                system("pause");
                break;
        }
    }

    return 0;
}