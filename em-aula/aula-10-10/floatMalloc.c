/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-10-10
Descrição: alocar memoria para um vetor de float
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    float *vetor;

    vetor = (float *)malloc(3 * sizeof(float));

    if (vetor == NULL) {
        printf("Erro de alocação!");
        return 1;
    }

    vetor[0] = 1.1f;
    vetor[1] = 2.2f;
    vetor[2] = 3.3f;

    printf("Vetor: %.1f, %.1f, %.1f\n", vetor[0], vetor[1], vetor[2]);
    printf("Endereço: %p\n", (void *)vetor);
    //printf("Tamanho alocado: %zu bytes\n", 3 * sizeof(float));

    free(vetor);
    return 0;
}