/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-09-12
Descrição: struct data
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data
{
    int dia;
    int mes;
    int ano;
};


void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    struct Data data;

    printf("digite uma data:\n");
    scanf("%d %d %d", &data.dia, &data.mes, &data.ano);
    printf("Data: %d/%d/%d", data.dia, data.mes, data.ano);
    
}