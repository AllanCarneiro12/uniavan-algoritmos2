/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-10-10
Descrição: vetor de inteiros usando malloc
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    int *vetor;

    vetor = (int *)malloc(5 * sizeof(int));

    if (vetor == NULL) {
        printf("Erro de alocação!");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        vetor[i] = i * 2;
    }

    for (int i = 0; i < 5; i++) {
        printf("Vetor[%d]: %d\n", i, vetor[i]);
    }

    printf("Endereço: %p\n", (void *)vetor);

    free(vetor);
    return 0;
}