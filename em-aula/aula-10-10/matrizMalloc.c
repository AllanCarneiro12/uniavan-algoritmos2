/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-10-10
Descrição: testando malloc
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    int *matriz;

    matriz = (int *)malloc(4 * sizeof(int));

    if (matriz == NULL)
    {
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    for (int i = 0; i < 4; i++)
    {
        matriz[i] = i + 1;
    }

    printf("%d, %d, \n%d, %d\n", matriz[0], matriz[1], matriz[2], matriz[3]);

    free(matriz);

    return 0;
}