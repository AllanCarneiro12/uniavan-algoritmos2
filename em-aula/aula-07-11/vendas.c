/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-11-07
Descrição: vendas de produtos
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Venda {
    char produto[50];
    int quantidade;
    float valorUnitario;

};

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    struct Venda *vendas;
    int n, i;
    float totalVendas = 0.0;

    printf("Digite o número de vendas: ");

    printf("Digite o número de vendas: ");
    scanf("%d", &n);

    vendas = (struct Venda *)malloc(n * sizeof(struct Venda));

    if (vendas == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nVenda %d:\n", i + 1);
        printf("Produto: ");
        scanf("%[^\n]", vendas[i].produto);
        printf("Quantidade: ");
        scanf("%d", &vendas[i].quantidade);
        printf("Valor Unitário: ");
        scanf("%f", &vendas[i].valorUnitario);
    }

    printf("\nResumo das Vendas:\n");
    for (i = 0; i < n; i++) {
        float totalProduto = vendas[i].quantidade * vendas[i].valorUnitario;
        printf("%s - total: R$ %.2f\n", vendas[i].produto, totalProduto);
        totalVendas += totalProduto;
    }

    printf("\nTotal Geral de Vendas: R$ %.2f\n", totalVendas);

    free(vendas);
    return 0;
}