/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-10-10
Descrição: ponteiro malloc
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    int *ptr;

    ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Erro de alocação!");
        return 1;
    }

    *ptr = 10;

    printf("Valor: %d\n", *ptr);
    printf("Endereço: %p\n", (void *)ptr);

    free(ptr);
    return 0;
}