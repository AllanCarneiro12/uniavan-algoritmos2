/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-10-10
Descrição: logica basica do uso do malloc e alocação de memoria
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    int *arr;

    arr = (int *)malloc(2 * sizeof(int));

    if (arr == NULL)
    {
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    arr[0] = 1;
    arr[1] = 2;

    printf("Valores: %d, %d\n", arr[0], arr[1]);

    //free(arr);

    return 0;
}