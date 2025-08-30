/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-08-29
Descrição: identifique a vogar do nome digitado
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int VerificaVogal(char L)
{
    if (L == 'a' || L == 'A' ||
        L == 'e' || L == 'E' ||
        L == 'i' || L == 'I' ||
        L == 'o' || L == 'O' ||
        L == 'u' || L == 'U')
        return (1);
    else
        return (0);
}

void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    int tamanho;
    printf("\nDigite um nome: ");
    gets(nome);
    tamanho = strlen(nome);
    for (int i = 0; i < tamanho; i++)
    {
        if (VerificaVogal(nome[i]) == 1)
            printf("\nA letra [%c] eh uma VOGAL", nome[i]);
        else
            printf("\nA letra [%c] eh uma CONSOANTE", nome[i]);

        // printf("\n");
        // system("pause");
    }
}