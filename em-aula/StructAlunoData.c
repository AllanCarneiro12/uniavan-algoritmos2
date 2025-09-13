/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-09-12
Descrição: struct aluno data
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

struct Aluno
{
    char nome[50];
    struct Data nascimento;
};

void main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    struct Aluno aluno;
    printf("Digite o nome do aluno:");
    fgets(aluno.nome, sizeof(aluno.nome),stdin);

    printf("digite a data de nascimento do aluno:\n");
    scanf("%d %d %d", &aluno.nascimento.dia, &aluno.nascimento.mes, &aluno.nascimento.ano);

    printf("Aluno: %snascimento: %d/%d/%d", aluno.nome, aluno.nascimento.dia, aluno.nascimento.mes, aluno.nascimento.ano);
}