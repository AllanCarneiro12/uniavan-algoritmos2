/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-10-10
Descrição: palavra malloc
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    char *nome;

    nome = (char *)malloc(20 * sizeof(char));

    if (nome == NULL) {
        printf("Erro de alocação!");
        return 1;
    }

    sprintf(nome, "Allan Carneiro");
    printf("Nome: %s\n", nome);
    printf("Endereço: %p\n", (void *)nome);
    printf("Tamanho alocado: %zu bytes\n", 20 * sizeof(char));

    free(nome);
    return 0;
}