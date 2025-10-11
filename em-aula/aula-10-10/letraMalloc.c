/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-10-10
Descrição: letra malloc
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    char *letra;

    letra = (char *)malloc(sizeof(char));

    if (letra == NULL) {
        printf("Erro de alocação!");
        return 1;
    }

    *letra = 'A';
    printf("%x\n", letra);
    printf("Letra: %c\n", *letra);

    free(letra);
    return 0;
}