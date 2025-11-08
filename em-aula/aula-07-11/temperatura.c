/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-11-07
Descrição: leitura de temperatura durante os dias
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encontrarExtremos(float *temperaturas, int n, float *min, float *max) {
    *min = temperaturas[0];
    *max = temperaturas[0];
    for (int i = 1; i < n; i++) {
        if (temperaturas[i] < *min) {
            *min = temperaturas[i];
        }
        if (temperaturas[i] > *max) {
            *max = temperaturas[i];
        }
    }
}

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    float *temperaturas;
    int n, i;
    float maxima, minima;

    printf("Digite o número de dias: ");
    scanf("%d", &n);

    temperaturas = (float *)malloc(n * sizeof(float));

    if (temperaturas == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
    }

    encontrarExtremos(temperaturas, n, &minima, &maxima);

    printf("Temperatura mínima: %.2f\n", minima);
    printf("Temperatura máxima: %.2f\n", maxima);

    free(temperaturas);
    return 0;
}