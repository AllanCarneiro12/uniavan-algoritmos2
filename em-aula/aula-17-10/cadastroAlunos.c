/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-10-17
Descrição: cadastro de alunos e notas
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 3
#define MAX_DISCIPLINAS 4

// Definindo um tipo personalizado com typedef
typedef struct
{
    char nome[50];                // Nome do aluno
    float notas[MAX_DISCIPLINAS]; // Vetor (matriz unidimensional) de notas
    float media;                  // M�dia do aluno
} Aluno;

// Prot�tipos das fun��es
void calcularMedias(Aluno *turma, int qtd);
void mostrarTurma(const Aluno *turma, int qtd);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    // Cria uma matriz de structs Aluno
    Aluno turma[MAX_ALUNOS];
    // Linha e Coluna
    int i, j;

    printf("=== Cadastro de Alunos ===\n");

    // Entrada de dados
    for (i = 0; i < MAX_ALUNOS; i++)
    {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: ");
        fgets(turma[i].nome, sizeof(turma[i].nome), stdin);

        // Leitura das notas
        for (j = 0; j < MAX_DISCIPLINAS; j++)
        {
            printf("Nota da disciplina %d: ", j + 1);
            scanf("%f", &turma[i].notas[j]);
        }
        getchar(); // Limpa o buffer ap�s o scanf
    }

    // Chamada da fun��o usando ponteiro
    // para o in�cio da matriz
    calcularMedias(turma, MAX_ALUNOS);

    // Mostra resultados
    mostrarTurma(turma, MAX_ALUNOS);

    return 0;
}

// Fun��o que calcula a m�dia dos alunos
void calcularMedias(Aluno *turma, int qtd)
{
    int i, j;
    for (i = 0; i < qtd; i++)
    {
        float soma = 0.0; // capricho
        for (j = 0; j < MAX_DISCIPLINAS; j++)
        {
            soma += turma[i].notas[j];
        }
        turma[i].media = soma / MAX_DISCIPLINAS;
    }
}

// Procedimento que exibe os dados dos alunos
void mostrarTurma(const Aluno *turma, int qtd)
{
    int i, j;
    printf("\n=== Relat�rio da Turma ===\n");
    for (i = 0; i < qtd; i++)
    {
        printf("\nAluno: %s", turma[i].nome);
        printf("Notas: ");
        for (j = 0; j < MAX_DISCIPLINAS; j++)
        {
            printf("%.1f ", turma[i].notas[j]);
        }
        printf("\nM�dia: %.2f", turma[i].media);
        if (turma[i].media >= 7.0)
            printf(" (Aprovado)\n");
        else
            printf(" (Reprovado)\n");
    }
}
